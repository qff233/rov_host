#ifndef __UI_APPLICATION_H__
#define __UI_APPLICATION_H__

#include "../rov_pch.h"

namespace UI {

class MainWindow : public Gtk::Window {
public:
    MainWindow();
    virtual ~MainWindow() override { }
protected:
protected:
};

} // namespace UI

#endif