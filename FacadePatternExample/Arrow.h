#ifndef ARROW_H_INCLUDED
#define ARROW_H_INCLUDED


#include <iostream>
#include <string>

using namespace std;


class Arrow
{
public:
    Arrow()
    {
        arrowState = "The arrow is facing right!";
    }
    void left();
    void right();
    void up();
    void down();
    void printState();

private:
    string arrowState ="";
};


void Arrow::printState()
{
    cout << arrowState << endl;
}



void Arrow::left()
{
    arrowState = "The arrow is facing left!";
    printState();
}

void Arrow::right()
{
    arrowState = "The arrow is facing right!";
    printState();
}

void Arrow::up()
{
    arrowState = "The arrow is facing up!";
    printState();
}

void Arrow::down()
{
    arrowState = "The arrow is facing down!";
    printState();
}










#endif // ARROW_H_INCLUDED
