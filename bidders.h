#include <string>
#include <iostream>

class bidders{
    public:
        std::string product_id;
        int price_ceiling,bank_capacity,will_power;
        
        int interact (std::string message,std::string auction,float currentPrice,std::string FIPAProtocol,int agent_id);

};