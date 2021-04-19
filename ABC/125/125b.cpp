#include <bits/stdc++.h>
 
using namespace std;
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i< (int) n; i++)
 
 
int main() {
    int  N;
    cin >> N;


    vector <int>V(N);
    vector <int>C(N);

    rep(i,N) cin >> V[i];
    rep(i,N) cin >> C[i];


    vector <int> kati(N);
    rep(i,N) kati[i] = V[i]-C[i];

    int ans =0;
    rep(i,N){
        if(  kati[i] > 0){
            ans += kati[i];
        }
    }
    cout << ans << endl;


    }


    
