    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
     
     
    int main(){
    fast;
    string s ;
    cin >> s;
    char current='a';
    int nb = 0 ;
    for(int i=0 ; i < s.size() ; i++){
        if (abs(max(char(s[i]),current)-min(char(s[i]),current))>13){
            nb=nb+26-abs(max(char(s[i]),current)-min(char(s[i]),current));
        }
        else{
            nb=nb+abs(char(s[i])-current);
        }
        current=char(s[i]);
     
    }
    cout << nb;
     
     
     
    }
