#include "Polaire.hpp"
#include <cstring>
#include "Point.hpp"

#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>




Polaire::Polaire(){
    angle=0.0;
    distance=0.0;
}

Polaire::Polaire(double a,double d){
    angle=a;
    distance=d;
}
Polaire::~Polaire(){
}

double Polaire::getAngle()const{
    return angle;
};
double Polaire::getDistance() const{
    return distance;
};

void Polaire::afficher(std::stringstream& str) const{
        str << "(a=" << getAngle() << ";d=" <<getDistance() << ")" ;
        
};

void Polaire::setAngle(double a){
    angle=a;
};
void Polaire::setDistance(double d){
    distance=d;
};

void Polaire::convertir(Polaire& p) const{
        p.setAngle(getAngle());
        p.setDistance(getDistance());
    };

void Polaire::convertir(Cartesien &p) const{
    p.setX(getDistance()*std::cos(getAngle()* 3.141592653589793238463 / 180));
    p.setY(getDistance()*std::sin(getAngle()* 3.141592653589793238463 / 180));
  
} 

Polaire::Polaire(Cartesien c){
    Polaire temp;
    c.convertir(temp);
    angle=temp.getAngle();
    distance=temp.getDistance();
    
} 
