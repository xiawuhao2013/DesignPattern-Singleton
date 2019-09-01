#pragma once

#include<iostream>

namespace SingletonDemo
{
    class MeyerSingleton
    {
    private:
        MeyerSingleton()
        {
            std::cout << "MeyerSingleton: construction called." << std::endl;
        }
    public:
        MeyerSingleton(MeyerSingleton&) = delete;
        MeyerSingleton& operator=(const MeyerSingleton&) = delete;
        ~MeyerSingleton()
        {
            std::cout << "MeyerSingleton: destruction called." << std::endl;
        }

        static MeyerSingleton& GetInstance();
    };
}