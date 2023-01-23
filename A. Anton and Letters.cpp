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

void solve(){


}


int main(){
    string s ;
    char scan;
    int dis = 0;
    do{
        scanf("%c",&scan);
        if(scan!=' ' && scan!=',' && scan!='{'&& scan!='}')
            s=s+scan;
        }while(scan!='}');

    map<char,int> mp;

    for(int i=0 ; i < s.length() ; i ++){
            if (mp[s[i]]==0){
                dis++;
                mp[s[i]]++;
            }
        }

    cout << dis <<endl;
}
