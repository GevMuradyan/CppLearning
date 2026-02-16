#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <iostream>

class Product{
private:    
    std::string name;
    double price;
public:
    Product(const std::string& n = "", double p = 0) : name(n), price(p){

    }

    void name_price()const{
    std::cout << name << " - $" << price;
    } 

    std::string get_Name()const {
        return name;
    }
    double get_Price()const {
        return price;
    }

    void set_Name(const std::string& n){
        name = n;
    }
    void set_Price(const double p){
        price = p;
    }


};
#endif

