#include <string>
#include <iostream>
#include <string>
class auctioneer{
    public:
        static std::string product_id;
        static float product_price;

        std::string broadcast_message(std::string auction);
        std::string interact (float highest_price,std::string auction,int noOfParticipants);
        std::string broadcast_end_of_auction (std::string winner,float amount,std::string FIPAProtocol);
        std::string request_payment (std::string winner,float amount,std::string FIPAProtocol);

};