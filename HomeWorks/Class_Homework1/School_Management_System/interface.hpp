#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#include "Student.hpp"
#include "Theacher.hpp"
#include "ClassRoom.hpp"
#include <iostream>
#include <vector>

void welcome(){
    std::cout<<std::endl;
    std::cout<< "\t"<< "\t"<<"\t"<<"\t" <<"____________________________"<<std::endl;
    std::cout << "\t"<< "\t"<<"\t"<<"\t"<<"| WELCOME TO N^ - 1 SCHOOL |"<<std::endl;
    std::cout<<std::endl;
}

    void displaySchool(std::vector<Classroom>& school){
    std::cout << "Enter class number (1 - 12) or ALL to display all classes: ";
    std::string input;
    std::cin >> input;

    if(input == "ALL"){
        for(auto& cls : school){
            cls.displayInfo();

            
        }
    }
    else{
        int grade;
        sscanf(input.c_str(), "%d", &grade);
        bool found = false;
        for(auto& cls : school){
            if(cls.getGrade() == grade){
                cls.displayInfo();
                found = true;
            }
        }
        if(!found){
            std::cout << "No class found with grade " << grade << std::endl;
        }
    }
}

#endif