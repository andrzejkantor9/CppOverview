#include<iostream>

#include "conio.h"

#include "Basics/demo.h"

int main()
{
    RunChosenTask(ChooseTask());
    //WelcomeUser();
    //ProceedAddingTwoNumbers();

    std::cout<<"Press any button to end the program.";
    _getch();
    return 0;
} 