#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>



class Student{
private:
std::string Student_Name;
int Student_id;
int Grade_Level;
public:

    Student(){
        Student_Name = "Unknawn";
        Student_id = 0;
        Grade_Level = 0;
    }
    Student(std::string name, int id, int grade) {
        Student_Name = name;
        Student_id = id;
        Grade_Level = grade;
    }

    void displayInfo() const {
        std::cout << "|" << Student_id << "|  " << Student_Name << " (Grade " << Grade_Level << ")" << std::endl;
    }

    int getGrade()const {
        return Grade_Level;
    }
};

#endif