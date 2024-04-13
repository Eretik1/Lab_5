#include <iostream>
#include "returnNumber.h"
#include "returnPrivate.h"
#include "returnException.h"

int main(int, char**){
    setlocale(LC_ALL, "RU");
    unsigned x;
    std::cin >> x;
    exponentiation(x);
    int n = 13, d = -4, p;
    p = returnPrivate(n, d);
    std::cout << p << std::endl;
    int a = -2;
    double b = 0;
    try{
        a = fun1(a, b);
    }
    catch(double code){
        std::cout << "Исключение типа double в функции №" << code << std::endl;
    }
    catch(int code){
        std::cout << "Исключение типа int в функции №"<< code << std::endl;
    }
    catch(...){
        std::cout << "Error";
    }
    return 0;
}
