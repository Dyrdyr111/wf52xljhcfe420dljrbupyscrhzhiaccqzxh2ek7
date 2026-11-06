#include <iostream>

int main(){

    std::cout << "Podaj liczbe, a program sprawdzi czy jest podzielna prze z 5" << std::endl;
    int liczba;
    std::cin >> liczba;
    if(liczba % 5 == 0){
        std::cout << "Liczba jest podzielna przez 5" << std::endl;
    } else {
        std::cout << "Liczba nie jest podzielna przez 5" << std::endl;
    }

}