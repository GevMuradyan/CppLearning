#ifndef THEACHER_HPP
#define THEACHER_HPP

#include <iostream>
#include <string>

class Theacher{
private:
std::string Theacher_Name;
int Theacher_id;
std::string Subject;
public:

    Theacher(){
        Theacher_Name = "Unknawn";
        Theacher_id = 0;
        Subject = "Unknawn";
    }

    Theacher(std::string name, int id, std::string subject){
        Theacher_Name = name;
        Theacher_id = id;
        Subject = subject;
    }
    void displayInfo() const {
        std::cout << "|" << Theacher_id << "|  " << Theacher_Name << " (Subject: " << Subject << ")" << std::endl;
    }
};

#endif