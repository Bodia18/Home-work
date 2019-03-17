#include <iostream>

int main() {
    int Panist,Kratnist,n = 5;
    int A[n];
    for(int i = 0; i < n; i++){
        std::cin >> A[i];
    }
    for(int i = 0; i < n; i++){
        if(A[i] % 2 == 0){
            Panist++;
        }
        if(A[i] % 3 == 0){
            Kratnist++;
        }
    }
    std::cout << "Parnist:" << Panist << std::endl;
    std::cout << "Kratnist:" << Kratnist << std::endl;

}