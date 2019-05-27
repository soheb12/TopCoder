// Write this code in Code template tab of FileEdit Configuration

#include<bits/stdc++.h>
#define f(a,b) for(ll i=a;i<b;i++)
#define fb(a,b) for(ll i=a;i>=b;i++)
#define ll long long 
#define pb push_back
#define mp make_pair
#define X first
#define z size()
#define Y second
#define pl pair<ll,ll>
#define all(v) v.begin(),v.end()
#define ios ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const ll mod = (1e9)+7;
const ll size = (2e5)+9;
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}
ll power(ll a,ll b,ll m=mod){ll res=1;while(b > 0){if(b&1)res = (res*a)%m;b = b>>1;a = (a*a)%m;}return res;}

/* SKYSCRAPER @ 2019 */

class $CLASSNAME${
	public:
	$RC$ $METHODNAME$($METHODPARMS$) {
		$RC$ ans;
		return ans;
	}

};

$BEGINCUT$
$TESTCODE$
int main()
{
	moj_harness::run_test();
}
$ENDCUT$
