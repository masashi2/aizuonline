#include<iostream>

using namespace std;

int main(){
    int H, W;
    while(1){
        cin >> H >> W;
        if(H==0 && W==0) break;
        for(int j=0; j<H; j++){
            for(int i=0; i<W; i++){
            cout << "#";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
