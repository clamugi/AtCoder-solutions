#include <bits/stdc++.h>

using namespace std;
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<n; i++)


int main() {
    int A,B ;
    cin >> A >> B;

    string S;
    cin >> S;
    if (! (count(S.begin(),S.end(), '-') == 1) || !(S[A] ==  '-') ){
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;

}