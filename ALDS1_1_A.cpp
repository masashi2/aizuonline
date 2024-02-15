#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; cin>>n;
    int i,j,k,x;
    vector<int> v;
    for(i=0;i<n;i++){
        cin >> k;
        v.push_back(k);
    }
    for(j=0;j<n;j++) cout << v[j] << (j==n-1?'\n':' ');
    for(i=1;i<n;i++){
        x=v[i];
        k=i-1;
        while(k>=0 && v[k]>x){
            v[k+1]=v[k];
            k--; 
        }
        v[k+1]=x;
    for(j=0;j<n;j++) cout << v[j] << (j==n-1?'\n':' ');
    } 
    return 0;
}