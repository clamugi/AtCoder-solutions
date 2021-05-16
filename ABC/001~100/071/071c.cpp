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

vector<pair<long long, long long> > prime_factorize(long long N){
    vector<pair< long long , long long> > res;
    for(long long a = 2; a* a <= N; a++){
        if(N%a != 0)continue;
        long long ex = 0;
        while(N%a == 0){
            ex++;
            N /= a;
        }
        res.push_back({a,ex});
    }
    if(N!=1)res.push_back({N,1});
    return res;
}

int main(){
    int N;
    cin >> N;

    vector<int>A(N);
    rep(i,N)cin >> A[i];

    sort(A.begin(),A.end(),greater<int>());

    long long a, b;
    int check = 0;
    rep(i,N-1){
        if(A[i] == A[i+1]){
            if(check == 0){
                a = A[i];
                i += 1;
                check = 1;
            }
            else if (check == 1){
                b = A[i];
                check = 2;
                break;
            }
        }
    }
    if(check == 2)cout << a*b << endl;
    else cout << 0 << endl;

}