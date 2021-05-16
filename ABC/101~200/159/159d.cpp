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
    vector<long long>ball(N+1);
    vector<int>A(N);
    rep(i,N){
        cin >> A[i];
        ball[A[i]]++;
    }
    long long sums = 0;
    rep(i,N+1){
        sums +=  ball[i] * (ball[i]-1) / 2;
    }


    rep(i,N){
        long long before =  ball[A[i]] * (ball[A[i]]-1) / 2;
        long long after =  (ball[A[i]]-1) * (ball[A[i]]-2) / 2 ;

        cout << sums + after - before << endl;
    }



}