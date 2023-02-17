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
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{return (a.second < b.second);
}
// Using sort() function to sort by 2nd element
// of pair
//sort(vect.begin(), vect.end(), sortbysec);
 
int main(){
    int t;
    cin >> t ;
    while (t--){
        int n ;
        cin >> n;
        int nb = 0 ;
        vector <int> v(n) ;
        for (int i = 0 ; i < n ; i++){
            cin >> v[i];
            if (v[i]>=2){
                v[i]=0;
                nb++;
            }
        }
        int c=count(v.begin(),v.end(),1);
        nb += c/2 + c%2;
        cout << nb <<endl;
    }
 
}
