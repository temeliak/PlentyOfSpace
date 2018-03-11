#ifndef MAP_H
#define MAP_H

#include <string>
class Map
{
    public:
        Map();
        virtual ~Map();

        std::string Getname() { return m_name; }
        void Setname(std::string val) { m_name = val; }

    protected:

    private:
        std::string m_name;
};

#endif // MAP_H
