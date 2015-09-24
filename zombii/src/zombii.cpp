#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<climits>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<bitset>
#include<stack>
#include<queue>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<functional>
#include<numeric>
using namespace std;
#define FOR(i,a,b) for(i= a ; i < b ; ++i)
#define FORi(i,a,b) for(i= a ; i < b ; ++i)
#define rep(i,n) FOR(i,0,n)
#define repi(i,start,n) FORi(i,start,n)
#define INF INT_MAX
#define ALL(x) x.begin(),x.end()
#define LET(x,a) __typeof(a) x(a)
#define IFOR(i,a,b) for(LET(i,a);i!=(b);++i)
#define EACH(it,v) IFOR(it,v.begin(),v.end())
#define pb push_back
#define sz(x) int(x.size())
#define mp make_pair
#define fill(x,v) memset(x,v,sizeof(x))
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define si(n) scanf("%d",&n)
#define pi(n) printf("%d ",n)
#define pd(n) printf("%lf ",n);
#define pdl(n) printf("%lf\n",n);
#define pin(n) printf("%d\n",n)
#define pln(n) printf("%lld\n",n)
#define pl(n) printf("%lld ",n)
#define sl(n) scanf("%lld",&n)
#define sd(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)
#define scan(v,n) vector<int> v;rep(i,n){ int j;si(j);v.pb(j);}
#define mod (int)(1e9 + 7)
#define ll long long int
#define F first
#define S second
#define fwhile() int t;cin>>t;while(t--)
#define Vi vector<int>
#define Vll vector<long long>
#define Vs vector<std::string>
using namespace std;

int main(){
	int num=0,evensum=0,oddsum=0;
	Vi viodd,vieven;
	fwhile(){
		scanf("%d",&num);
		if(num%2==0){
			vieven.pb(num);
			evensum+=num;
		}
		else{
			viodd.pb(num);
			oddsum+=num;
		}
	}
	std::sort(ALL(viodd));
	std::sort(ALL(vieven));
	for(auto i: vieven)
		printf("%d ",i);
	printf("%d ",evensum);
	for(auto i: viodd)
			printf("%d ",i);
	printf("%d ",oddsum);

	return 0;
}
