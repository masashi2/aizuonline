#include<iostream>
#include<iomanip>

int main(){
    int a, b, d, r;
    double f;

    std::cin >> a >> b;
    d = a/b;
    r = a%b;
    f = (double)a/b;

    std::cout << std::fixed << std::setprecision(5);
    std::cout <<  d << " " << r << " " << f << std::endl;

    return 0;
}