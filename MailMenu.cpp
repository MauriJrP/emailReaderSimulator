#include "MailMenu.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(cli::array<String^>^ args) {
	CRUD myCRUD;

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	emailReaderSimulator::MailMenu frm;
	Application::Run(% frm);

}