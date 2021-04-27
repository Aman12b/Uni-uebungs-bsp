#ifndef SAMMLUNG_H
#define SAMMLUNG_H
#include<iostream>
#include<vector>
#include"Album.h"
using namespace std;
class Sammlung{


private:
vector<Album> albums;
public:
void Add(Album alb);
vector<Album> searchInterpret(string name);
vector<Album> searchAlbum(string name);
vector<Album> searchStilrichtung(string stil);
string deleteing(unsigned long del);
string change(int a,string album,string inter,string stil);
vector<Album> getAll();



};



#endif