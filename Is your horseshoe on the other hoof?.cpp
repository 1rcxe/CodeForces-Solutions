#include <bits/stdc++.h>
using namespace std;
int main(){
vector <int> vi ;
int n=4;
while (n--){
    long long x;
    cin >> x ;
    vi.push_back(x);
}
int minimum=0;
sort(vi.begin(), vi.end());
for (int i = 0 ; i < 3 ; i++ ){
    int j=i+1;
    if (vi[i]!=-1){
        while (vi[i]==vi[j]){
            minimum++;
            vi[j]=-1;
            j++;
    }
    }
}
cout << minimum;

}


