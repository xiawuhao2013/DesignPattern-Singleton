#pragma once

#include<iostream>

namespace SingletonDemo
{
    class LazySingleton
    {
    private:
        static LazySingleton* instance;
    private:
        LazySingleton()
        {
            std::cout << "LazySingleton: Construction called." << std::endl;
        }
    public:
        LazySingleton(LazySingleton&) = delete;
        LazySingleton& operator=(const LazySingleton&) = delete;
        ~LazySingleton()
        {
            std::cout << "LazySingleton: Destruction called." << std::endl;
            //delete instance;
        }

        static LazySingleton& GetInstance();
        static void Release();
    };
}