#include<iostream>
using namespace std;

int main(){
    int n,i,j, min;
    cin >> n;
    int A[n];
    for(i=0;i<n;i++){
        cin >> A[i];
    }
    int cnt=0;
    for(i=0;i<n;i++){
        min = i;
        int flag = 0;
        for(j=i;j<n;j++){
            if(A[j]<A[min]){
                min = j;
                flag = 1;
            }
        }
        if(flag){
            swap(A[i], A[min]);
            cnt ++;
        }
    }
    for(i=0; i<n; i++){
        cout << A[i] << " \n"[i==n-1]; 
    }
    cout << cnt << endl;

    return 0;
     
}