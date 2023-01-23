#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
    string s,str="";
    cin >> s;
    if (s.size()>2){
    //Finding First WUBS;
    bool flag=1;
    int i = 0 ;
    if (s[i]=='W'){
    while (flag){
        if (s.substr(i,3)!="WUB"){
            flag=0;
        }
        else{
            i=i+3;
        }
    }}
    //Finding Last WUBS
    int j = s.size()-1 ;
    flag = 1 ;
    while (flag){
        if (s.substr(j-2,3)!="WUB"){
            flag = 0;

        }
        else{
            j=j-3;
        }

    }
    // Replacing Wubs in  the middle with spaces
    while (i<=j){
        if (s[i]=='W'){
            if (s[i+1]=='U')
            {
                if (s[i+2]=='B'){
                    str+=' ';
                    i=i+3;
                }
                else{
                    str=str+s[i];
                    str=str+s[i+1];
                    i=i+2;
                }
            }
            else{
            str+=s[i];
            i++;
            }
        }
        else {
            str+=s[i];
            i++;
        }


    }
    //Removing the spaces
    string str1;
    for (int i = 0 ; i<str.size() ; i++){
        if (str[i]==' '){
            str1+=' ';
            i++;
            while(str[i]==' '){
                i++;
            }
            }
        str1+=str[i];
    }
    cout << str1 <<endl;}
    else{
        cout << s ;
    }
}

