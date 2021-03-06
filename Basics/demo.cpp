#include "demo.h"

#include <iostream>
#include <string>
#include <locale>

std::string ChooseTask()
{
    std::string ChosenTask;
    std::cout<<"Choose what program you want to run: WelcomeUser, AddTwoNumbers, AreaOfTriangle, SumOfN. (case does not matter)"<<std::endl;
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

void AreaOfTriangle()
{
    int b=1,h=1;
    std::cout<<"Type height and arm (in integral numbers): "<<std::endl;
    std::cin>>b>>h;
      
    float area;	
    area= static_cast<float>(b) * static_cast<float>(h) / 2.f;
    
    std::cout<<"Area of triangle is: "<<area<<std::endl;
}

int SumOfN(int n)
{
    int sum;
    sum= (n * (n+1)) / 2;
    
    std::cout<<"Sum of N equals: "<<sum<<std::endl;
    return sum;
}

std::string StringToLower(std::string InString)
{
    std::string StringToReturn = "";
    for(int i=0; i<InString.length(); ++i)
    {
        StringToReturn += std::tolower(InString[i], std::locale());
    }
    return StringToReturn;
}

void RunChosenTask(std::string InChosenTask)
{
    std::string ChosenTaskInLowercase = "";
    ChosenTaskInLowercase = StringToLower(InChosenTask);

    if (ChosenTaskInLowercase.compare("welcomeuser") == 0)
    {
        WelcomeUser();
    }
    else if (ChosenTaskInLowercase.compare("addtwonumbers") == 0)
    {
        ProceedAddingTwoNumbers();
    }
    else if (ChosenTaskInLowercase.compare("areaoftriangle") == 0)
    {
        AreaOfTriangle();
    }
    else if (ChosenTaskInLowercase.compare("sumofn") == 0)
    {
        int n = 1;
        std::cout<<"Type integral number for SumOfN function:"<<std::endl;
        std::cin>>n;   
        SumOfN(n);
    }
    else
    {
        std::cout<<"User didn't pass proper program to run. Finishing execution."<<std::endl;
    }         
}