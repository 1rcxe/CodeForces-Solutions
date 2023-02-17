#include <bits/stdc++.h>
#include <algorithm>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;
# define M_PIl          "3141592653589793238462643383279502884"
 
ll gcd(ll a , ll b) {return b ? gcd(b , a % b) : a ;}
ll lcm(ll a , ll b) {return (a * b) / gcd(a , b);}
 
ll isprime(int n){
    for(int i=2;i*i<=n;i++)if(n%i==0)return 0;
    return n!=1;
    }
 
int main(){
    int t ;
    cin >> t ;
    while(t--){
        string s ;
        cin >> s;
        int nb=0;
        for (int i=0;i<s.length();i++){
            if (s[i]==M_PIl[i]){
                nb++;
            }
            else{
                break;
            }
        }
        cout << nb <<endl;
 
    }
 
 
}
