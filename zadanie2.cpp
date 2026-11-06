#include <iostream>

int main(){

    std::cout << "Podaj liczbe calkowita a program sprawdzi czy jest w zakresie <17, 27)" << std::endl;
    int liczba;
    std::cin >> liczba;
    if(liczba >= 17 && liczba < 27){
        std::cout << "Liczba jest w zakresie <17, 27)" << std::endl;
    } else {
        std::cout << "Liczba nie jest w zakresie <17, 27)" << std::endl;
    }
}