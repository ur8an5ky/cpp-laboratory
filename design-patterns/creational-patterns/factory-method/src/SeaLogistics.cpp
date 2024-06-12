#include "../include/SeaLogistics.hpp"
#include "../include/Ship.hpp"

std::unique_ptr<ITransport> SeaLogistics::createTransport(const std::string& name)
{
    return std::make_unique<Ship>(name);
}
