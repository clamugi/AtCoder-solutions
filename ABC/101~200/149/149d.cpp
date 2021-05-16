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
    int N, K, R, S, P;
    string T;
    cin >> N >> K >> R >> S >> P >> T;

    long long ans = 0;
    for(int i = 0; i<K; i++){
        for(int j = 0; j<(N+K-1)/K; j++){
            if(i + K*j >=N )continue;

            int point = 0;
            if(T[i + K*j] == 'r'){
                point = P;
            }
            else if(T[i + K*j] == 's'){
                point = R;
            }
            else if(T[i + K*j] == 'p'){
                point = S;
            }

            int a = 1;
            while(T[i + K*j] == T[i + K*(j+1)] && i + K*(j+1) <N){
                a++;
                j++;
            }
            a= (a+1)/2;
            if(a>1)ans += point * a;
            else ans += point;
        }
    }
    cout << ans << endl;

}
