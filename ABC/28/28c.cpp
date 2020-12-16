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
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    vector<int>num;
    num.push_back(A+B+C);
    num.push_back(A+B+D);
    num.push_back(A+B+E);
    num.push_back(A+C+D);
    num.push_back(A+C+E);
    num.push_back(A+D+E);
    num.push_back(B+C+D);
    num.push_back(B+C+E);
    num.push_back(B+D+E);
    num.push_back(C+D+E);

    sort(num.begin(),num.end(),greater<int>());

    cout << num[2] << endl; 
}