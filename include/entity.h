#ifndef ENTITY_H
#define ENTITY_H

#include "position.h"

class entity
{
    public:
        entity();
        virtual ~entity();

        bool Getmoving() { return m_moving; }
        void Setmoving(bool val) { m_moving = val; }
        unsigned int Getmasse() { return m_masse; }
        void Setmasse(unsigned int val) { m_masse = val; }
        unsigned int Getsize() { return m_size; }
        void Setsize(unsigned int val) { m_size = val; }
        position Getposition() {return m_position; }
        void Setposition(position val) { m_position = val; }
        virtual void draw()=0;

    protected:
        bool m_moving;
        unsigned int m_masse;
        unsigned int m_size;
        position m_position;

    private:
};

#endif // ENTITY_H
