#include<iostream>
#include"HungrySingleton.h"

using namespace SingletonDemo;
int main(int argc, char* argv)
{
    do
    {
        HungrySingleton::GetInstance();
        std::cout << HungrySingleton::GetInstance() << std::endl;
        std::cout << HungrySingleton::GetInstance() << std::endl;
        std::cout << HungrySingleton::GetInstance() << std::endl;

    } while (false);


    std::cout << "Singleton demo: Hungry singleton." << std::endl;
    return 0;
}