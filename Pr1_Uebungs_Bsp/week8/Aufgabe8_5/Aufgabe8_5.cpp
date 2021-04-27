//Schreiben Sie eine Klasse, deren Objekte jeweils ein Sparschwein repräsentieren. 
//In dieses Sparschwein können nur Münzen im Wert von 1 Cent, 5 Cent und 10 Cent geworfen werden. 
//Implementieren Sie zumindest die Methoden ''leeren'' (Setzt den Inhalt des Sparschweins auf 0), 
//''einwerfen'' (ermöglicht es, Münzen in das Sparschwein einzuwerfen) und ''print'' 
//(gibt den Inhalt des Sparschweins in der Form z.B.: "2*1Cent + 1*5Cent+3*10Cent = 37Cent" aus) Schreiben Sie 

#include<iostream>
#include"Sparschwein.h"
 using namespace std;

 int main(){
     
    Sparschwein a; // erzeugt ein leeres Sparschwein
    Sparschwein b=10; // erzeugt ein Sparschwein mit 10 Eincentmünzen als Inhalt
    Sparschwein c(2,3,4); // erzeugt ein Sparschwein mit 2 Eincent-, 3 Fünfcent- und 4 Zehncentmünzen als Inhalt
    b=15;
    cout<<"Value of a: "<<a.getvalueupdate()<<endl;
    cout<<"Value of b: "<<b.getvalueupdate()<<endl;
    cout<<"Value of c: "<<c.getvalueupdate()<<endl;
    a.print(cout);
    cout<<(b>a?"b groesser a":"a groesser gleich b")<<endl;
    c.print(cout);
    cout<<(b>c?"b groesser c":"c groesser gleich b")<<endl;
    cout<<"Value of b: "<<b.getvalueupdate()<<endl;
    b.einwerfen(2,12,2);
    cout<<"b.einwerfen(2,12,2);"<<endl;
    cout<<"Value of b: "<<b.getvalueupdate()<<endl;
    b.print(cout);
    cout<<(b>c?"b groesser c":"c groesser gleich b")<<endl;
    b.leeren();
    cout<<"b.leeren();"<<endl;
    cout<<(b>c?"b groesser c":"c groesser gleich b")<<endl;
    cout<<(c>a?"c groesser a":"a groesser gleich c")<<endl;
    Sparschwein d=10,e(10);
    cout<<"Value of d: "<<d.getvalueupdate()<<endl;
    cout<<"Value of e: "<<e.getvalueupdate()<<endl;
    cout<<(d==e?"d==e":"d!=e")<<endl;

    cout<<(b==e?"b==e":"b!=e")<<endl;
    int inp;
    cin>>inp;
    return 0;
 }
