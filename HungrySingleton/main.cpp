#include<iostream>
#include"LazySingleton.h"
using namespace SingletonDemo;

int main()
{
    int iterTimeA = 1000000000;
    int iterTimeB = 1000000000;
    int iterTimeC = 1000000000;
    int iterTimeD = 1000000000;
    int iterTimeE = 1000000000;
    int iterTimeF = 1000000000;
    int iterTimeG = 1000000000;
    int iterTimeH = 1000000000;
    int iterTimeI = 1000000000;
    do
    {
        do
        {
            do
            {
                do
                {
                    do
                    {
                        do
                        {
                            do
                            {
                                do
                                {
                                    do
                                    {
                                        LazySingleton* instanceA = LazySingleton::GetInstance();
                                        std::cout << instanceA << std::endl;
                                        LazySingleton::Release();
                                        LazySingleton* instanceB = LazySingleton::GetInstance();
                                        std::cout << instanceB << std::endl;
                                    } while (--iterTimeA >= 0);
                                } while (--iterTimeB >= 0);
                            } while (--iterTimeC >= 0);
                        } while (--iterTimeD >= 0);
                    } while (--iterTimeE >= 0);
                } while (--iterTimeF >= 0);
            } while (--iterTimeG >= 0);
        } while (--iterTimeH >= 0);
    } while (--iterTimeI >= 0);

    system("pause");
    return 0;
}