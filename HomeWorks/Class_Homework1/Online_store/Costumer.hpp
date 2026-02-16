#ifndef COSTUMER_HPP
#define COSTUMER_HPP

#include <string>
#include "Product.hpp"
#include "Cart.hpp"

class Costumer{
private:
std::string name;
Cart cart;

public:

Costumer() = default;

void setName(const std::string& n){
    name = n;
}

std::string get_name() const{
    return name;
}

void addToCart(const Product& p) {
    cart.add_products(p);
}

void openCart() {
    cart.openCart(name);
}
void vewCart() const {
    cart.viewCart();
}

std::string getname() const {
    return name;
}
void addProductsName(const std::vector<Product>& Products) {
    cart.addProductsName(Products, name);
}

};

#endif