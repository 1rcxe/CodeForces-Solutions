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
    int n ;
    cin >> n ;
    vector<int> v(n);
    for (int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    int j = n , s=0;
    int i = -1 , s1=0;
    int coins = 0 ;
    sort(v.begin(),v.end());
    while (n--){
        if (s1+v[i+1]<s){
            i++;
            s1+=v[i];
        }
        else{
            j--;
            s+=v[j];
            coins ++;
        }
    }
    cout << coins <<endl;
}
