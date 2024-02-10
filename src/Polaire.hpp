#ifndef TP1_POLAIRE_HPP
#define TP1_POLAIRE_HPP

#include "Point.hpp"
#include "cartesien.hpp"


class Polaire:public Point{
    public:
    double angle;
    double distance;
    Polaire();
    Polaire(double a,double d);
    Polaire(Cartesien c);
    ~Polaire();
    double getAngle() const;
    double getDistance()const;
    void afficher(std::stringstream&) const;
    void setAngle(double a);
    void setDistance(double d);
    void convertir(Polaire &p) const;
    void convertir(Cartesien &p) const;


    
};

#endif