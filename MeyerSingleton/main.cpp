#include<iostream>
#include"MeyerSingleton.h"

using namespace SingletonDemo;

int main()
{
    do
    {
        MeyerSingleton& meyerSingletonA = MeyerSingleton::GetInstance();
        std::cout << &meyerSingletonA << std::endl;
        MeyerSingleton& meyerSingletonB = MeyerSingleton::GetInstance();
        std::cout << &meyerSingletonB << std::endl;

    } while (false);

    system("pause");
    return 0;
}