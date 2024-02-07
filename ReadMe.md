# GURU

Программа для автоматизированного выполнения скрипта написанного на языке Python

Изначальная концепция приложения сводилась к тому, чтобы помочь сотрудникам смежного отдела выполнять рутинную работу по оценке состояния юридического лица на основе его публичной финансовой отчетности. 
Фактически, пользователь должен был:
1. Выбрать отчетность в формате xlsx или xls (книга листов Excel);
2. Указать место сохранения результатов;
3. Указать место нахождения файла скрипта на языке Python для выполнения манипуляции над отчетностью

Позднее я осознал, что фактически создал приложение которое выполняет действия не только над файлами Excel, но и над любыми другими, поскольку скрипт, который также может быть создан пользователем, может взаимодействовать с другими типами фалов.

Грубо говоря, GURU это программа которая позволяет пользователю знающему Python, выполнить необходимую процедуру над указанным файлом.

В программе предусмотрена примитивная защита от выполнения манипуляций пользователя над системными файлами Windows и файлами регистра.

Программа портируема на Linux