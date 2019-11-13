#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include </Users/chukwuemekaonyebuchi/Desktop/JS exercises/C++ Exercises/Multiagent-Systems-C++/auctioneer.h> // improve on using local directory url

std::string broadcast_message(std::string auction){
        float initial_decrease_percentage,starting_price,initial_increase_percentage;
        std::string broadcast;

        if (auction == "english"){            
            initial_decrease_percentage = 0.80;
            starting_price  = auctioneer::product_price  - (initial_decrease_percentage * auctioneer::product_price);
            broadcast = std::to_string(starting_price)+":" + "auction of " + auctioneer::product_id + " started :"+ auction +":" + "performative";
        }

        else if (auction == "dutch"){
            
            initial_increase_percentage = 0.50;
            starting_price  = auctioneer::product_price  + (initial_increase_percentage * auctioneer::product_price);
            broadcast = std::to_string(starting_price)+":" + "auction of " +auctioneer::product_id+ " started :"+ auction +":" + "performative";
        }
        
        return broadcast;
}
std::string auctioneer::interact (float highest_price,std::string auction,int noOfParticipants = 3){
        float price_increase_percentage,price_decrease_percentage,new_price;
        std::string message;
        if (noOfParticipants >= 3 and auction == "english"){
            
            
            price_increase_percentage = 0.10;
            new_price = highest_price + (highest_price * price_increase_percentage);
            message = std::to_string(new_price)+":" + "continuing auction of " + auctioneer::product_id+ ":"+ auction +":" + "performative";
        }
        else if  (noOfParticipants < 3 and auction == "english"){
            
            price_increase_percentage = 0.12;
            new_price = highest_price + (highest_price * price_increase_percentage);
            message = std::to_string(new_price)+":" + "auction of " + auctioneer::product_id+ " started :"+ auction +":" + "performative";
        }
        if (noOfParticipants > 3 and auction == "dutch"){
            
            price_decrease_percentage = 0.12;
            new_price = highest_price - (highest_price * price_decrease_percentage);
            message = std::to_string(new_price)+":" + "auction of " + auctioneer::product_id+ " started :"+ auction +":" + "performative";
        }
        else if ( noOfParticipants < 3 and auction == "dutch"){
            
            price_decrease_percentage = 0.15;
            new_price = highest_price - (highest_price * price_decrease_percentage);
            message = std::to_string(new_price)+":" + "auction of " +auctioneer::product_id+ " started :"+ auction +":" + "performative";
        }

     
        return message;

};

std::string broadcast_end_of_auction (std::string winner,float amount,std::string FIPAProtocol){
        std::string broadcast = std::to_string(amount)+":" + "auction of " + auctioneer::product_id+ " completed : winner->"+"Agent "+winner+":"+ FIPAProtocol;
        return broadcast;
    }

std::string request_payment (std::string winner,float amount,std::string FIPAProtocol){
        std::string broadcast = std::to_string(amount)+":" + "auction of " +auctioneer::product_id+ " completed : requesting payment from winner->"+"Agent "+winner+":"+ FIPAProtocol;
        return broadcast;
        }