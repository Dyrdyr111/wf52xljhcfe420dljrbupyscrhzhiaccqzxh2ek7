#include <iostream>

int main() {
    char wariant;

    std::cout << "Wybierz warunek zakonczenia:" << std::endl;
    std::cout << "a) suma liczb przekroczy 100" << std::endl;
    std::cout << "b) zostanie podanych wiecej niz 10 liczb ujemnych" << std::endl;
    std::cin >> wariant;

    if (wariant != 'a' && wariant != 'b') {
        std::cout << "Nieprawidlowy wybor." << std::endl;
        return 1;
    }

    long long suma = 0;
    int liczbaUjemnych = 0;
    int liczba;

    while (true) {
        std::cout << "Podaj liczbe: ";
        std::cin >> liczba;

        suma += liczba;
        if (liczba < 0) {
            liczbaUjemnych++;
        }

        if (wariant == 'a' && suma > 100) {
            std::cout << "Suma przekroczyla 100." << std::endl;
            break;
        }

        if (wariant == 'b' && liczbaUjemnych > 10) {
            std::cout << "Podano wiecej niz 10 liczb ujemnych." << std::endl;
            break;
        }
    }
}
