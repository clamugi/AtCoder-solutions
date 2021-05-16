#include <bits/stdc++.h>
 
using namespace std;
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
 
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
 
const long long INF = 1LL << 60;
#define PI 3.14159265359 
bool dp[100100];
 
 
int main () {
    int N, M;
    cin >> N >> M;

    vector<int>A(N);
    int sou =0;
    rep(i,N){
        cin >> A[i];
        sou += A[i];
    }

    sort(A.begin(),A.end(),greater<>());

    if(A[M-1] >= (float)sou/(4*M)){
        cout << "Yes" << endl;
    }else cout <<"No" << endl;

}