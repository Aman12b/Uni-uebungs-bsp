#include<iostream>
using namespace std;

int main(){


    uint64_t loesung{1};
    unsigned int eingabe;
    do
    {   
        loesung=1;
        cout<<"Bitte geben sie ein Zahl ein, welche >0 ist.\n";
        cin>>eingabe;
    
    
    
    for (size_t i = eingabe; i >= 1; i--)
    {  
        loesung*=i;  
    }
    cout<<"Die Fakultaet fuer "<<eingabe<<" lautet "<<loesung<<endl;

        char abfrage;
        cout<<"Wollen sie weitere Zahlen eingeben? [j/n]"<<endl;
        cin>>abfrage;
        if(toupper(abfrage)!='J')
            break;
    } while (true);

    return 0;
}