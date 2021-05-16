#include <bits/stdc++.h> 
using namespace std;
 
#define repr(i,a,b) for (int i=a; i<b; i++)
#define rep(i,n) for (int i=0; i<  n; i++)
#define PI 3.14159265359  
const long long INF = 1LL << 60;
long long MOD = 1000000007;
long long gcd(long long a, long long b) { return b ? gcd(b, a%b) : a; }
long long lcm (int a, int b){return  (long long) a*b /gcd(a,b);}

int main (){
    string N;
    cin >> N;

    long long sum = 0;
    vector<int>nums(3);
    for(int i =0; i<N.length(); i++){
        int num = N[i] - '0';
        nums[num%3]++;
        sum += num;
    }

    int check = sum%3;
    switch (check)
    {
    case 0:
        cout << 0 << endl;
        break;
    
    case 1:
        if(nums[1]>0 && N.length()>1)cout << 1 << endl;
        else if(nums[2]>=2 && N.length()>2) cout << 2 << endl;
        else cout << -1 << endl;
        break;
    
    case 2:
        if (nums[2]>0 && N.length()>1)cout << 1 << endl;
        else if(nums[1]>=2 && N.length()>2)cout << 2 << endl;
        else cout << -1 << endl;
        break;

    default:
        cout << -1 << endl;
        break;
    }

    return 0;




}

