//Ein Bierversand verkauft Fässer mit jeweils n Liter Fassungsvermögen. Die Kunden können beliebige Mengen in ganzen Litern bestellen. 
//Schreiben Sie ein Programm, das n und eine Bestellmenge einliest und die Anzahl der benötigten Fässer mit einem Ausdruck berechnet. 
//Verwendung einer anderen Anweisung (if, switch, Schleife) oder einer bedingten Auswertung ist nicht erlaubt. 

#include<iostream>
#include<string>

using namespace std;

int main(){

    
    int n{0};
    bool restart{true};
    char abfrage;
    string ausgabe{""};
    do
    {
        cout<<"Bitte geben sie eine Zahl ein"<<endl;
        cin>>n;

        
        
        cout<<"Wollen sie weitere Zahlen eingeben? [j/n]"<<endl;
        cin>>abfrage;
        if(toupper(abfrage)!='J')
            break;
    
    } while (true);



}