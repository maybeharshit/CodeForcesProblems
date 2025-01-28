
/*
There is an array of 5 integers. Initially, you only know a1,a2,a4,a5.
You may set a3 to any positive integer, negative integer, or zero.
The Fibonacciness of the array is the number of integers i (1≤i≤3) such that ai+2=ai+ai+1.
Find the maximum Fibonacciness over all integer values of a3
Input
The first line contains an integer t
(1≤t≤500) — the number of test cases.
The only line of each test case contains four integers a1,a2,a4,a5
(1≤ai≤100).
Output
For each test case, output the maximum Fibonacciness on a new line.
Codeforces Round 998 (Div. 3)
*/
#include<iostream>
using namespace std;

int main(){

	int t;
	int n[4];
	cin>>t;
	int maxno[t];
	for(int i = 0;i<t;i++){
		for(int j = 0;j<4;j++){
			cin>>n[j];
		}
		maxno[i] = 1;
		for(int ans = -200;ans<=200;ans++){
			maxno[i] = max(maxno[i],((ans == (n[0] + n[1])) + (ans == (n[2] - n[1])) + (ans == (n[3] - n[2]))));
		}

	}
	for(int i = 0;i<t;i++){
		cout << maxno[i] << endl;
	}
	

	return 1;
}
