#include "../include/Ship.hpp"

#include <iostream>

void Ship::deliver() const
{
    std::cout<<_type<<" "<<_name<<std::endl;
}
