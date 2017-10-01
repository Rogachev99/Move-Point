#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
 
[STAThread]
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
 
	Picture::MyForm form; //Picture - èìÿ âàøåãî ïðîåêòà
	Application::Run(%form);
	return 0;
}
