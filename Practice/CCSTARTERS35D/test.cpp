
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
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		vector<int> even;
		vector<int> odd;
		for(int i = 1;i<n;i++){
			if(arr[i]%2 == 0 ){
				even.pb(i);
			}
			else{
				odd.pb(i);
			}
		}
		reverse(odd.begin() , odd.end());
		reverse(even.begin() , even.end());

		int count = 0 ,curr = 0;
		string parity = "";
		if(arr[curr] %2 == 0){
			parity = "EVEN";
		}
		else{
			parity = "ODD";
		}
			if(parity == "EVEN"){
				 while(!even.empty()){
				 	int size = even.size();
				 	curr = even[size-1];
					count++;
					
				 }
				 if(arr[-1] %2  != 0){
				count++;
				
			}	

			}
			else{
				while(!odd.empty()){
				 	int size = odd.size();
				 	curr = odd[size-1];
					count++;
					cout<<count<<endl;
			}
			if(arr[n-1] %2  == 0){
				count++;
				
			}
		}
	
		
		cout<<count<<endl;
		}
	
#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}