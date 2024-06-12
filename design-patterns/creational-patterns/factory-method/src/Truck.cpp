#include "../include/Truck.hpp"

#include <iostream>

void Truck::deliver() const
{
    std::cout<<_type<<" "<<_name<<std::endl;
}
