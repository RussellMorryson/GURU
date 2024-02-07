#include "Sec.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int Sec_err() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	GURU2::Sec form;
	Application::Run(% form);
	return 0;
}