#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
typedef vector<int> vi;



int main(){
    int dan=0,ant=0,n;
    string Results;
    cin >> n ;
    cin >> Results;
    while (n--){
        if (Results[n]=='A'){ant++;}
        else{dan++;}}
    if (ant>dan){cout << "Anton";}
    else if (dan>ant){cout << "Danik";}
    else{ cout << "Friendship";}


}
