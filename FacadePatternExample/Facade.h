#ifndef FACADE_H_INCLUDED
#define FACADE_H_INCLUDED

#include "Arrow.h"


class Facade
{
public:
    void chooseDirection();
    Facade()
    {

    }

private:
    Arrow myArrow;
};




void Facade::chooseDirection()
{
    int choice = 1;
    cout << "Choose Arrow Direction" << endl;
    cout << "______________________" << endl;
    cout << "1. Up" << endl;
    cout << "2. Down" << endl;
    cout << "3. Left" << endl;
    cout << "4. Right" << endl;
    cin >> choice;

    switch (choice)
    {
        case 1     :myArrow.up();
                    break;

        case 2     :myArrow.down();
                    break;

        case 3     :myArrow.left();
                    break;

        case 4     :myArrow.right();
                    break;

    }
}




#endif // FACADE_H_INCLUDED



