#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int C[10001];//カウント配列
    for(int i=0;i<10001;i++) C[i]=0;
    int n;
    cin>>n;
    int* A=new int[n]; //入力配列
    int* B=new int[n]; //出力配列
    for(int i=0;i<n;i++){
        cin>>A[i];
        C[A[i]]++;
    }
    for(int i=0,j=0;i<10001;i++){
        if(C[i]!=0){
            for(int k=0;k<C[i];k++){
                B[j++]=i;//C[i]をB[i]に変換
            }
        }
    }
    for(int i=0;i<n-1;i++) cout<<B[i]<<' ';
    cout<<B[n-1]<<endl;
    delete[] A;
    delete[] B;
    return 0;
}