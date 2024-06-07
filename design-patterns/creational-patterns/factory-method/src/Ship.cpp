#include "../include/Ship.hpp"

#include <iostream>

void Ship::deliver() const
{
    std::cout<<"Delivered by "<<_type<<" named "<<_name<<std::endl;
}