#include <iostream>

int main() {
    int Cuslo;
    double Suma = 0;
    std::cin >> Cuslo;
    for(int i = 1; i < Cuslo; i++){
        Suma += double(1)/(double(i));
    }
    std::cout << "Suma:" << Suma;
}
