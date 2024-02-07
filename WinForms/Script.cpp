#include <Python.h>
#include <fstream>
#include <sstream>
#include <string>
#include <codecvt>
#include <iostream>
#include <iconvlite.h>

//******************************************************************************************
// stackoverflow.com/questions/4804298/how-to-convert-wstring-into-string
std::wstring s2ws(std::string& str) {
    using convert_typeX = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_typeX, wchar_t> converterX;
    return converterX.from_bytes(str);
}

std::string ws2s(std::wstring& wstr) {
    using convert_typeX = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_typeX, wchar_t> converterX;
    return converterX.to_bytes(wstr);
}
//******************************************************************************************

// Функция которая перезаписывает путь, чтобы его мог прочитать Python
std::string create_pathform(std::string path) {
    std::string new_path = "";
    for (char j : path) {
        if (j == '\\') {
            new_path += '\\';
            new_path += '\\';
        } else {
            new_path += j;
        }      
    }
    new_path += '\"';
    return new_path;
}

int Script_work(std::string file_folder, std::string save_folder, std::string script_folder) {   
// Открытие оригинального файла скрипта 
    char* script_path = &script_folder[0];
    std::wifstream script(script_path);
    script.imbue(std::locale(script.getloc(), new std::codecvt_utf8_utf16<wchar_t>));
    
// Сформирована переменная для учета переноса строки
    std::string n = "\n";
    std::wstring nn = s2ws(n);

// Формирование строки пути к файлу Excel
    std::string file_path = "file_path = \"";
    file_path += create_pathform(file_folder);
    std::string sfp = cp2utf(file_path);
    std::wstring wfp = s2ws(sfp);

// Формирование строки пути для сохранения
    std::string save_path = "save_path = \"";
    save_path += create_pathform(save_folder);
    std::string ssp = cp2utf(save_path);
    std::wstring wsp = s2ws(ssp);

// Создание основного текстового блока содержащий скрипт и дополнения
    std::string s = "";
    std::string sc = cp2utf(s);
    std::wstring full_sc = s2ws(sc);

// Весь скрип должен быть перезаписан в переменную типа wstring   
    std::wstring line; // Переменная для построчного считывания
    while (getline(script, line)) {
        if (ws2s(line) == "#RESERVE") { // Стоп на ключевом слове для добавления путей в текст скрипта
            full_sc += line + nn;
            full_sc += wfp + nn;
            full_sc += wsp + nn;
        }
        else {
            full_sc += line + nn;
        }
    }
    script.close();
//*****************************************************
    string itext = ws2s(full_sc);
    string arr[] = { ".exe", ".rar", ".zip", ".iso", ".bat", ".reg", ".bin", ".dll", ".msi",
                     ".pst", ".sys", ".tmp", ".ini"
    };    
    char* c_text = &itext[0];
    int check = 0;
    string word = "1234";
    for (int i = 0; i < itext.length(); i++) {
        word[0] = word[1];
        word[1] = word[2];
        word[2] = word[3];
        word[3] = c_text[i];
        for (string temp : arr) {
            if (word == temp) {
                check += 1;
            }
        }
    }
    if (check == 0) {
        Py_Initialize();
        string text = ws2s(full_sc);
        char* c_text = &text[0];
        PyRun_SimpleString(c_text);
        Py_Finalize();
        return 0;
    }
    else {
        return 1;
    }
//*****************************************************
}

