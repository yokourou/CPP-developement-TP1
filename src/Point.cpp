#include "Point.hpp"
#include <cstring>


Point::Point(){
    x=0;
    y=0;
}

Point::Point(int a,int b){
    x=a;
    y=b;
}
Point::~Point(){
}

std::stringstream& operator<<(std::stringstream& flux,const Point &p){
    p.afficher(flux);
    return flux;
};

