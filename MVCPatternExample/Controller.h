#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED

#include "View.h"
#include "Model.h"



class Controller
{
public:
    Controller()
    {

    }

    void changeState()
    {
        int change = myView.receiveChange();
        myModel.setState(change);
    }

    void updateView()
    {
        int current = myModel.getState();
        myView.showState(current);
    }


private:
    Model myModel;
    View myView;



};



#endif // CONTROLLER_H_INCLUDED
