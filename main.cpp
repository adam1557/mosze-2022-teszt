#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // NELEMENTS helyet N_ELEMENTS a használt változó név
    std::cout << '1-100 ertekek duplazasa' //'' helyett "" kell mivel ez nem egy karakter, hanem sztring, valamint a végéről hiányzik a pontosvessző. +sortörés szükséges
    for (int i = 0;)// A for ciklus szintaktikailag nem teljes
    {
        b[i] = i * 2; //pontosvessző hiánya. +sortörés szükséges
    }
    for (int i = 0; i; i++) //nem szükséges még egy for ciklus, a kiírás megoldható az előző for ciklusban
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;//"atlag" változó inicializálása hiányzik
    for (int i = 0; i < N_ELEMENTS, i++) // vessző helyett pontosvessző kell a for ciklus belsejében(szintaktika végett), valamint az egyenlőséget is megengedjük.
    {
        atlag += b[i] // pontosvessző hiánya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
