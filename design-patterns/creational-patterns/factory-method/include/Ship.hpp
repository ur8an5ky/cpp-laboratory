#pragma once

#include "ITransport.hpp"

#include <string>

class Ship: public ITransport
{
public:
    Ship(const std::string& name): ITransport("Ship", name) {}

    void deliver() const override;
};
