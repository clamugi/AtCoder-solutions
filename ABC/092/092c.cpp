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
    int N;
    cin >> N;

    long long wa = 0;
    vector<int>A(N+2);
    A[0] = 0;
    A[N+1] = 0;
    repr(i,1,N+1){
        int a;
        cin >> a;
        A[i] = a;
        wa += abs(A[i]-A[i-1]);
    }
    wa += abs(A[N]);

    repr(i,1,N+1){
        long long ans = 0;
        ans += abs(A[i-1]-A[i+1]) - (abs(A[i]-A[i-1]) + abs(A[i+1]-A[i]) );
        cout << wa + ans << endl;
    }
}