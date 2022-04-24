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
#define test int t=1;if(more_than_one)cin>>t;while(t--)
#define print(a) for(auto i:a)cout<<i<<" ";cout<<endl;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(a) for(auto &i:a)cin>>i
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(x) ll((x.size()))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
void run_case(){
 
   int n, m , x ; 
   std::cin >> n >> m ; 
   vector<int> vec; 
   int sum = 0 ; 
   for(int i = 0 ; i < n ; i++){
      std::cin >> x; 
      vec.push_back(x); 
      sum +=x ; 
   }
   if ( sum >= m ){
   std::cout << "NO\n"; 
   return; 
 }
   sort(vec.begin(), vec.end()); 
   reverse(vec.begin() , vec.end());

   int req = 2*vec[0] + 1; 
   for (int i = 1 ; i < vec.size(); i++){
      if ( req >= m  ){
         std::cout << "NO\n"; 
         return ; 
      }
      req += vec[i] + 1; 
 
   }
 
   std::cout << "YES\n"; 
 }
int main(){
   bool more_than_one = true;
    //bool more_than_one = false;
   test run_case();
#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}