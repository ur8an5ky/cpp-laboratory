#include "../include/ITransport.hpp"
#include "../include/Truck.hpp"
#include "../include/Ship.hpp"
#include "../include/Train.hpp"
#include "../include/Plane.hpp"


#include <vector>
#include <memory>

int main()
{
    std::vector<std::unique_ptr<ITransport>> transports;

    transports.push_back(std::make_unique<Truck>("Volvo FH16"));
    transports.push_back(std::make_unique<Ship>("Emma Maersk"));
    transports.push_back(std::make_unique<Train>("GE ES44AC"));
    transports.push_back(std::make_unique<Plane>("Boeing 747-8F"));

    for(auto& transport: transports)
    {
        transport->deliver();
    }

    return 0;
}