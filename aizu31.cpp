#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    int ab[26]={};
    
    while(getline(cin, str)){
        for(int i=0; i<str.size(); i++){
            if(str[i]>='a'&&str[i]<='z')ab[str[i]-'a']++;
            else if(str[i]>='A'&&str[i]<='Z')ab[str[i]-'A']++;
        }
    }
    for(int i=0; i<26; i++){
        cout << (char)(i+'a') << " : " << ab[i] << endl;
    } 
    return 0;
}
