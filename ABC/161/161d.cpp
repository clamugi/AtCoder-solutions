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


vector<vector<long long>>A(20,vector<long long>(10,0));
int K;

int lunlun(int i,int j){
    for(int b = j-1; b<=j+1; b++){
        if((b == -1) || ( b== 10) )continue;

        if(K-A[i][b] <= 0){
            cout << b ;
            if(i == 0){
                cout << endl;
                exit(0);
            }
            else lunlun(i-1,b);
        }
        else K -=A[i][b];
    }
    return 0;
};

int main(){
    cin >> K;

    for(int i = 0; i<=9; i++){
        A[0][i] =1;
    }

    for(int i = 1; i<20; i++){

        for(int j = 0; j<=9; j++){
            A[i][j] += A[i-1][j];
            if(j != 0)A[i][j] += A[i-1][j-1];
            if(j != 9)A[i][j] += A[i-1][j+1];
        }
    }

    if(K<=9){
        cout << K << endl;
        return 0;
    }

    for(int i = 0; i<20; i++){
        for(int j= 1; j<=9; j++){
            if(K-A[i][j]<=0){
                cout <<j ;
                lunlun(i-1,j);
                return 0;
            }
            else K -=A[i][j];
        }
    }
}