#include <iostream>
#include "interface.hpp"
#include "school_list.hpp"

std::vector<Classroom> school;

int main()
{
    welcome();

    list();
    
    displaySchool(school);

    return 0;
}
