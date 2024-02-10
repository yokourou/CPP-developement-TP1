#ifndef TP1_NUAGE_HPP
#define TP1_NUAGE_HPP

#include <vector>
#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <ostream> 
#include "cartesien.hpp"




class Point;
class Cartesien;

class Nuage{
     
    public:
    using const_iterator = std::vector<Point*>::const_iterator ;
    Nuage();
   ~Nuage(); 
    std::vector <Point*> list;
    int size();
    void ajouter(Point&);
    const_iterator  begin();
    const_iterator end();

    


    
};
Cartesien barycentre(Nuage);

class BarycentreCartesien{
    public : 
    Cartesien operator()(Nuage n){
        Cartesien b = barycentre(n);
        return b;
    } 
}  
#endif