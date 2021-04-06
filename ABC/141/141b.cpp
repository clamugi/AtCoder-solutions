#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<n; i++)


int main() {
	string S;
	cin >> S;

	bool hantei = true;
	int len = S.length();
	rep(i,len){
		if (i % 2 == 0) {
			if (S[i] == 'L') {
				hantei = false;
			}
		}
		else {
			if (S[i] == 'R') {
				hantei = false;
			}
		}
	}
	if (hantei) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}



}