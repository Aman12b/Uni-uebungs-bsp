#include<iostream>
#include"Geheim.h"
using namespace std;

Geheim::Geheim(const string& information):info{information},seal{false},lockable{false}{}; // offenes Objekt mit entsprechender Information

Geheim::Geheim(const string& information, const string& passwort):info{information},pass{passwort},seal{true}{}; // mit passwort geschütztes Objekt
bool Geheim::lock(const string& passwort){// sperrt ein Objekt mit passwort. Das darf nur funktionieren, wenn das Objekt vorher offen war. Sonst muß diese Funktion false liefern und das Objekt unverändert lassen.

    if (seal==false&&lockable==true){
        if (passwort==pass){seal=true;return true;}}; 

    return false;
} 
bool Geheim::unlock(const string& passwort) // entsperrt ein Objekt, falls dass Passwort korrekt ist. Ansonst wird false zurückgeliefert.
{
    if (seal==true&&lockable==true){
        if (passwort==pass){
            seal=false;return true;
            }
        }

    return false;


}
bool Geheim::checkseal(){
    return seal;
}
string Geheim::getinfo(){
    if (!seal)
    {
        return info;
    }
    
    return "";
}

Geheim Geheim::operator+(Geheim a) //funktioniert nur, wenn die beiden zu verknüpfenden Objekte offen sind. Dann werden die beiden Zeichenketten im Ergebnisobjekt einfach aneinandergehängt. Andernfalls wird eine Exception vom Typ runtime_error geworfen.
{
    
    if ((this->seal==false)&&(a.seal==false))
    {
        Geheim erg(this->getinfo()+a.getinfo());
        return erg;
    }
    throw runtime_error("verknuepfung nicht moeglich");
    
}

int Geheim::len() //Länge der Information. Liefert 0 für gesperrte Objekte
{   if (!seal)
    {
        return info.size();
    }
    return 0;
    
}
