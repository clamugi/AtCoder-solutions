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
    int K;
    cin >> N >> K;

    rep(i,K){
        string g1 = N, g2= N;
        sort(g1.begin(),g1.end(),greater<int>());
        sort(g2.begin(),g2.end());


        int f = stoi(g1)-stoi(g2);
        if(f == 0){
            cout << 0 << endl;
            return 0;
        }

        N = "";
        while(f>0){
            N += '0' + f%10;
            f/=10;
        }

    }

    if(K != 0)reverse(N.begin(),N.end());
    cout << N << endl;

}