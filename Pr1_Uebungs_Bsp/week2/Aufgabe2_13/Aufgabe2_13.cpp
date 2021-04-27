#include<iostream>
#include<cmath>
using namespace std;

int main(){

    double a;char abfrage;

    do
    {
    cout<<"Bitte geben sie eine Zahl ein:"<<endl;

    cin>>a;

    int b=static_cast<int>(a);

    int output=0.5<=(a-b)?++b:b;
    
    cout<<"Gerundete Zahl ergibt: "<<output<<endl;



    cout<<"Wollen sie weitere Zahlen eingeben? [j/n]"<<endl;
        cin>>abfrage;
        if(toupper(abfrage)!='J')
            break;
    
    } while (true);


    return 0;
}