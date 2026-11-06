#include <iostream>
#include <algorithm>
#include <cmath>

int main(){
    const int n = 5;
    int a[n] = {3, 1, 2, 4, 7};
    int wynik = 2 * 1000 + 1;
    int s = 0, lewa = 0, prawa = 0, roznica = 2*1000;
    for(int i = 0; i < n; i++)
        s = s + a[i];

    for(int i = 0; i < n - 1; i++){
        lewa += a[i];
        prawa = s - lewa;
        roznica = std::abs(lewa - prawa);
        wynik = std::min(wynik, roznica);
    };

    std::cout << wynik;


}