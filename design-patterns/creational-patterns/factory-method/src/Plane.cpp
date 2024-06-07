#include "../include/Plane.hpp"

#include <iostream>

void Plane::deliver() const
{
    std::cout<<"Delivered by "<<_type<<" named "<<_name<<std::endl;
}