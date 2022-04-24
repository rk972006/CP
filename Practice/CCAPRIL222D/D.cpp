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
		for(int i = 0;i<n-1;i++){
			if(arr[i+1]<arr[i]){
				swap(arr[i],arr[i+1]);
				break;
			}
		}
		int test = 0;
		for(int i =0;i<n-1;i++){
			if(arr[i+1]<arr[i]){
				cout<<"NO"<<endl;
				test = -1;
				break;
			}else{
				test = 0;
			}
		}
		if(test == 0){
			cout<<"YES"<<endl;
		}
		}


#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}