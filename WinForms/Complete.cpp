#include "Complete.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int F_complete() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	GURU2::Complete form;
	Application::Run(% form);
	return 0;
}