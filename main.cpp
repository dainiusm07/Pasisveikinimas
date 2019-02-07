#include <iostream>


int main()
{
    std::string vardas,pasisveikinimas;
    int rem_dydis;
    std::cout << "Koks jusu vardas: ";
    std::cin >> vardas;
    std::cout << "Remelio dydis?: ";
    std::cin >> rem_dydis;

    if (vardas.at(vardas.length()-1)=='s')
        pasisveikinimas="Sveikas, " + vardas + "!";
    else
        pasisveikinimas="Sveika, " + vardas + "!";

    int teksto_ilgis = pasisveikinimas.length()+rem_dydis*2+2;


    for (int i=0 ; i<teksto_ilgis ;i++)
        std::cout << "*";
    std::cout << std::endl;

    for (int i=0 ; i<rem_dydis ; i++){
        for (int a=0 ; a<teksto_ilgis ;a++) {
        if (a == 0  or a ==teksto_ilgis-1)
            std::cout << "*";
        else
            std::cout << " ";
        }
        std::cout << std::endl;
    }

    for (int i=0 ; i<rem_dydis+1;i++)
        if (i!=0)
            std::cout << " ";
        else
            std::cout<< "*";
    std::cout << pasisveikinimas;
    for (int i=0 ; i<rem_dydis+1;i++)
        if (i!=rem_dydis)
            std::cout << " ";
        else
            std::cout<< "*";
    std::cout << std::endl;

    for (int i=0 ; i<rem_dydis ; i++){
        for (int a=0 ; a<teksto_ilgis ;a++) {
        if (a == 0  or a ==teksto_ilgis-1)
            std::cout << "*";
        else
            std::cout << " ";
        }
        std::cout << std::endl;
    }

    for (int i=0 ; i<teksto_ilgis ;i++)
        std::cout << "*";
    std::cout << std::endl;



    return 0;
}
