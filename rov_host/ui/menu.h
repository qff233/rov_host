#ifndef __UI_MENU_H__
#define __UI_MENU_H__

#include "../rov_pch.h"

namespace UI {

class Menu : public Gtk::Window {
public:
    Menu();
    virtual ~Menu() override { }
protected:
};

} //namespace UI

#endif