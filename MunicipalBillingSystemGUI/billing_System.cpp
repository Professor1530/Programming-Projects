#include "billing_System.h"

using namespace MunicipalBillingSystemGUI; 

[STAThreadAttribute]
int main(cli::array<System::String^>^ args) {
    System::Windows::Forms::Application::EnableVisualStyles();
    System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew billing_System()); // start your form
    return 0;
}
 
