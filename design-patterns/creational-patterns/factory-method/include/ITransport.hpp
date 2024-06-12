#pragma once

#include <string>

class ITransport
{
public:
    ITransport() = default;
    ITransport(const std::string& type, const std::string& name) : _type(type), _name(name) {}
    
    virtual ~ITransport() = default;
    virtual void deliver() const = 0;

protected:
    std::string _type;
    std::string _name;
};
