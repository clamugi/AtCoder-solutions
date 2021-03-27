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
    double x0, y0, xn , yn;
    cin >> N >> x0 >> y0 >> xn >> yn;

    double rx = (x0+xn)/2;
    double ry = (y0+yn)/2;

    double x1, y1;
    double a = (double)PI*2/N;

    x1 = (x0-rx)*cos(a) - (y0-ry)*sin(a);
    y1 = (x0-rx)*sin(a) + (y0-ry)*cos(a);

    x1 += rx;
    y1 += ry;

    cout <<fixed << setprecision(10) << x1 << " " << y1 << endl;
}