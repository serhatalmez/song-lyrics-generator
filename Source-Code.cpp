#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>
	

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
    srand((unsigned int)time(NULL));
    int kacKelime;
    int SatirSayisi{SonSatiriBul()};
    ifstream file("list.txt");

    cout << "Kac kelime istedigini yaz (Max. 7): " << "";
    cin >> kacKelime;
	if (kacKelime > SatirSayisi || kacKelime > 7) return 0;
    for (int ii = 0; ii < kacKelime; ii++){
        for (int i = 0; i < rand() % SatirSayisi ; i++)
        {        
            getline(file, text);
        }
        cout << text << " ";
    }
    printf("\n");
    return 0;
}

