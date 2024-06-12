#pragma once

#include "ITransport.hpp"
#include "Logistics.hpp"

#include <memory>

class SeaLogistics: public Logistics
{
public:
    SeaLogistics() {}
protected:
    std::unique_ptr<ITransport> createTransport(const std::string& name) override;
};
