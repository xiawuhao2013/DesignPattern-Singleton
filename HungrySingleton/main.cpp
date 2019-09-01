#include<iostream>
#include"HungrySingleton.h"

using namespace SingletonDemo;
int main(int argc, char* argv)
{
    std::cout << "Singleton demo: Hungry singleton." << std::endl;
    do
    {
        HungrySingleton& instanceA = HungrySingleton::GetInstance();
        std::cout << &instanceA << std::endl;
        HungrySingleton& instanceB = HungrySingleton::GetInstance();
        std::cout << &instanceB << std::endl;
        HungrySingleton& instanceC = HungrySingleton::GetInstance();
        std::cout << &instanceC << std::endl;
    } while (false);

    return 0;
}