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
    int m;
    cin >> m;

    int ans = 0;
    if(m<100)ans = 0;
    else if(m<=5000)ans = m/100;
    else if(m<=30000)ans = m/1000 + 50;
    else if(m<=70000)ans = (m/1000 - 30)/5 + 80;
    else ans = 89;


    printf("%02d\n",ans);


}