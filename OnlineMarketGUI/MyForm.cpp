#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OnlineMarketGUI::MyForm form;
	Application::Run(% form);
}