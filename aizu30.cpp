#include<iostream>
#include<string>

using namespace std;

int main(){
    string x;
    while(1){
        cin >> x;
        if(x=="0") break;
        int num[999], count=0;
        for(int i=0; i<x.length(); i++){
            num[i]=x[i]-'0';
            count+=num[i];
        }
        cout << count <<endl;
    }
}