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
    string S;
    cin >> S;

    for(int i = 2; i< S.size(); i += 2){
        string ab = S.substr(0,S.size()-i);
        string a = ab.substr(0,ab.size()/2);
        string b = ab.substr(ab.size()/2,ab.size());

        if(a == b){
            cout << ab.size() << endl;
            return 0;
        }
    }

}