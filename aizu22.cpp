#include<iostream>

using namespace std;

int main(){
    int n, S[14], H[14], D[14], C[14],y;
    char x;
    cin >> n;
    for(int i=0; i<14; i++){
        S[i]=0;
        H[i]=0;
        D[i]=0;
        C[i]=0;
    }
    for(int i=0; i<n; i++){
        cin >> x >> y;
        if(x=='S') S[y]=1;
        if(x=='H') H[y]=1;
        if(x=='D') D[y]=1;
        if(x=='C') C[y]=1;
    }
    for(int i=1; i<14; i++){
        if(S[i]==0)cout << "S "  << i << endl;
    }
    for(int i=1; i<14; i++){
        if(H[i]==0)cout << "H " << i << endl;
    }
    for(int i=1; i<14; i++){
        if(C[i]==0)cout << "C "  << i << endl;
    }
    for(int i=1; i<14; i++){
        if(D[i]==0)cout << "D " << i << endl;
    }
    return 0;
}