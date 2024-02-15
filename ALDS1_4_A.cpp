#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    int q;
    cin>>q;
    int cnt=0,tmp;
    for(int i=0;i<q;i++){
        cin>>tmp;
        for(int j=0;j<n;j++){
            if(s[j]==tmp){
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<endl;
    return 0; 
}