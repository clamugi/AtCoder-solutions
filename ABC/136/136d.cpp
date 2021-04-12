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

    vector<int>ans(S.length(),0);
    for(int i = 0; i<S.length();){
        int Rs = 0;
        int Ls = 0;

        while(S[i] == 'R'){
            Rs++;
            i++;
        }
        ans[i] += Rs/2;
        ans[i-1] += Rs/2;
        if(Rs %2 == 1)ans[i-1]++;

        int check = i;
        while(S[i] == 'L'){
            Ls ++;
            i ++;
        }
        ans[check] += Ls/2;
        ans[check-1] += Ls/2;
        if(Ls%2 == 1)ans[check]++;       
    }

    for(int i = 0; i<S.length(); i++){
        if(i != 0)cout << " ";
        cout << ans[i];
    }
    cout << endl;


}
