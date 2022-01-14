// Submitted by Virender_103
#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define ll              long long
#define pb              emplace_back
#define mp              make_pair
#define pii             pair<int,int>
#define pll             pair<long long,long long>
#define vi              vector<int> 
#define vvi             vector<vector<int>>
#define vll             vector<long long> 
#define vpii            vector<pair<int,int>> 
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(t)            int t; cin>>t; while(t--)
#define printvec(v);    for(auto x:v)cout<<x<<" ";
void Ox67()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}
int main() {
        Ox67();
        w(q){ //taking q lines, check #define line 24
        	ll j,ans,D; //ll means long long
        	cin>>j;
        	D=1+(8*j); //Discriminent
        	ans=(-1+sqrt(D))/2; // Getting n for sum of n'terms by quadratic formula
        	cout<<ans<<"\n";
        }    
	return 0;
}
// Submitted by Virender_103

