#include "demo.h"

#include <iostream>
#include <algorithm>
#include <cctype>

std::string ChooseTask()
{
    std::string ChosenTask;
    std::cout<<"Choose what program you want to run: WeclomeUser, AddTwoNumbers, AreaOfCircle, SumOfN."<<std::endl;
    std::cin>>ChosenTask;

    return ChosenTask;
}

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

void area()
{
    int b=7,h=5;
   
    float area;
	
    area= static_cast<float>(b) * static_cast<float>(h) / 2.f;
    
    std::cout<<area;
}

int SumOfN(int n)
{
    int sum;
    
    sum= (n * (n+1)) / 2;
    
    return sum;
}

void RunChosenTask(std::string InChosenTask)
{
    /*
    std::string ChosenTaskToLower = std::transform(InChosenTask.begin(), InChosenTask.end(), InChosenTask.begin(), std::tolower);
    if (ChosenTaskToLower._Equal("welcomeuser"))
    {
        WelcomeUser();
    }
    else if (ChosenTaskToLower._Equal("addtwonumbers"))
    {
        ProceedAddingTwoNumbers();
    }
    else if (ChosenTaskToLower._Equal("areaofcircle"))
    {
        AreaOfCircle();
    }
    else if (ChosenTaskToLower._Equal("sumofn"))
    {
        SumOfN(5);
    }
    else
    {
        std::cout<<"User didn't pass proper program to run. Finishing execution."<<std::endl;
    }
    */
        
}