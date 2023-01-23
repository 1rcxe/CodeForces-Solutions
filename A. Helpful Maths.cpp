#include <bits/stdc++.h>
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
    string s;
    cin >> s;
    vector<char> vi;
    for(int i = 0 ; i < s.length() ; i++){
        if (s[i]!='+'){
            vi.push_back(s[i]);
        }
    }
    sort(vi.begin(),vi.end());
    for(int i = 0 ; i < vi.size() ; i++){
        if (i<vi.size()-1){
        cout << vi[i] << '+';
        continue;
        }
        else{
        cout<<vi[i]<<endl;}
    }

}
