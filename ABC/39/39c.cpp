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

    int a=0;
    rep(i,S.length()){
        if(S[i] == 'W' && S[i+1] == 'W' && S[i+7] == 'W'){
            a = i;
            break;
        }
    }
    string ans;
    switch (a)
    {
    case 0:
        ans = "Mi";
        break;
    case 2:
        ans = "Re";
        break;
    case 4:
        ans = "Do";
        break;
    case 5:
        ans = "Si";
        break;
    case 7:
        ans = "La";
        break;
    case 9:
        ans = "So";
        break;
    case 11:
        ans = "Fa";
        break;
    default:
        break;
    }

    cout << ans << endl;


}