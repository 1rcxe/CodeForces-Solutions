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
    vector<int> vi;
    for (int i = 0 ; i < n ; i ++){
        int x ;
        cin >> x;
        vi.push_back(x);
    }
    int m ;
    cin >> m ;
    while(m--){
        int a , b ;
        cin >> b >> a;
        int x= vi[b-1];
        vi[b-1]=0;
        if (b>1 && b<n){
            vi[b-2]+=a-1;
            vi[b]+=x-a;
        }
        if (b==1){
            vi[b]+=x-a;
        }
        if (b==n){
            vi[b-2]+=a-1;
        }


    }
    for(int i = 0 ; i < n ; i ++){
        cout << vi[i] << endl;
    }



}
