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
#define read(a) for(auto &i:a)cin>>i;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(x) ll((x.size()))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int main(){


#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif

   int t;
   cin>>t;
   while(t--){
      int n , r, b;
      cin>>n>>r>>b;
      vector<string> v(b+1 , "");
      ll k = 0;
      while(r--){
         v[k%(b+1)] += "R";
         k++;
      }
      string ans = "";
      for(int i =0 ; i<=b;i++){
         ans+=v[i];
         if(i<b){
            ans+="B";
         }
         
   }
   cout<<ans<<endl; 
}
 return 0;
}  