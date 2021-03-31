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

    long double A;
    long double B;
 
    cin >> A >> B;
 
    long double C = A*B;
    string S = to_string(C);
 
    for( auto i :S){
        if( i  == '.'){
            cout << endl;
            return 0;
        }
        cout << i;
    }
 
}