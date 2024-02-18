#include "TempConv.h"


using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TemperatureConvertor::TempConv form;
	Application::Run(% form);
}
