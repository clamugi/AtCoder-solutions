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
    long long K;
    cin >> N >> K;

    vector<long long>A(100010,0);
    rep(i,N){
        int a, b;
        cin >> a >> b;
        A[a] += b;
    }
    for(int i = 0;i<=100010;i++){
        if(K <= A[i]){
            cout << i << endl;
            return 0;
        }
        else K -=A[i];
    }


}