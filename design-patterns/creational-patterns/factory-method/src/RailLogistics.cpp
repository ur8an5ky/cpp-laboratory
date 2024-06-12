#include "../include/RailLogistics.hpp"
#include "../include/Train.hpp"

std::unique_ptr<ITransport> RailLogistics::createTransport(const std::string& name)
{
    return std::make_unique<Train>(name);
}
