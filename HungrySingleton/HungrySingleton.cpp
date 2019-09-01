#include"HungrySingleton.h"

using namespace SingletonDemo;

HungrySingleton* HungrySingleton::instance = new HungrySingleton;

HungrySingleton* HungrySingleton::GetInstance()
{
    return instance;
}