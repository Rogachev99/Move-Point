#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
 
[STAThread]
int main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
 
	Picture::MyForm form; //Picture - имя вашего проекта
    Application::Run(%form);
	return 0;
}