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
    string S;
    cin >> N >> S;

    int fox = 0;
    string t;

    for(int i = 0; i<N; i++){
        if (S[i] == 'f' || S[i] == 'o' || S[i] == 'x'){
            t += S[i];
        }
        else t = "";

        while(t.length()>=3 && t[t.length()-3] == 'f' && t[t.length()-2] == 'o' && t[t.length()-1] == 'x' ){
            fox += 1;
            t = t.substr(0,t.length()-3);
        }
    }

    cout << N - 3*fox << endl;


}