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
    int y,w;
    cin >> y >> w ;
    int m = max({y,w});
    int flag = 1;
    if (y==w && m ==1){
    cout<< 1 <<"/" << 1;
    flag = 0 ;
    }
    if (flag==1){
        if (6%(6-m+1)==0){
        cout << 1 << "/" << 6/(6-m+1);
        }
        else{
        int x = gcd(6-m+1,6);
        cout << (6-m+1)/x << "/" << 6/x;


        }
    }
}
