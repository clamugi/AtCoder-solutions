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
    long long N;
    cin >> N;

    long long ans = 0;
    for(long long i = 1; i<10e6; i++){
        int b = log10(i)+1;
        long long a = i*pow(10,b)+i;
        if(a<=N)ans++; 

    }
    cout << ans << endl;
}