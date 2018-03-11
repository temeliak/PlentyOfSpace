#include "position.h"

position::position()
{
    //ctor
}

position::position(double x, double y, double z)
{
    Setx(x);
    Sety(y);
    Setz(z);
}

position::~position()
{
    //dtor
}

double position::Distance(position* source){
    return sqrt(pow(Getx()-source->Getx(),2)+
                pow(Gety()-source->Gety(),2)+
                pow(Getz()-source->Getz(),2));
}

position position::operator-(position b)
{
    return *(new position(Getx()-b.Getx(),Gety()-b.Gety(),Getz()-b.Getz()));
}

position position::operator+(position b)
{
    return *(new position(Getx()+b.Getx(),Gety()+b.Gety(),Getz()+b.Getz()));
}
