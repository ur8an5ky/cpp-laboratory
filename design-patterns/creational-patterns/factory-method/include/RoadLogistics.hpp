#pragma once

#include "ITransport.hpp"
#include "Logistics.hpp"

#include <memory>

class RoadLogistics: public Logistics
{
public:
    RoadLogistics() {}
protected:
    std::unique_ptr<ITransport> createTransport(const std::string& name) override;
};
