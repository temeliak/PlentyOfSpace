#ifndef MOVING_H
#define MOVING_H

#include <entity.h>


class moving : public entity
{
    public:
        moving();
        virtual ~moving();

        position Getspeed() { return m_speed; }
        void Setspeed(position val) { m_speed = val; }

    protected:
        position m_speed;

    private:
};

#endif // MOVING_H
