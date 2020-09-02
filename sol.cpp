#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	int n;
	cin >> n;
	pair<int, int> a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i].first >> a[i].second;
	int p;
	cin >> p;
	for(int i=n-1; i>=0; --i)
		if(a[i].first<=p) {
			cout << n-i << "\n";
			return 0;
		}
}

