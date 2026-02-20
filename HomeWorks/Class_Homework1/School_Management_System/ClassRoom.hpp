#ifndef CLASSROOM_HPP
#define CLASSROOM_HPP

#include <iostream>
#include <vector>
#include "Student.hpp"
#include "Theacher.hpp"

class Classroom{
private:
    std::string Class_Name;
    std::vector<Student> students;
    Theacher Class_Theacher;
    int Max_Students;
    int grade;

public:
    Classroom(){
        Class_Name = "Unknown";
        Max_Students = 0;
        grade = 0;
    }

    Classroom(std::string name, Theacher theacher, int grade, int max){
        Class_Name = name;
        Class_Theacher = theacher;
        Max_Students = max;
        this->grade = grade;
    }

    void addStudent(const Student& s){
        if(students.size() < Max_Students){
            students.push_back(s);
        }
        else{
            std::cout << "Cannot add students: Class is full"
                      << std::endl;
        }
    }

    void displayInfo() const {
        std::cout << "Class: " << Class_Name << std::endl;
        std::cout << "Theacher Info: " << std::endl;
        Class_Theacher.displayInfo();

        std::cout << "Students Info: " << std::endl;
        for(const auto& s : students){
            s.displayInfo();
        }

        std::cout << "------------------------"
                  << std::endl;
    }

    int getGrade() const{
        return grade;
    }
};

#endif
