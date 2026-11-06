#include <iostream>

int main() {
    int dzielnik;

    std::cout << "Podaj liczbe, przez ktora maja byc podzielne liczby z zakresu 1-500: ";
    std::cin >> dzielnik;

    if (dzielnik == 0) {
        std::cout << "Nie mozna dzielic przez zero." << std::endl;
        return 1;
    }

    std::cout << "Liczby podzielne przez " << dzielnik << ":" << std::endl;
    for (int liczba = 1; liczba <= 500; liczba++) {
        if (liczba % dzielnik == 0) {
            std::cout << liczba << std::endl;
        }
    }
}
