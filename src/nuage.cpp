#include "nuage.hpp"
#include "cartesien.hpp"
#include <cstring>
#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <cmath>
#include <vector>




Nuage::Nuage(){
};
Nuage::~Nuage(){}; 
int Nuage::size(){
    return list.size();
};
void Nuage::ajouter(Point &p){
    list.push_back(&p);
};

Nuage::const_iterator  Nuage::begin(){
    return list.begin();
} 

Nuage::const_iterator  Nuage::end(){
    
    return list.end();
} 

Cartesien barycentre(Nuage n){
    
    Cartesien b;
    double x = 0.0;
    double y = 0.0;
    Cartesien cour;
    for (Nuage::const_iterator it = n.begin(); it!=n.end() ; it++){
        (*it)->convertir(cour);
        x += (cour).getX();
        y += cour.getY();
    } 

    b.setX(x / n.size() );
    b.setY(y / n.size());

    return b;
} 

