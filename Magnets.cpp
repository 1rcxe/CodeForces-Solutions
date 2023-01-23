#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    int n ;
    vector<int> magnets;
    cin >> n ;
    while (n--){
        int x;
        cin >> x ;
        magnets.push_back(x);
    }
    int nb = 1 ;
    for (int i=0 ; i<magnets.size()-1; i++)
    {
        if (magnets[i]!=magnets[i+1]){

            nb++;

        }


    }
    cout << nb ;

}
