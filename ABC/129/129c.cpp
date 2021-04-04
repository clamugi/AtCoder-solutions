#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}
double radian(double degree){return degree * PI /180.0;}
double degree(double radian){return radian * 180.0/PI;}

int main(){
    int N, M;
    cin >> N >> M;

    vector<long long>A(100010,0);

    rep(i,M){
        int a;
        cin >> a;

        A[a] = -1;
    }

    A[0]=1;
    for(long long i = 0; i<=N; i++){
        if(A[i] == -1)continue;
        
        if(A[i+2] != -1)A[i+2] = (A[i+2]+A[i])%MOD;
        if(A[i+1] != -1)A[i+1] = (A[i+1]+A[i])%MOD;
    }

    cout << A[N] << endl;
}