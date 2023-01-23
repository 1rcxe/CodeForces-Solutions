
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
    int n ;
    cin >> n ;
    vector<pair<int,int>> v(n) ;
    for(int i= 0 ; i<n ; i++){
        cin >> v[i].first;
        cin >> v[i].second;
    }
    sort(v.begin(), v.end());
    for (int i = 0 ; i < n-1 ;i++){
        if (v[i].first < v[i+1].first && v[i].second>v[i+1].second){
            cout << "Happy Alex"<<endl;
            return 0;

        }
    }
    cout << "Poor Alex"<<endl;
    return 0;

}
