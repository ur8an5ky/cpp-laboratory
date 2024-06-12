#include "../include/ITransport.hpp"
#include "../include/Logistics.hpp"

std::unique_ptr<ITransport> Logistics::planDelivery(const std::string& name)
{
    auto transport = createTransport(name);
    transport->deliver();
    
    return transport;
}
