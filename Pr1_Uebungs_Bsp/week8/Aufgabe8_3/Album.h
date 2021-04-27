#ifndef ALBUM_H
#define ALBUM_H
#include<iostream>

using namespace std;
//(+) Ein befreundeter, fanatischer CD-Sammler hat Sie gebeten, ihm ein einfaches Programm zur Verwaltung 
//seiner Sammlung zu schreiben. Er wünscht sich folgende Funktionen: Für jedes Album sollen Interpret, 
//Name und Stilrichtung speicherbar sein. Eingabe, Ändern und Löschen von Eintragungen soll möglich sein. 
//Eine Suche soll entweder nach Interpret, nach Albumname oder Stilrichtung vorgenommen werden können und 
//eine Liste aller jeweils passenden CDs liefern. Album, Sammlung 

class Album{
private:
string Interpret,Name,Stilrichtung;
public:
Album(string inter,string name,string stil);
string getInterpret();
string getName();
string getStilrichtung();
void setInterpret(string inter);
void setName(string name);
void setStilrichtung(string stil);

};


#endif