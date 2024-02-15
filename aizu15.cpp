#include<iostream>

using namespace std;

int main(){
    int n, x;
    long long c=0;
    cin >> n;

    int max=-1000000, min=1000000;

    for(int i=0; i<n; i++){
        cin >> x;
        if(x>max) max=x;
        if(x<min) min=x;
        c=c+x;
    }

    cout << min << " " << max << " " << c << endl;

    return 0;
}