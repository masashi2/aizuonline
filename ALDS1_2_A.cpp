#include<iostream>
using namespace std;

int main(){
    
    int n,i;

    cin >> n;

    int A[n];

    for(i=0; i<n; i++){
        cin >> A[i];
    }    

    int flag = 1, cnt = 0;

    while(flag){
        flag = 0;
        for(i=n-1;i>0; i--){
            if(A[i]<A[i-1]){
                swap(A[i], A[i-1]);
                cnt++;
                flag = 1;
            }
        }    
    }

    for(i=0; i<n; i++){
        cout << A[i] << " \n"[i==n-1];
    }
    cout << cnt << endl;
    return 0;

}