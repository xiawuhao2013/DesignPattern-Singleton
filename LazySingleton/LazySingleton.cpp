#include"LazySingleton.h"

using namespace SingletonDemo;

LazySingleton* LazySingleton::instance = nullptr;

LazySingleton* LazySingleton::GetInstance()
{
    if (nullptr == instance)
    {
        instance = new LazySingleton;
    }

    return instance;
}

void LazySingleton::Release()
{
    if (nullptr != instance)
    {
        delete instance;
        instance = nullptr;
    }

    return;
}