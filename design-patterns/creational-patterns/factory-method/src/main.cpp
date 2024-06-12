#include "../include/Logistics.hpp"
#include "../include/AirLogistics.hpp"
#include "../include/RailLogistics.hpp"
#include "../include/RoadLogistics.hpp"
#include "../include/SeaLogistics.hpp"

#include <vector>
#include <memory>
#include <iostream>

int main()
{
    std::vector<std::unique_ptr<Logistics>> logistics;

    logistics.push_back(std::make_unique<AirLogistics>());
    logistics.push_back(std::make_unique<RailLogistics>());
    logistics.push_back(std::make_unique<RoadLogistics>());
    logistics.push_back(std::make_unique<SeaLogistics>());

    std::vector<std::string> names = {"Boeing 747-8F", "GE ES44AC", "Volvo FH16", "Emma Maersk"};

    for(int i=0; i<4; ++i)
    {
        std::cout<<"Package no. "<<i+1<<" has been delivered by: ";
        logistics[i]->planDelivery(names[i]);
    }

    return 0;
}
