#include "cartesien.hpp"
#include <cstring>
#include "Point.hpp"
#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <cmath>





Cartesien::Cartesien(){
    x=0.0;
    y=0.0;
}

Cartesien::Cartesien(double a,double d){
    x=a;
    y=d;
}
Cartesien::~Cartesien(){
}


void Cartesien::afficher(std::stringstream& str) const {
        str << "(x=" << getX() << ";y=" <<getY() << ")" ;
        
};

double Cartesien::getX() const{
    return x;
}

double Cartesien::getY() const{
    return y;
}


void Cartesien::setX(double a){
    x=a;
};
void Cartesien::setY(double b){
    y=b;
};

void Cartesien::convertir(Polaire& p) const{
        double rd;
        p.distance=pow(pow(getX(),2)+pow(getY(),2), 0.5);
        rd=atan(getY()/getX());
        p.angle=rd * (180.0/3.141592653589793238463);
    };

void Cartesien::convertir(Cartesien &p) const{
    p.setX(getX());
    p.setY(getY());
} 


Cartesien::Cartesien(Polaire p){
    Cartesien temp;
    p.convertir(temp);
    x=temp.getX();
    y=temp.getY();
};
