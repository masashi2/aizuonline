#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    for(int i=0; i<str.length(); i++){
        if(isalpha(str[i])){
            if(islower(str[i])){
                str[i] = toupper(str[i]);
            }else if(isupper(str[i])){
                str[i] = tolower(str[i]);
            }
        }
    }
    cout << str << endl;
    return 0;
}
