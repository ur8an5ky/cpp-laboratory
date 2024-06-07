#pragma once

#include "ITransport.hpp"

#include <string>

class Train: public ITransport
{
public:
    Train(const std::string& name): ITransport("Train", name) {}

    void deliver() const override;
};