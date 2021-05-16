#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}

int main(){
    int N, M;
    cin >> N >> M;

    vector<string>A(N);
    vector<string>B(M);
    rep(i,N)cin >> A[i];
    rep(i,M)cin >> B[i];

    bool ans = false;

    for(int i = 0; i<=N-M; i++){
        for(int j = 0; j<=N-M; j++){

            bool check = true;
            for(int by = 0; by<M; by++){
                for(int bx = 0; bx<M; bx++){
                    if(A[i+by][j+bx] != B[by][bx] )check = false;
                }
            }
            if(check) ans = true;
        }
    }

    if(ans)cout << "Yes" << endl;
    else cout << "No" << endl;
}