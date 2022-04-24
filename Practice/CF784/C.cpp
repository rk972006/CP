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


int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		read(arr);
		vector<int>odd;
		vector<int>even;
		for(int i = 0;i<n;i++){
			if(arr[i]%2 == 0){
				even.pb(i);
			}
			else{
				odd.pb(i);
			}
		}
		int oddinit = odd[0];
		int eveninit= even[0];
		int oddtemp = 0;
		int eventemp = 0;
		for(int i = 1 ;i<odd.size() ;i++){
			oddtemp = oddtemp*odd[i];
		}
		for(int i = 1 ;i<even.size() ;i++){
			eventemp = eventemp*odd[i];
		}
		int ans = 0;
		if(odd.size() == n || even.size() == n){
			cout<<"YES"<<endl;
		}
		else{
			if(oddinit %2 == 0){
			if(oddtemp%2 == 0){
				ans = 0;
			}
			else{
				ans = 1;
			}
		}
		if(oddinit %2 != 0){
			if(oddtemp%2 != 0){
				ans = 0;
			}
			else{
				ans = 1;
			}
		}
		if(eveninit %2 == 0){
			if(eventemp%2 == 0){
				ans = 0;
			}
			else{
				ans = 1;
			}
		}
		if(eveninit %2 != 0){
			if(eventemp%2 != 0){
				ans = 0;
			}
			else{
				ans = 1;
			}
		}

		if(ans == 0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

		}
		



	}

#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}