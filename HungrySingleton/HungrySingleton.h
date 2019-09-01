#pragma once

#include<iostream>

namespace SingletonDemo
{
    class HungrySingleton
    {
    private:
        static HungrySingleton* instance;

    private:
        HungrySingleton()
        {
            std::cout << "HungrySingleton: construction called." << std::endl;
        }

    public:
        HungrySingleton(HungrySingleton&) = delete;
        const HungrySingleton& operator=(HungrySingleton) = delete;
        ~HungrySingleton()
        {
            std::cout << "HungrySingleton: destruction called." << std::endl;
        }

        static HungrySingleton& GetInstance();
    };
}