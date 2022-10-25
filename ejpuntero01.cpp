#include <iostream>
#include "Point.h"

using namespace std;

int main(){

    Point p;

    Point *ptr;
    //prt apunte a p
    ptr = &p;
 
    ptr->print();

    return 0;    
}
