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
    int N,Q;
    cin >> N;
    vector<int>A(100010,0);
    long long sum = 0;
    rep(i,N){
        int a;
        cin >> a;
        A[a]++;
        sum += a;
    }

    cin >> Q;
    rep(i,Q){
        int b, c;
        cin >> b >> c;

        sum +=  (c-b)*A[b];
        A[c] += A[b];
        A[b] = 0;  
        cout <<sum << endl;
    }






}