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

    vector<int>a(N);
    vector<int>b(N);

    rep(i,N){
        cin >> a[i];
        cin >> b[i];
    }

    
    for(int i = 0; i<N;i++){
        for(int j = i+1;j<N; j++ ){
            for(int k = j+1; k<N; k++){
                int dx1, dx2, dy1, dy2;
                dx1 = a[i]-a[j];
                dx2 = a[i]-a[k];
                dy1 = b[i]-b[j];
                dy2 = b[i]-b[k];
                if(dx2*dy1 == dx1*dy2){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;




    
}