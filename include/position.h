#ifndef POSITION_H
#define POSITION_H
#include <math.h>

class position
{
    public:
        position();
        position(double x, double y, double z);
        virtual ~position();
        double Getx() { return m_x; }
        void Setx(double val) { m_x = val; }
        double Gety() { return m_y; }
        void Sety(double val) { m_y = val; }
        double Getz() { return m_z; }
        void Setz(double val) { m_z = val; }

        double Distance(position* source);
        position operator-(position b);
        position operator+(position b);
    protected:
    private:
        double m_x;
        double m_y;
        double m_z;
};

#endif // POSITION_H
