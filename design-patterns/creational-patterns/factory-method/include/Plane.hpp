#pragma once

#include "ITransport.hpp"

#include <string>

class Plane: public ITransport
{
public:
    Plane(const std::string& name): ITransport("Plane", name) {}

    void deliver() const override;
};