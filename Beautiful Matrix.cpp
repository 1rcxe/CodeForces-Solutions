#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
int n,posj,posi;
for (int i=1; i<6 ; i ++ ){
    for (int j = 1 ; j <6 ; j ++ ){
        cin >> n;
        if (n==1){
            posi=i;
            posj=j;

        }
    }
}
if (posi>3){
    posi=posi-3;
}
else if (posi<3){
    posi=3-posi;
}
else{
    posi=0;
}

if (posj>3){
    posj=posj-3;
}
else if (posj<3){
    posj=3-posj;
}
else {
    posj=0;
}

cout << posi+posj;
}
