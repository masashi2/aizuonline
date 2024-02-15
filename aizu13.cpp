#include<iostream>
#include<iomanip>

int main(){
    double r, pi=3.141592653589;
    std::cin >> r;

    std::cout << std::fixed << std::setprecision(6);
    std::cout << pi*r*r << " "<< 2*pi*r << std::endl;
}