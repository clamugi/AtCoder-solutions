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

struct kyuuryo{
    int hi;
    int low;
    int zyosi;
    int bukasu;
    int kyu;
};


int main(){
    int N;
    cin >> N;

    vector<kyuuryo>B(N,{0,10,0,0,0});
    repr(i,1,N){
        cin >> B[i].zyosi;
        B[i].zyosi--;
    }


    for(int i = N-1; i>0; i--){
        auto zyousi =  B[B[i].zyosi];
        if(B[i].bukasu == 0){
            B[i].kyu = 1;
        }
        else if(B[i].bukasu == 1){
            B[i].kyu = 2*B[i].hi + 1;
        }
        else{
            B[i].kyu = B[i].hi +B[i].low + 1;
        }

        B[B[i].zyosi].bukasu +=1;

        B[B[i].zyosi].hi = max(B[B[i].zyosi].hi,B[i].kyu);
        B[B[i].zyosi].low = min(B[B[i].zyosi].low, B[i].kyu);
    }

    if(B[0].bukasu == 1)cout << 2*B[0].hi + 1 << endl;
    else cout << B[0].hi + B[0].low + 1 << endl;


}
