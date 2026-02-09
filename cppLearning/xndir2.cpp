#include <iostream>
void swapReferance(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
void swapPointers(int *a, int *b){
int ptr = *a;
*a = *b;
*b = ptr;
}

int main()
{
    int a = 0;
    int b = 0;

    std:: cout <<"Enter first number a = ";
    std:: cin >> a;
    std:: cout <<"Enter second number b = ";
    std:: cin >> b;

    std:: cout << "Swap with pointers " << std::endl;
    swapPointers(&a, &b);
    std:: cout<< "a = " << a << " b = " << b << std::endl; 
    std:: cout << "Swap with referance " << std::endl;
    swapReferance(a, b);
    std:: cout<< "a = " << a << " b = " << b << std::endl; 


    return 0;

}