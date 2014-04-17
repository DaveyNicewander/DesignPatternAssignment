#ifndef VIEW_H_INCLUDED
#define VIEW_H_INCLUDED

#include "Model.h"
#include "Controller.h"
#include <iostream>

using namespace std;

class View
{
public:
    View()
    {

    }
    void showState(int current)
    {
        cout << "The current state is: " << current << endl;
    }
    int receiveChange()
    {
        int change;
        cout << "What would you like to change the state to? ";
        cin >> change;
        return change;
    }
};

#endif // VIEW_H_INCLUDED
