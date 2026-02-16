#include <iostream>
#include <vector>
#include <string>
#include "Product.hpp"
#include "Cart.hpp"
#include "Costumer.hpp"
#include "Product_list.hpp"

int main()
{
    Costumer costumer;
    Cart cart;
    std::cout << "Please Enter your name:  ";
    std::string name;
    std::getline(std::cin, name);
    costumer.setName(name);
    std::cout << "\t"<< "\t"<<"\t"<<"(*_*)   WELCOME TO  MINI MARKET  (^_^) "<<std::endl;
    
    std::cout<<std::endl;
    
    std::vector<Product> products = getproduct_list();
    printProductsGrid(products);
    print_title();

    costumer.addProductsName(products);

return 0;
  
}