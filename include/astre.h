#ifndef ASTRE_H
#define ASTRE_H

#include "entity.h"

class astre: public entity
{
    public:
        astre();
        astre(unsigned int masse, unsigned int size, position pos);
        virtual ~astre();



    protected:

    private:

};

#endif // ASTRE_H
