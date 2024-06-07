#include "../include/Truck.hpp"

#include <iostream>

void Truck::deliver() const
{
    std::cout<<"Delivered by "<<_type<<" named "<<_name<<std::endl;
}