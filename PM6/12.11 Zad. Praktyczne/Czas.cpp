#include <iostream>
// Wykonawcy Antoni Bocheński i Jakub Darkowski 2F
class Czas{
    private:
        int sekundy; // przechowywanie czasu w sekundach
    public:
        Czas(){ // konstruktor domyślny jawny, ustawia czas na 0 gdy uzytkownik nie poda wartosci
            sekundy = 0;
        };
        Czas(int h, int m, int s){ // konstruktor z argumentem ustawiajacy czas
            sekundy = h*3600+m*60+s;
            if(sekundy > 86399)
                sekundy = 86399;
            if(sekundy < 0)
                sekundy = 0;
        };
        void dodaj(int dodajH, int dodajM, int dodajS){
            sekundy = dodajH*3600 + dodajM *60 + dodajS + sekundy;
            if(sekundy > 86399)
                sekundy = 86399;
        };
        void odejmij(int odejmijH, int odejmijM, int odejmijS){
            sekundy = sekundy - (odejmijH*3600 + odejmijM*60 + odejmijS);
            if(sekundy < 0)
                sekundy = 0;
        };
        void mnozenie(int skalar){
            sekundy = sekundy * skalar;
            if(sekundy > 86399)
                sekundy = 86399;
            if(sekundy < 0)
                sekundy = 0;
        };
        void wypisz(){
            int wypiszGodziny = sekundy / 3600;
            int wypiszMinuty = (sekundy % 3600) / 60;
            int wypiszSekundy = sekundy % 60;
            
            if(wypiszGodziny < 10)
                std::cout << 0;
            std::cout << wypiszGodziny << ":";
            if(wypiszMinuty < 10)
                std::cout << 0;
            std::cout << wypiszMinuty << ":";
            if(wypiszSekundy < 10)
                std::cout << 0;
            std::cout << wypiszSekundy << std::endl;
        };
};
int main (){
// Sprawdzenie dzialania konstruktorow
    Czas czas1;
    Czas czas2(30, 12, 50);

czas1.wypisz(); // Oczeniwane: 00:00:00
czas2.wypisz(); // Oczekiwane: 23:59:59


// Sprawdzenie dzialania dodawania
    Czas czas3(10, 25, 13);
    Czas czas4(10, 25, 13);
    czas3.dodaj(14, 34, 15);
    czas4.dodaj(7, 18, 10);

czas3.wypisz(); // Oczekiwane: 23:59:59
czas4.wypisz(); // Oczeniwane: 17:43:23


// Sprawdzanie dzialania odejmowania
    Czas czas5(10, 25, 13);
    Czas czas6(10, 25, 13);
    czas5.odejmij(13, 34, 15);
    czas6.odejmij(7, 18, 10);

czas5.wypisz(); // oczekiwanie 00:00:00
czas6.wypisz(); // oczekiwanie 03:07:03


// sprawdzenie dzialania mnozenia przez skalar
    Czas czas7(10, 25, 13);
    Czas czas8(10, 25, 13);
    czas7.mnozenie(2);
    czas8.mnozenie(5);

czas7.wypisz(); // oczekiwanie 20:50:26
czas8.wypisz(); // oczeniwanie: 23:59:59

return 0;
};   