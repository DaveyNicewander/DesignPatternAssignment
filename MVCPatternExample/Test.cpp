#include "Controller.h"

#include <iostream>





int main()
{
    Controller mainController;

    mainController.updateView();

    mainController.changeState();

    mainController.updateView();

    return 0;
}
