#include<iostream>
using namespace std;
#define SIZE 2001

char resultTable[SIZE];
int n, q, elems[20];

void calc(int sum, int index){
    if(index==n){
        if(sum>=1&&sum<=2000) resultTable[sum]='y';
    }else{
        calc(sum+elems[index], index+1);
        calc(sum, index+1);
    }
}

int main(){
    for(int i=0;i<SIZE;i++) resultTable[i]= 'n';
    cin>>n;
    for(int i=0;i<n;i++) cin>>elems[i];
    calc(0, 0);
    cin>>q;
    int tmp;
    for(int i=0;i<q;i++){
        cin>>tmp;
        if(resultTable[tmp]=='y'){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
}