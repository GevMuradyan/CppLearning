#ifndef PRODUCTLIST_HPP
#define PRODUCTLIST_HPP

#include <vector>
#include "Product.hpp"

inline std::vector<Product> getproduct_list(){
    return{
        {"Book", 1000},     
        {"Cake", 100},        
        {"Pasta", 150},       
        {"Pen", 20},          
        {"Notebook", 200},
        {"Bread", 80},
        {"Cheese", 120},
        {"Apple", 30},
        {"Orange", 25},
        {"Milk", 60},
        {"Eggs", 40},
        {"Butter", 70},
        {"Rice", 90},
        {"Sugar", 50},
        {"Salt", 10},
        {"Water", 15},
        {"Juice", 45},
        {"Chocolate", 110},
        {"Coffee", 150},
        {"Beer", 5},
    };
}
void printProductsGrid(const std::vector<Product>& products) {
    const int colWidth = 25; 
    int count = 0;

    for (const auto& p : products) {
        std::string s = p.get_Name() + " - $" + std::to_string(int(p.get_Price()));
        std::cout << s;

        int spaces = colWidth - s.length();
        if (spaces < 1) spaces = 1;
        for (int i = 0; i < spaces; ++i)
            std::cout << ' ';

        count++;
        if (count % 4 == 0)
            std::cout << std::endl;
    }

    if (count % 4 != 0)
        std::cout << std::endl;
}
void print_title(){
        std::cout<<std::endl;

    std::cout<<"\t"<< "\t"<<"\t"<< " __________________________________________"<<std::endl;
    std::cout<<"\t"<< "\t"<<"\t"<< "| --> The store offers a 10% discount <--  |"<<std::endl;
    std::cout<<"\t"<< "\t"<<"\t"<< " ------------------------------------------"<<std::endl;
    std::cout<<"\t"<< "\t"<<"\t"<<" Select a product and add it to the cart "<<std::endl;
    std::cout<<std::endl;
}
#endif

