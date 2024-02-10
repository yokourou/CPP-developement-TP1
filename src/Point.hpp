#ifndef TP1_POINT_HPP
#define TP1_POINT_HPP

#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <ostream>
class Polaire;
class Cartesien;

class Point{
    public:
        int x;
        int y;
        virtual void afficher(std::stringstream& str) const=0;
        Point();
        Point(int a,int b);
        ~Point();
        virtual void convertir(Polaire &p) const=0;
        virtual void convertir(Cartesien &p) const=0;


    
};
std::stringstream& operator<<(std::stringstream& flux,const Point &p);

#endif