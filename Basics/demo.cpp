#include "demo.h"

#include <iostream>
#include <string>

void ProceedAddingTwoNumbers()
{
        int a, b;
    std::cout<<"Type two numbers to add:"<<std::endl;
    std::cin>>a>>b;
    int result = AddTwoNumbers(a, b);

    std::cout<<"Addition result: "<<result<<std::endl;
}

int AddTwoNumbers(int a, int b)
{    
    return a+b;
}

void WelcomeUser()
{
    std::string Name;
    std::cout<<"Let me know your name: ";
    std::getline(std::cin, Name);
    std::cout<<"Welcome "<<Name<<std::endl;
}