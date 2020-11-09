#include<iostream>
#include<string>

int main(){
    std::string A, B, C;
    std::cin >>A >> B >> C;

    if(A[A.length()-1] == B[0] && B[B.length()-1] == C[0])std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
}