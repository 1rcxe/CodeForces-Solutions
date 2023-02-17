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
 
int main()
{
    ll l, r;
    cin >> l >> r;
    if (l & 1) {
        if (l + 3 > r) {
            cout << -1 << endl;
            return 0;
        }
        else {
            cout << l + 1 << " " << l + 2 << " " << l + 3 << endl;
            return 0;
        }
    }
    else {
       if (l + 2 > r) {
            cout << -1 << endl;
            return 0;
        }
        else {
            cout << l << " " << l + 1 << " " << l + 2 << endl;
            return 0;
        }
    }
    return 0;
}
