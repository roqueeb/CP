// https://www.spoj.com/problems/MINSTACK/
#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	stack<pair<int,int>> ans;
	int t; cin >> t;
	while(t--) {
		string s;
		cin >> s;
		if(s=="PUSH") {
			int n; cin >> n;
			if(ans.empty()) ans.push({n,n});
			else {
				if(n<ans.top().second) ans.push({n,n});
				else ans.push({n,ans.top().second});
			}
		}
		else if(s=="MIN") {
			if(ans.empty()) cout << "EMPTY" << "\n";
			else cout << ans.top().second << "\n";
		}
		else if(s=="POP") {
			if(ans.empty()) cout << "EMPTY" << "\n";
			else ans.pop();
		}
	}
	return 0;
}