// This is my template for competitive programming

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

// Compilation flags
// g++ -std=c++17 -Wall -Wextra -O2 filename.cpp -o filename

// For I/O:
// Use the cout and the cin stream
// getline can get full lines with whitespaces 
//
// string s;
// getline(cin, s);
//
// If the imount of input is unknown use:
//
// while(cin >> x){
//	//code
// }




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


// Numbers
// ints : size -> (-2^(31) to 2^(31)) = (-2*10^9 to -2*10^9)
// int x;
//
// long long : size -> (-2^(32) to 2^(32)) = (-9*10^18 to 9*10^18)
// long long x;
//
// int a = 12346789;
// long long x = a * a LL;
// long long x = (long long) a * a; 
//
// 128 bit -> __int128_t
//


// Modulo
// (a + b) % m = (a % m + b % m) % m 
// (a - b) % m = (a % m - b % m) % m
// (a * b) % m = (a % m * b % m) % m
//
// rem -> 0 to m - 1
// so add m
// x %= m;
// x = (x < 0) ? (x + m) : x; 


// Floating - point
// 64 bit double
// 80 bit long double (g++)
//
// for precision use printf 
// printf("%.9f\n", x); 
// to compare floats check if the difference between them is less than any \epsilon.





// Typedefs & Macros
// typedefs
// =======
// typedef long long ll;
// typedef vector<int> vi;
//
// macros
// =======
// #define F first 
// #define MP make_pair;




// Sums, Sets, logic, functions & logarithms 
//
// 1 + 2 + ... + n = n * (n + 1) / 2
// 1^2 + 2^2 + 3^2 + ..... + n^2 = n * (n + 1) * (2 * n + 1) / 6
// a + ak + ak^2 + .... + b = (b * k - a) / (k - 1)
// 1 + (1 / 2) + (1 / 3) + ..... + (1 / n) < log_2(n) + 1 (Harmonic Sums)
//
// Sets 
// === 
// intersection, union, difference, complement, subsets, functions
//
// Logic
// =====
// true/false, negation, conjunction, disjunction, implication, equivalence(iff)
// predicate -> statement
// quantifier -> for all, there exists
//
//
// Functions
// ========
// floor -> unless integer, the integer just before
// ceil -> unless integer, the integer just after
// factorial
// max, min
// fibonnaci -> f(n) = f(n - 1) + f(n - 2)
// Binet's formula = ((1 + 5^(1 / 2))^n - (1 - 5^(1 / 2))^n) / (2^n * 5)


// Logarithms
// log_a(b) = c => a^c = b
// log_a(bc) = log_a(b) + log_a(c)
// log_a(b / c) = log_a(b) - log_a(c)
// log_a(b^n) = n * log_a(b)
// log_a(b) = log_c(b) + log_c(a)
// e = 2.71828, no of digits of a number in base b is floor(log_b(x) + 1)
