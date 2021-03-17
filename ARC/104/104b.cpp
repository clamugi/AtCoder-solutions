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
    string S;
    cin >> N >> S;

    vector<vector<int>>wa(N+1,vector<int>(4,0));


    for(int i = 1; i<=N; i++){
        if(S[i-1] == 'A')wa[i][0]++;
        else if(S[i-1] == 'T')wa[i][1]++;
        else if(S[i-1] == 'G')wa[i][2]++;
        else if(S[i-1] == 'C')wa[i][3]++;

        rep(j,4){
            wa[i][j] += wa[i-1][j];
        }
    }



    long long ans = 0;
    for(int i = 2; i<=N; i+=2){
        for(int j = i; j<=N; j++){
            if( (wa[j][0]-wa[j-i][0] == wa[j][1]-wa[j-i][1]) && (wa[j][2]-wa[j-i][2] == wa[j][3]-wa[j-i][3]) ){
                ans++;
            }
        }
    }
    cout << ans << endl;
}