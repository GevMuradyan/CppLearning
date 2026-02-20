#ifndef SCHOOL_LIST_HPP
#define SCHOOL_LIST_HPP

#include "Student.hpp"
#include "Theacher.hpp"
#include "ClassRoom.hpp"
#include <iostream>
#include <vector>

extern std::vector<Classroom> school;


void list(){
    Theacher t1("Mr. John Doe", 101, "Mathematics");
    Classroom c1("1st Grade", t1, 1, 3);
    c1.addStudent(Student("Alice", 201, 1));
    c1.addStudent(Student("Bob", 202, 1));
    school.push_back(c1);

    Theacher t2("Ms. Jane Smith", 102, "Science");
    Classroom c2("2nd Grade", t2, 2, 3);
    c2.addStudent(Student("Charlie", 203, 2));
    c2.addStudent(Student("Diana", 204, 2));
    school.push_back(c2);

    Theacher t3("Mr. Mark Brown", 103, "History");
    Classroom c3("3rd Grade", t3, 3, 3);
    c3.addStudent(Student("Eve", 205, 3));
    c3.addStudent(Student("Frank", 206, 3));
    school.push_back(c3);

    Theacher t4("Ms. Linda White", 104, "Geography");
    Classroom c4("4th Grade", t4, 4, 3);
    c4.addStudent(Student("Grace", 207, 4));
    c4.addStudent(Student("Henry", 208, 4));
    school.push_back(c4);

    Theacher t5("Mr. John Doe", 105, "Mathematics");
    Classroom c5("5th Grade Mathematics", t5, 5, 3);
    c5.addStudent(Student("Alice", 209, 5));
    c5.addStudent(Student("Bob", 210, 5));
    school.push_back(c5);

    Theacher t6("Ms. Jane Smith", 106, "Science");
    Classroom c6("6th Grade Science", t6, 6, 3);
    c6.addStudent(Student("Charlie", 211, 6));
    c6.addStudent(Student("Diana", 212, 6));
    school.push_back(c6);

    Theacher t7("Mr. Mark Brown", 107, "History");
    Classroom c7("7th Grade History", t7, 7, 3);
    c7.addStudent(Student("Eve", 213, 7));
    c7.addStudent(Student("Frank", 214, 7));
    school.push_back(c7);

    Theacher t8("Ms. Linda White", 108, "Geography");
    Classroom c8("8th Grade Geography", t8, 8, 3);
    c8.addStudent(Student("Grace", 215, 8));
    c8.addStudent(Student("Henry", 216, 8));
    school.push_back(c8);

    Theacher t9("Mr. John Doe", 109, "Mathematics");
    Classroom c9("9th Grade Mathematics", t9, 9, 3);
    c9.addStudent(Student("Alice", 217, 9));
    c9.addStudent(Student("Bob", 218, 9));
    school.push_back(c9);

    Theacher t10("Ms. Jane Smith", 110, "Science");
    Classroom c10("10th Grade Science", t10, 10, 3);
    c10.addStudent(Student("Charlie", 219, 10));
    c10.addStudent(Student("Diana", 220, 10));
    school.push_back(c10);

    Theacher t11("Mr. Mark Brown", 111, "History");
    Classroom c11("11th Grade History", t11, 11, 3);
    c11.addStudent(Student("Eve", 221, 11));
    c11.addStudent(Student("Frank", 222, 11));
    school.push_back(c11);

    Theacher t12("Ms. Linda White", 112, "Geography");
    Classroom c12("12th Grade Geography", t12, 12, 3);
    c12.addStudent(Student("Grace", 223, 12));
    c12.addStudent(Student("Henry", 224, 12));
    school.push_back(c12);
}

#endif
