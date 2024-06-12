#include "../include/Plane.hpp"

#include <iostream>

void Plane::deliver() const
{
    std::cout<<_type<<" "<<_name<<std::endl;
}
