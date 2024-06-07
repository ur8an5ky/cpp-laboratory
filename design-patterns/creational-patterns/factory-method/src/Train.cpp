#include "../include/Train.hpp"

#include <iostream>

void Train::deliver() const
{
    std::cout<<"Delivered by "<<_type<<" named "<<_name<<std::endl;
}