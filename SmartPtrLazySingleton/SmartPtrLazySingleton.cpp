#include"SmartPtrLazySingleton.h"

using namespace SingletonDemo;

SmartPtrLazySingleton::SmartPtrLazySingletonHandle SmartPtrLazySingleton::handle = nullptr;

std::mutex SmartPtrLazySingleton::mutexLock;

SmartPtrLazySingleton::SmartPtrLazySingletonHandle SmartPtrLazySingleton::GetInstance()
{
    if (nullptr == handle)
    {
        std::lock_guard<std::mutex> lk(mutexLock);
        if (nullptr == handle)
        {
            handle = SmartPtrLazySingletonHandle(new SmartPtrLazySingleton);
        }
    }

    return handle;
}