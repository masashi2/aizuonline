#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    int q; cin>>q;
    int t[q];
    for(int i=0;i<q;i++) cin>>t[i];
    int cnt=0;
    for(int i=0;i<q;i++){
        int right=n-1,left=0,mid=(right+left)/2;
        while(left<=right){
            if(s[mid]==t[i]){
                cnt++;
                break;
            }else if(s[mid]<=t[i]){
                left=mid+1;
            }else{
                right=mid-1;
            }
            mid=(right+left)/2;
        }
    }
    cout<<cnt<<endl;
    return 0;
}