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
    string N;
    cin >> N;

    bool ans = false;
    for(int i = 0; i<=10; i++){
        string Nr = N;
        reverse(Nr.begin(),Nr.end());

        bool check = true;
        for(int j = 0; j<N.length()/2; j++){
            if(N[j] != Nr[j])check = false;
        }
        if(check)ans = true;
        
        N = "0" + N;
    }
    if(ans)cout << "Yes" << endl;
    else cout << "No" << endl;
}