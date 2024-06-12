#pragma once

#include "ITransport.hpp"
#include "Logistics.hpp"

#include <memory>

class RailLogistics: public Logistics
{
public:
    RailLogistics() {}
protected:
    std::unique_ptr<ITransport> createTransport(const std::string& name) override;
};
