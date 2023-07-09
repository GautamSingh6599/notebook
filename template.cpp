/*
 * This is my template for competitive programming*/

// Author: Gautam Singh
// Date: 04 - 07 - 2023


#include "bits/stdc++.h"
using namespace std;

// Macros for data types
typedef long long      ll;
typedef pair<int, int> ii;
typedef vector<ii>     vii;
typedef vector<int>    vi;
#define INF 1000000000      // 1 billion is safer than 2B for Floyd Warshall's

// Memset settings
// memset(memo, -1, sizeof memo) // initialise DP memoisation table with -1
// memset(arr, 0, sizeof arr);


// Shortcuts
// ans = a ? b : c // if (a) ans = b; else ans = c
// ans += val;     // ans = ans + val;
// index = (index + 1) % n; // index++; if (index >= n) index = 0;
// index = (index + n - 1) % n; // index--; if (index < 0) index = n - 1;
// int ans = (int) ((double) d + 0.5); // for rounding to the nearest integer
// ans = min(ans, new_computation); // min/max shortcut 

// Use cout << "\n" for newline
// cout << endl forces a flushing stream


int main(){

#ifdef ONLINE_JUDGE
	
	// For getting input from input.txt file
	freopen("input.txt", "r", stdin);
	
	// For printing output to output.txt file
	freopen("output.txt", "w", stdout);

#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	cout << a << b << c << "\n";
	cout << "Hello World!";

	return 0;

}
