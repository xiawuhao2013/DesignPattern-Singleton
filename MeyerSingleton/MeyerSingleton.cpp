#include"MeyerSingleton.h"

using namespace SingletonDemo;

MeyerSingleton& MeyerSingleton::GetInstance()
{
    static MeyerSingleton instance;
    
    return instance;
}