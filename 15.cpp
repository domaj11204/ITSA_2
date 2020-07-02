#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
    int num = 1;
    string s;
    getline(cin,s);
    int ascii[127] = {0};
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == ' '){
            num++;
        }
        else{
            if(s[i] <= 'Z' && s[i] >= 'A'){
                s[i] = s[i] +32;
            }
            int temp;
            temp = s[i];
            ascii[temp]++;
        }
    }
    cout<<num<<endl;
    for(int i = 0 ; i < 127 ; i++){
        if(ascii[i] != 0 && i >= 'a' && i <= 'z'){
            char temp;
            temp = i;
            cout<<temp<<" : "<<ascii[i]<<endl;
        }
    }
}
