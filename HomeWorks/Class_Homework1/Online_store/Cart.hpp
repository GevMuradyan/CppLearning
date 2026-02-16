#ifndef CART_HPP
#define CART_HPP

#include <vector>
#include <string>
#include <iostream>
#include "Product.hpp"


class Cart{
private:
std::vector<Product>items;
public:
void remove_Product(const std::string& name){
    for(auto i = items.begin(); i != items.end(); ++i){
        if(i->get_Name() == name){
            std::cout<< name<< " removed from cart"<<std::endl;
            items.erase(i);
            return;
        }
    }
    std::cout<<"Product not found"<<std::endl;
}
void add_products(const Product& p){
    items.push_back(p);
}
void viewCart()const{
        std::cout<<"\t"<< "\t"<<"\t"<<"---------------- YOUR  CART ----------------"<<std::endl;

        if(items.empty()){
            std::cout<<"Your cart is empty"<<std::endl;
            return;
        }

        double total = 0;

            for(const auto& p : items){
                p.name_price();
                std::cout << std::endl;
                total += p.get_Price();
            }        
            double dis = total *0.10;
            double final = total - dis;  
            
        std::cout << "----------------------------------\n";
        std::cout << "Total: $" << total << std::endl;
        std::cout << "Discount (10%): -$" << dis << std::endl;
        std::cout << "==================================\n";
        std::cout << "Final Price: $" << final << std::endl;
        std::cout << "==================================\n";

        }
    
void openCart(const std::string& customerName){
    std::string input;
    std::cout<<std::endl;
        while(true){
            viewCart();

            std::cout << "ENTER - productName  -> remove product\n";
            std::cout << "ENTER LIST           -> return to products\n";
            std::cout << "ENTER PUY            -> puy for products\n";
            std::cout << "ENTER QUIT           -> exit store\n\n";

            std::getline(std::cin, input);

            if(input == "LIST"){
                break;
            }
            else if(input == "QUIT"){
                std::cout<<customerName<<" Thank you for shopping  (^_^)"<<std::endl;
                exit(0);
            }

            else if(!input.empty() && input[0] == '-'){
                if(input.size() > 2){
                    std::string name = input.substr(2);
                    remove_Product(name);
                }
            }
            else if(input == "PUY"){
                double total = 0;
                for(const auto& p : items){
                    total += p.get_Price();
                }
                double dis = total * 0.10;
                double final = total - dis;

                std::cout << "Your final payment is: $" << final << std::endl;
                std::cout << "Enter the amount you are paying: ";
                double paid;
                std::cin >> paid;

                if(paid < final){
                    std::cout << "Not enough money. Please try again.\n";
                } else {
                    double change = paid - final;
                    std::cout << "Change to return: $" << change << std::endl;
                    std::cout <<customerName<< " Thank you for shopping! (^_^)\n";
                    exit(0);
                }
            
            }
        }
    }
    void addProductsName(const std::vector<Product>& Products, const std::string& customerName ){
    std::string input;
    std::cout<<std::endl;
    std::cout << "Enter Product else type --> CART <-- to finish"<<std::endl;

        while(true){
            std::getline(std::cin, input);
            if(input == "CART"){
                openCart(customerName);
                continue;
            }
            
            int found = 0;
        for(const auto& p : Products){
            if(p.get_Name() == input){
                add_products(p);
                std::cout << p.get_Name() << " has been added to your cart"<<std::endl;
                found = 1;
                break;
            }
        }
            if(found == 0){
                std::cout<<"Product" << input << " not found: try again"<<std::endl;
            }
        }

    }
};

#endif