#include<iostream>
#include"Album.h"

using namespace std;

Album::Album(string inter,string name,string stil):Interpret{inter},Name{name},Stilrichtung{stil}{};


string Album::getInterpret(){

    
    return Interpret;
}
string Album::getName(){

    return Name;
}
string Album::getStilrichtung(){

    return Stilrichtung;
}

void Album::setInterpret(string inter){
    this->Interpret=inter;
}
void Album::setName(string name){
    this->Name=name;
}
void Album::setStilrichtung(string stil){
    this->Stilrichtung=stil;
}