
#include <iostream>
#include "ClassAuto.h";

int main()
{
    setlocale(LC_ALL,"Russian");
    Auto zaporo = AutoBuild().dWhell(17.5)
        .cWhell(4).Color("white")
        .Clearance(205)
        .Body("hb")
        .build();
    Auto volga = AutoBuild().dWhell(20.5)
        .cWhell(4).Color("синий")
        .Clearance(210)
        .Body("седан")
        .build();
    Auto ziguli = AutoBuild().dWhell(22.5)
        .cWhell(4).Color("серый")
        .Clearance(220)
        .Body("универсал")
        .build();
    volga.Display();
    ziguli.Display();
    zaporo.Display();
}
