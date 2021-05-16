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
    long long K;
    string S, T;
    cin >> K >> S >> T;

    vector<int>t(10,0);
    vector<int>a(10,0);
    vector<int>number(10,K);
    rep(i,4){
        t[S[i]-'0']++;
        a[T[i]-'0']++;
    }

    
    double nums = 0;
    for(int i = 1; i<=9; i++){
        for(int j = 1; j<=9; j++){
            long long tp=0, ap=0;
            t[i]++; a[j]++;

            bool check = true;
            for(int k = 1; k<=9; k++){
                if(t[k] + a[k] >K)check = false;
                tp += k*pow(10,t[k]);
                ap += k*pow(10,a[k]);
            }
            if(check){
                if(tp>ap){
                    if(i == j){
                        nums += (K-t[i]-a[i]+2)*(K-t[i]-a[i]+1);
                    }
                    else{
                        nums += (K-t[i]-a[i]+1) * (K-t[j]-a[j]+1);
                    }
                }
            }
            t[i]--; a[j]--;
        }
    }
    cout << fixed << setprecision(15) <<  nums / ((9*K-8)*(9*K-9)) << endl;
}