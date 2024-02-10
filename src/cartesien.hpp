#ifndef TP1_CARTESIEN_HPP
#define TP1_CARTESIEN_HPP

#include "Point.hpp"
#include "Polaire.hpp"


class Cartesien:public Point{
    public:
    double x;
    double y;
    Cartesien();
    Cartesien(double a,double d);
    ~Cartesien();
    void afficher(std::stringstream&) const;
    double getX() const;
    double getY() const;
    void setX(double a);
    void setY(double b);
    void convertir(Polaire &p) const;
    void convertir(Cartesien &p) const;
    Cartesien(Polaire p);

    


 



    
};

#endif