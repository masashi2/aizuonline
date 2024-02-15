#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];
    int pivot = A[n-1];
    int k = -1;
    for(int i=0;i<n-1;i++){
        if(A[i]<=pivot){
            k++;
            swap(A[i],A[k]);
        }
    }
    swap(A[k+1], A[n-1]);
    for(int i=0;i<n;i++){
        if(i==k+1){
            cout<<'['<<A[i]<<"] ";
        }else{
            cout<<A[i]<<' ';
        }
    }
    cout<<endl;
}