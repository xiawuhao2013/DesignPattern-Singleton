#pragma once

#include<iostream>
#include<memory>
#include<mutex>

namespace SingletonDemo
{
    
    class SmartPtrLazySingleton
    {
    public:
        typedef std::shared_ptr<SmartPtrLazySingleton> SmartPtrLazySingletonHandle;

    private:
        static SmartPtrLazySingletonHandle handle;
        static std::mutex mutexLock;

    private:
        SmartPtrLazySingleton()
        {
            std::cout << "SmartPtrLazySingleton: construction called." << std::endl;
        }

    public:
        SmartPtrLazySingleton(SmartPtrLazySingleton&) = delete;
        SmartPtrLazySingleton& operator=(const SmartPtrLazySingleton&) = delete;
        ~SmartPtrLazySingleton()
        {
            std::cout << "SmartPtrLazySingleton: destruction called." << std::endl;
        }

        static SmartPtrLazySingletonHandle GetInstance();
    };
}