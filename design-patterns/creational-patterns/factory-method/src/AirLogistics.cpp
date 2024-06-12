#include "../include/AirLogistics.hpp"
#include "../include/Plane.hpp"

std::unique_ptr<ITransport> AirLogistics::createTransport(const std::string& name)
{
    return std::make_unique<Plane>(name);
}
