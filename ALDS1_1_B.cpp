#include<iostream>
#include<vector>
using namespace std;

int gcd(int x, int y){
    if(x<y) swap(x,y);
    int b;
    while(x%y!=0){
        b=x%y;
        x=y;
        y=b;
    }
    return y;
}

int main(){
    int x,y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
    return 0;
}