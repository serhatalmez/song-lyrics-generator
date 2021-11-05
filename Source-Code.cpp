#include <iostream>
#include <fstream>
#include <math.h>
#include <stdlib.h>


using namespace std;

int SonSatiriBul(){
    int aNumOfLines = 0;
    ifstream aInputFile("list.txt"); 

    string aLineStr;
    while (getline(aInputFile, aLineStr))
    {
        if (!aLineStr.empty())
            aNumOfLines++;
    }

    return aNumOfLines;
}

int main (){
    string text;
    int kacKelime;
    int SatirSayisi{SonSatiriBul()};
    ifstream file("list.txt");

    printf("Kac kelime istedigini yaz (Max. %d): ", SatirSayisi);
    cin >> kacKelime;
	if (kacKelime > SatirSayisi) return 0;
    for (int ii = 0; ii < kacKelime; ii++){
        for (int i = 0; i < rand() % SatirSayisi ; i++)
        {        
            getline(file, text);
        }
        cout << text << " ";
    }
    printf("\n");
	system("pause");
    return 0;
}

