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
    int n , p , x;
    cin >> n ;
    cin >> p ;
    vector<int> v;
    for(int i = 0 ; i< p ; i++){
        int c ;
        cin >> c ;
        v.push_back(c);
    }
    cin >> x ;
    vector<int> v1(x);
    for(int i = 0 ; i< x ; i++){
        cin >> v1[i];
    }
    v.insert( v.end(), v1.begin(), v1.end() );
    sort( v.begin(), v.end() );
    v.erase( unique( v.begin(), v.end() ), v.end() );
    if (p+x!=0){
    for (int i = 1; i <= n ; i++){
        if (v[i-1]!=i){
            cout << "Oh, my keyboard!" <<endl;
            return 0 ;
        }
 
    }
    cout << "I become the guy." <<endl;
    return 0;
    }
    else{
        cout << "Oh, my keyboard!" <<endl;
    }
 
}
