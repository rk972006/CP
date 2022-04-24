#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
typedef long double   lld;
const ll mod=1e9+7;
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define print(a) for(auto i:a)cout<<i<<" ";cout<<endl;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(a) for(auto &i:a)cin>>i
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(x) ll((x.size()))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

bool printSubstrings(string str)
{
 		int ans = 0;
 		int loopend = 0;
    // First loop for starting index

    for (int i = 0; i < str.length(); i++) {
        string subStr;
        // Second loop is generating sub-string
        for (int j = i; j < str.length(); j++) {

            subStr += str[j];
            if(subStr.size() == 2 || subStr.size() == 3){
            	if(subStr == "aa" || subStr == "aaa" || subStr == "bb" || subStr == "bbb"){
            		ans = 0;
            	}
            	else{
            		ans = ans +1;
            		loopend = -1;
            		break;
            	}
            }
            
        }
    }
    if(loopend == 0){
    	if(ans == 0){
    	return true;
    }
    return false;
    }
    else{
    	return false;
    }
    
}

int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool check = false;
		if(s.size() >1){
			 check = printSubstrings(s);

		}

		
		if(check == true){
			yes;
		}
		else{
			no;
		}
	
	}

#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}