#pragma once

#include "ITransport.hpp"
#include "Logistics.hpp"

#include <memory>

class AirLogistics: public Logistics
{
public:
    AirLogistics() {}
protected:
    std::unique_ptr<ITransport> createTransport(const std::string& name) override;
};
