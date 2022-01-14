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
        int n,m,input,cummulativeSum=0,noOfToffee=0;
        // cummulativeSum is cummulative sum of toffee
        // noOfToffee is no. of toffess that Ronny can buy
        cin>>n>>m;  //takes input
        vi v;  //declare a vector
        for(int i=0 ; i<n ; ++i){
        	cin>>input;
        	v.pb(input);  //push input to vector
        }
        sort(v.begin() , v.end());  // sort the vector using STL sort function
        for(int i=0 ; i<n ;i ++){

        	if(cummulativeSum + v[i] > m){ // when cost exceed given amount 
        		break;
        	}
        	else{
        		cummulativeSum += v[i]; //add cost to cummulativeSum
        		noOfToffee++;  //increases count of toffee
        	}
        }
        cout<<noOfToffee; //printes count of toffee
        
	return 0;
}
	