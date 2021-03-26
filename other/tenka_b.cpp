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
    int A, B, K;
    cin >> A >> B >> K;

    rep(i,K){
        if(i%2 == 0){
            if(A%2 == 1){
                A--;
            }
            A /= 2;
            B += A;
        }
        else {
            if(B%2 == 1){
                B--;
            }
            B /= 2;
            A += B;
        }
    }
    cout <<A << " " << B << endl;
}