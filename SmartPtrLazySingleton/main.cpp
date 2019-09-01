#include<iostream>
#include"SmartPtrLazySingleton.h"

using namespace SingletonDemo;

int main()
{
    std::cout << "Singleton Demo: SmartPtrLazy Singleton." << std::endl;
    do
    {
        SmartPtrLazySingleton::SmartPtrLazySingletonHandle handleA = SmartPtrLazySingleton::GetInstance();
        std::cout << handleA << std::endl;
    } while (false);
    do
    {
        SmartPtrLazySingleton::SmartPtrLazySingletonHandle handleB = SmartPtrLazySingleton::GetInstance();
        std::cout << handleB << std::endl;
    } while (false);
    

    return 0;
}