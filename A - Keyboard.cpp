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
 
string  solve(string s1 ,char c ){
	string s="qwertyuiopasdfghjkl;zxcvbnm,./";
	string answer;
int len=s1.length();
for(int i=0;i<len;i++){
	int index=s.find(s1[i]);
	if(c=='R'){
		answer+=s[index-1];
 
	}
	else{
			answer+=s[index+1];
	}
 
}
return answer;
 
}
 
int main() {
 
string s2;
char c;
cin>>c;
cin>>s2;
 cout<<solve(s2,c);
 
 
	return 0;
}
