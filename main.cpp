#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];           // NELEMENTS nem létezik, N_ELEMENTS a helyes változó
    std::cout << '1-100 ertekek duplazasa' //  egyszeres idézőjel helyett kettős kell ("), hiányzik: << std::endl és a pontosvessző
        for (int i = 0;)                   // hiányos a for ciklus, kell hozzá feltétel (i < N_ELEMENTS) és léptető (i++)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // i helyett i < N_ELEMENTS kellene
    {
        std::cout << "Ertek:" // hiányzik << b[i] << std::endl és a pontosvessző
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                           // nincs a váltoónak érték adva, int atlag = 0;
    for (int i = 0; i < N_ELEMENTS, i++) // vessző helyett pontosvessző kell
    {
        atlag += b[i] // hiányzó pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    // hiányzó 'delete[] b;' - memóriaszivárgás
    return 0;
}
