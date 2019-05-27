//This is the submission for SRM 747 Div2 250 pointer


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

class Sherlock {
	public:
	string isItHim(string f, string s) {
		string ans;
		string a = "BENEDICT";
		string b = "CUMBERBATCH";
		ll x = 0;
		for(int i=0;i<f.size();i++)
		{
			if(a.find(f[i]) != -1)
			x += count(all(f),f[i]);
		}
		ll y = 0;
		for(int i=0;i<s.size();i++)
		{
			if(b.find(s[i]) != -1)
			y += count(all(s),s[i]);
		}
		if(f.z >= 7 && s.z >= 7 && f[0] == 'B' && s[0] == 'C' && x>=3 && y>=5)
		ans = "It is him";
		else
		ans = "It is someone else";

		return ans;
	}

};
// BEGIN CUT HERE
#include <cstdio>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
namespace moj_harness {
	using std::string;
	using std::vector;
	int run_test_case(int);
	void run_test(int casenum = -1, bool quiet = false) {
		if (casenum != -1) {
			if (run_test_case(casenum) == -1 && !quiet) {
				std::cerr << "Illegal input! Test case " << casenum << " does not exist." << std::endl;
			}
			return;
		}
		
		int correct = 0, total = 0;
		for (int i=0;; ++i) {
			int x = run_test_case(i);
			if (x == -1) {
				if (i >= 100) break;
				continue;
			}
			correct += x;
			++total;
		}
		
		if (total == 0) {
			std::cerr << "No test cases run." << std::endl;
		} else if (correct < total) {
			std::cerr << "Some cases FAILED (passed " << correct << " of " << total << ")." << std::endl;
		} else {
			std::cerr << "All " << total << " tests passed!" << std::endl;
		}
	}
	
	int verify_case(int casenum, const string &expected, const string &received, std::clock_t elapsed) { 
		std::cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			std::sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (expected == received) {
			verdict = "PASSED";
		} else {
			verdict = "FAILED";
		}
		
		std::cerr << verdict;
		if (!info.empty()) {
			std::cerr << " (";
			for (size_t i=0; i<info.size(); ++i) {
				if (i > 0) std::cerr << ", ";
				std::cerr << info[i];
			}
			std::cerr << ")";
		}
		std::cerr << std::endl;
		
		if (verdict == "FAILED") {
			std::cerr << "    Expected: \"" << expected << "\"" << std::endl; 
			std::cerr << "    Received: \"" << received << "\"" << std::endl; 
		}
		
		return verdict == "PASSED";
	}

	int run_test_case(int casenum__) {
		switch (casenum__) {
		case 0: {
			string firstName          = "BENEDICT";
			string lastName           = "CUMBERBATCH";
			string expected__         = "It is him";

			std::clock_t start__      = std::clock();
			string received__         = Sherlock().isItHim(firstName, lastName);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			string firstName          = "BENADRYL";
			string lastName           = "CUCUMBERPATCH";
			string expected__         = "It is him";

			std::clock_t start__      = std::clock();
			string received__         = Sherlock().isItHim(firstName, lastName);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			string firstName          = "HARSHIT";
			string lastName           = "MEHTA";
			string expected__         = "It is someone else";

			std::clock_t start__      = std::clock();
			string received__         = Sherlock().isItHim(firstName, lastName);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			string firstName          = "BATAXXAT";
			string lastName           = "CURMUDGEON";
			string expected__         = "It is him";

			std::clock_t start__      = std::clock();
			string received__         = Sherlock().isItHim(firstName, lastName);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 4: {
			string firstName          = "BENEDI";
			string lastName           = "CUMBER";
			string expected__         = "It is someone else";

			std::clock_t start__      = std::clock();
			string received__         = Sherlock().isItHim(firstName, lastName);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 5: {
			string firstName          = "BAXAXAXY";
			string lastName           = "CENTRIFUGAL";
			string expected__         = "It is someone else";

			std::clock_t start__      = std::clock();
			string received__         = Sherlock().isItHim(firstName, lastName);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 6: {
			string firstName          = "BUMBLESHACK";
			string lastName           = "CRUMPLEHORN";
			string expected__         = "It is him";

			std::clock_t start__      = std::clock();
			string received__         = Sherlock().isItHim(firstName, lastName);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 7: {
			string firstName          = ;
			string lastName           = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = Sherlock().isItHim(firstName, lastName);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 8: {
			string firstName          = ;
			string lastName           = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = Sherlock().isItHim(firstName, lastName);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 9: {
			string firstName          = ;
			string lastName           = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = Sherlock().isItHim(firstName, lastName);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
		default:
			return -1;
		}
	}
}

int main()
{
	moj_harness::run_test();
}
// END CUT HERE
