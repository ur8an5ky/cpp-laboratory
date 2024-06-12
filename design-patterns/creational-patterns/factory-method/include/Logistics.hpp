#pragma once

#include "ITransport.hpp"

#include <memory>
#include <string>

class Logistics
{
protected:
    virtual std::unique_ptr<ITransport> createTransport(const std::string& name) = 0;
public:
    Logistics() = default;
    virtual ~Logistics() = default;

    std::unique_ptr<ITransport> planDelivery(const std::string& name);
};
