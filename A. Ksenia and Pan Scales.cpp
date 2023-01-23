
#include <bits/stdc++.h>
#include <algorithm>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;

ll gcd(ll a , ll b) {return b ? gcd(b , a % b) : a ;}
ll lcm(ll a , ll b) {return (a * b) / gcd(a , b);}

ll isprime(int n){
    for(int i=2;i*i<=n;i++)if(n%i==0)return 0;
    return n!=1;
    }


int main(){
    string s , c;
    cin >> s >> c ;
    int pos = s.find('|');
    string l1=s.substr(0,pos),l2=s.substr(pos+1,s.length());
    for (int i = 0 ; i < c.length() ; i ++){
        if (l1.length()<=l2.length()){
            l1+=c[i];
        }
        else{
            l2+=c[i];
        }
    }
    if (l1.length() == l2.length()){
        cout << l1 <<'|'<<l2 <<endl;
    }
    else{
        cout << "Impossible" <<endl;
    }


}
