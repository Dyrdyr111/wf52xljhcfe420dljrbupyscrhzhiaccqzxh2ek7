#include <iostream>
#include <iomanip>
#include <string>

int main() {
    int wysokosc;

    std::cout << "Podaj wysokosc: ";
    std::cin >> wysokosc;

    if (wysokosc <= 0) {
        std::cout << "Wysokosc musi byc dodatnia." << std::endl;
        return 1;
    }

    int szerokoscKolumny = static_cast<int>(std::to_string(1LL * wysokosc * wysokosc).length()) + 2;

    for (int wiersz = 1; wiersz <= wysokosc; wiersz++) {
        for (int kolumna = 1; kolumna <= wiersz; kolumna++) {
            std::cout << std::setw(szerokoscKolumny) << 1LL * wiersz * kolumna;
        }
        std::cout << std::endl;
    }
}