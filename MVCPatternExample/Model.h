#ifndef MODEL_H_INCLUDED
#define MODEL_H_INCLUDED

#include "View.h"
#include "Controller.h"


class Model
{
public:
    Model()
    {
        state = 0;
    }

    int setState(int newState)
    {
        state = newState;
        return state;
    }

    int getState()
    {
        return state;
    }


private:
    int state;
};

#endif // MODEL_H_INCLUDED
