#include <ui/main_window.h>

int main(int argc, char* argv[]) 
{
    auto app = Gtk::Application::create("com.jmu.rov-host");
    return app->make_window_and_run<UI::MainWindow>(argc, argv);
}