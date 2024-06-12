#include "../include/Train.hpp"

#include <iostream>

void Train::deliver() const
{
    std::cout<<_type<<" "<<_name<<std::endl;
}
