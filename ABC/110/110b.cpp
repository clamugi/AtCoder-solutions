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
    int N, M, X, Y;
    cin >> N >> M >> X >> Y;

    vector<int>x(N);
    vector<int>y(M);
    rep(i,N)cin >>x[i];
    rep(i,M)cin >>y[i];
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    bool check = false;
    for(int i = max(x[N-1]+1,X+1); i<= min(y[0],Y); i++){
        if(X < i && i<= Y)check = true;
    }

    if(check)cout << "No War" << endl;
    else cout <<"War" << endl;


}