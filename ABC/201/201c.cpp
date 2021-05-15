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
    string S;
    cin >> S;

    int m = 0;
    rep(i,10){
        if(S[i] == 'o')m++;
    }

  
    long long ans = 0;
    for(int a = 0; a<=9 ; a++){
        if(S[a] == 'x')continue; 
        for(int b = 0; b<=9; b++){
            if(S[b] == 'x')continue; 
            for(int c = 0; c<=9; c++){
                if(S[c] == 'x')continue; 
                for(int d = 0; d<=9; d++){
                    if(S[d] == 'x')continue;
                    set<int> kaz;
                    if(S[a] == 'o')kaz.insert(a);
                    if(S[b] == 'o')kaz.insert(b);
                    if(S[c] == 'o')kaz.insert(c);
                    if(S[d] == 'o')kaz.insert(d);
                              
                    if(m == kaz.size()){
                        ans++;
                    }
                }
            }
        }
    }
    if(m >= 5)cout << 0 << endl;
    else cout << ans << endl;


}
