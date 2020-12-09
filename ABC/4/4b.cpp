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
    vector<string>board;
    rep(i,4){
        string a="";
        rep(j,4){
            string b;
            cin >> b;
            a+=b;
        }
        reverse(a.begin(),a.end());
        board.push_back(a);
        }
    reverse(board.begin(),board.end());
    rep(i,4){
        for(auto a:board[i]){
            cout << a <<" ";
        }
        cout << endl;
    }


}