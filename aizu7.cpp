#include<bits/stdc++.h>
using namespace std;

int main(){
    int W, H, x, y, r;

    cin >> W >> H >> x >> y >> r;

    if(x-r<0 || x+r>W){cout<< "No" <<endl; return 0;}
    if(y-r<0 || y+r>H){cout<< "No" <<endl; return 0;}
    cout << "Yes" << endl;
}