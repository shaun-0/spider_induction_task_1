/*
    In this we divide the problem in two case
    case 1 : when Alice release button before Bob start, or when Bob release
             before Alice could start, In this case ther is no vommon time,hence answer is 0

            Pictorially: 

            P   Q
                     R    S

    
    case 2 : Other cases when their will be common time 
             In that the common region will be btw whoever starts late and whoever ends first

            Pictorially :

            P             Q
                   R              S

            here common time is btw R&Q (here R=lateStart of P and R)
                                        (and Q=earlyRelease of Q and S)


    SO we divide the problem in above two cases
*/

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
        int P,Q,R,S;
        cin>>P>>Q>>R>>S; //takes p,q,r,s input
        if(P>=S || R>=Q){ //case when either Alice releases before Bob presses or when Bob releases before Alice presses
        	cout<<0; //in that case there is no common time
        }else{// when they overlap 
        	cout<< min(Q,S) - max(P,R); //common is difference of (which start late and which end first)
        }
        
	return 0;
}
