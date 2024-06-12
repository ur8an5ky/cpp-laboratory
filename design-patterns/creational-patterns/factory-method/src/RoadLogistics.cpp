#include "../include/RoadLogistics.hpp"
#include "../include/Truck.hpp"

std::unique_ptr<ITransport> RoadLogistics::createTransport(const std::string& name)
{
    return std::make_unique<Truck>(name);
}
