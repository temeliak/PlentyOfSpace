#include "astre.h"

astre::astre()
{
    //ctor
}


astre::astre(unsigned int masse, unsigned int Size, position pos)
{
    Setmasse(masse);
    Setsize(Size);
    Setposition(pos);
}

astre::~astre()
{
    //dtor
}

