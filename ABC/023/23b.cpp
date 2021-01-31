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
    int n;
    string s;
    cin >> n >> s;

    string ans = "b";
    repr(i,1,55){
        if(ans == s){
            cout << i-1 << endl;
            return 0;
        }
        if(i%3 == 1){
            ans = "a"+ans+"c";
        }
        else if(i%3 == 2){
            ans = "c"+ans +"a";
        }
        else {
            ans = "b" +ans + "b";
        }
    }
    cout << -1 << endl;

}