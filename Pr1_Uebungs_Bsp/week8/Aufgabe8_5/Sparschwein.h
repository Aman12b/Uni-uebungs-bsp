#ifndef SPARSCHWEIN_H
#define SPARSCHWEIN_H
#include<iostream>
#include<vector>
#include"Muenze.h"

using namespace std;
class Sparschwein{

int currentvalue{0};
vector<Muenze> collector;
public:

Sparschwein(int anz1=0,int anz5=0,int anz10=0);
void valueupdate();
int getvalueupdate();
void leeren();
void print(ostream& os);
void einwerfen(int anz1=0,int anz5=0,int anz10=0);
bool operator<(Sparschwein const& s);
bool operator>(Sparschwein const& s);
bool operator==(Sparschwein const& s);
bool operator!=(Sparschwein const& s);




};
#endif