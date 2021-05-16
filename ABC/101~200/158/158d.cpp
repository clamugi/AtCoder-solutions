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
    string S;
    int Q;
    cin >> S >> Q;

    int rev = 0;
    vector<int>T(Q);
    vector<pair<int,string>>FC(Q);

    rep(i,Q){
        cin >> T[i];
        if(T[i] == 2){
            int f;
            string c;
            cin >> f >> c;

            FC[i] = make_pair(f,c);
        }
    }

    vector<string>C(2);
    rep(i,Q){
        if(T[i] == 2){
            if(FC[i].first == 1){
                C[rev%2] += FC[i].second;
            }
            else{
                C[(rev+1)%2] += FC[i].second;
            }
        }
        else{
            rev = (rev+1) % 2;
        }
    }

    reverse(C[0].begin(),C[0].end());
    
    S = C[0]+ S + C[1];
    if(rev)reverse(S.begin(),S.end());
    cout <<  S << endl;
}