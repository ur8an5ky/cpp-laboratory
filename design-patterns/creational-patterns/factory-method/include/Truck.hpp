#pragma once

#include "ITransport.hpp"

#include <string>

class Truck: public ITransport
{
public:
    Truck(const std::string& name): ITransport("Truck", name) {}

    void deliver() const override;
};
