#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include </Users/chukwuemekaonyebuchi/Desktop/JS exercises/C++ Exercises/Multiagent-Systems-C++/bidders.h>

int bidders::interact (std::string message,std::string auction,float currentPrice,std::string FIPAProtocol,int agent_id){
    if (FIPAProtocol == "performative")
    {
        std::cout <<"performative";
        float price_increase_percentage;
        if(auction == "english"){
                 if (will_power == 1) {
                    //sting-o-meter level 1
                     
                    price_increase_percentage = static_cast <float> (rand()/0.02) / (static_cast <float> (RAND_MAX/0.03));
                }
                else if (will_power == 2){
                    //sting-o-meter level 2
                     price_increase_percentage = static_cast <float> (rand()/0.02) / (static_cast <float> (RAND_MAX/0.03));
                }
                else if (will_power == 3){
                    //sting-o-meter level 3
                     price_increase_percentage = static_cast <float> (rand()/0.02) / (static_cast <float> (RAND_MAX/0.03));
                }
                else if (will_power == 4){
                    //sting-o-meter level 4
                     price_increase_percentage = static_cast <float> (rand()/0.02) / (static_cast <float> (RAND_MAX/0.03));
                }
                //currentPrice = float(currentPrice);
                if (currentPrice < price_ceiling){
                    float bid  =  currentPrice + (price_increase_percentage * currentPrice);
                    bid = int(bid);
                    }

                else if (currentPrice >= price_ceiling){
                    float bid =  price_ceiling;
                    bid = int(bid);
                    }
        }
        if(auction == "dutch"){
            
        }
    }
    else if (FIPAProtocol == "inform")
    {
        std::cout <<"received message--> " << message; 
    }
    else if (FIPAProtocol == "request")
    {
        std::cout<<"Transferring money to account";
        std::cout<<"Purchase Ceiling-- "<<price_ceiling;
        std::cout<<"Initial Bank Balance-- "<<bank_capacity;
        int current_balance  = bank_capacity - currentPrice ;
        int current_utility  = price_ceiling - currentPrice;
        std::cout<<"Amount  Paid-- "<<currentPrice;
        std::cout<<"Final Bank Balance-- ",current_balance;
        std::cout<<"Utility (Initial Ceiling - Price bought) = "<<current_utility;
    }
    
    
}