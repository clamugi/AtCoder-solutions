#include <bits/stdc++.h> 
using namespace std;

int main(){
    int X;
    cin >> X;

    for(int i = 1; i <= X; i++){
        int dis = i*(i+1)/2;
        if(dis>=X){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}