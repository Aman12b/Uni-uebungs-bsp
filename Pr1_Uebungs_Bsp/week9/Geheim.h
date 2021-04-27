#ifndef GEHEIM_H
#define GEHEIM_H
#include<iostream>
#include<string>
using namespace std;
class Geheim{

string pass,info;
bool seal{false};//true=locked, false=open
bool lockable{true};//pass vorhanden =true,!=false
public:
Geheim(const string& information); // offenes Objekt mit entsprechender Information
Geheim(const string& information, const string& passwort);// mit passwort geschütztes Objekt
bool lock(const string& passwort); // sperrt ein Objekt mit passwort. Das darf nur funktionieren, wenn das Objekt vorher offen war. Sonst muß diese Funktion false liefern und das Objekt unverändert lassen.
bool unlock(const string& passwort); // entsperrt ein Objekt, falls dass Passwort korrekt ist. Ansonst wird false zurückgeliefert.
Geheim operator+(Geheim); //funktioniert nur, wenn die beiden zu verknüpfenden Objekte offen sind. Dann werden die beiden Zeichenketten im Ergebnisobjekt einfach aneinandergehängt. Andernfalls wird eine Exception vom Typ runtime_error geworfen.
int len(); //Länge der Information. Liefert 0 für gesperrte Objekte
string getinfo();
bool checkseal();
friend ostream& operator<<(ostream& o, Geheim& gh); //Gibt die Information aus. Für gesperrte Objekte wird nichts ausgegeben.

};



#endif