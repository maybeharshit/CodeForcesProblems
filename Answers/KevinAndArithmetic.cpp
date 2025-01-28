/*
Problem - 2061 A 
*/

#include<iostream>
using namespace std;

int main(){

	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		int a[n];
		for(int i = 0;i<n;i++){
			cin >> a[i];
		}
		int eve = 0;
		int odd = 0;
		for(int i = 0;i<n;i++){
			if(a[i] % 2 == 0){
				eve++;
			}
			else{
				odd++;
			}

		}
		if(eve >= 1){
			cout<<odd+1<<endl;
		}
		else{
			cout<<odd-1<<endl;
		}
	}
	exit(0);
	return 1;
}
