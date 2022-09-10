#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[N_ELEMENTS]; // NELEMENTS --> N_ELEMENTS csere megtörtént 
    std::cout << "1-100 ertekek duplazasa" << std::endl; //'' helyett "" lett használva. +sortörés
    for (int i = 1; i <= N_ELEMENTS; i++) // A for ciklus ki lett egészítve.
    {
        b[i] = i * 2;
        std::cout << "Ertek:" << b[i] << std::endl; //pontosvessző pótolva+sortörés
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag=0;//változó inicializálva
    for (int i = 1; i <= N_ELEMENTS; i++) // vessző helyett pontosvessző lett (szintaktika végett), valamint az egyenlőséget is megengedjük.
    {
        atlag += b[i]; // pontosvessző pótlva
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
