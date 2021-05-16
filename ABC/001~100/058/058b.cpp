#include <bits/stdc++.h> 
using namespace std;

int main(){
    string O, E;
    cin >>  O >> E;

    for(int i = 0; i<50; i++){
        if(i<O.length())cout << O[i];
        if(i<E.length())cout << E[i];
    }
    cout << endl;
}