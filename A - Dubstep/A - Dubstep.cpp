    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    using namespace std;
     
     
    int main() {
        fast;
    	string s;
    	int flag=1;
    	cin>>s;
    	for(int i=0;i<s.size();i++){
    	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
    	        i+=2;
    	        if(!flag){
    	            cout<<" ";
    	        }
    	        continue;
    	    }else {
    	        flag=0;
    	        cout<<s[i];
    	    }
    	}
    }
