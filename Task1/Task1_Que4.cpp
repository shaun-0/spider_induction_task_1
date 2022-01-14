//submitted by 103_virender

/*

We generate all prime number from 2 to N by Sieve of Eratosthenes 
Then we traverse this array and check if (1 + currNumber + nextNumber) is prime Number
by binary searching that sum in primes array, and if we find it then we increment the count
At last we check if count>=x then we print YES else NO

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
#define vb              vector<bool>  
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
#define printvec(v);    for(auto x:v)cout<<x<<"\n";
void Ox67()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
       freopen("error.txt", "w", stderr);
#endif
}
void generatePrime(int n,vi &primeNumberUptoN){//Prime Seive to generate prime Numbers upto N
	vb v(n,true); //bool vector to check whether no. is prime
	v[0]=v[1]=false;
	for(int i=2;i*i<=n;i++){ 
		if(v[i]){	//if current number is prime, mark all multiple of number false
			for(int j=i*i;j<=n;j+=i){
				v[j]=false;
			}
		}
	}
	for(int i=2;i<=n;i++){ //Adding prime number from above vector
		if(v[i]){
			primeNumberUptoN.pb(i);
		}
	}
}
int main() {
        Ox67();
        int n,x;
        cin>>n>>x;
        vi primeNos; //declaring int vector
        generatePrime(n,primeNos); //generate prime no. upto N
        int count=0;
		for(int i=0;i<primeNos.size()-1;i++){
			// for every adjacent prime in generatedprime  check if sum is also prime
			int sum=primeNos[i]+primeNos[i+1]+1; //sum of 1 and two adjacent primes
			//binarysearch whether sum is prime
			if(binary_search(primeNos.begin(), primeNos.end(), sum)){
				count++;
			}
			if(count>=x){ // if we are exceeding x we break
				break;
			}
		}
		if(count>=x){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
    
	return 0;
}
//submitted by 103_virender