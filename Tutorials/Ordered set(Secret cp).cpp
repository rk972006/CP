#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds;
// changing less to greater will give descending order
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
   pbds A; // Decleration 
   //Inserting elements
   A.insert(1);
   A.insert(10);
   A.insert(7);
   A.insert(2);
   A.insert(2); // ordered set will cointain unique values;

   // A cointains
   print(A);

   //Finding Kth element 
   cout<<"0th element: "<<*A.find_by_order(0)<<'\n';
   cout<<"1th element: "<<*A.find_by_order(1)<<'\n';
   cout<<"2th element: "<<*A.find_by_order(2)<<'\n';
   cout<<"3th element: "<<*A.find_by_order(3)<<'\n';
   cout<<'\n';

   // finding no of elements smaller than k
   cout<<"no of elements smaller than 6: "<<A.order_of_key(6)<<endl;
   cout<<"no of elements smaller than 10: "<<A.order_of_key(10)<<endl;
   cout<<endl;

   // lower bound -> Lower Bound of X = first element >= X in the set
   cout << "Lower Bound of 6: " << *A.lower_bound(6) << endl;
   cout << "Lower Bound of 2: " << *A.lower_bound(2) << endl;
   cout << endl;

   // Upper bound -> Upper Bound of X = first element > X in the set
   cout << "Upper Bound of 6: " << *A.upper_bound(6) << endl;
   cout << "Upper Bound of 1: " << *A.upper_bound(1) << endl;
   cout << endl;

   // // Remove elements - 2nd query
   A.erase(1);
   A.erase(11); // element that is not present is not affected

   print(A);



#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}  