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
    int N;
    cin >> N;

    vector<long long>T(N+1,0);
    vector<long long>F(N+1,0);

    T[0] = 1;
    F[0] = 1;


    for(int i =1; i<=N; i++){
        string s;
        cin >> s;


        if(s == "AND"){
            T[i] = T[i-1];
            F[i] = (long long) pow(2,i+1)-T[i];
        }
        else if(s == "OR"){
            T[i] = T[i-1]*2+F[i-1];
            F[i] = (long long) pow(2,i+1)-T[i];
        }
    }

    cout << T[N] << endl;

    
}