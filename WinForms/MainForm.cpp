#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	GURU2::MainForm form;
	Application::Run(% form);
}