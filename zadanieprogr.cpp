#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int licznik=0;
    int pierwsza;
    int druga;
    int licz;
    
    ifstream plik1;
    ofstream wyjscie;
    plik1.open("c:\\liczby.txt");
    wyjscie.open("c:\\wyniki.txt");
    
    while(!plik1.eof()){
        plik1>>licz;
        if(licz<1000){
            pierwsza = druga;
            druga = licz;
            licznik++;
        }
    }
    wyjscie<<"Licznik: "<<licznik<<endl<<"Dwie ostatnie liczby: "<<pierwsza<<", "<<druga;
    
    plik1.close();
    wyjscie.close();
    return 0;
}
