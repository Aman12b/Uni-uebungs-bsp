#ifndef MUENZE_H
#define MUENZE_H
#include<iostream>

using namespace std;
class Muenze{

int anz{0};
int art{0};

public:
Muenze(int anza,int mueart):anz{anza},art{mueart}{};

int getanz(){return anz;};
int getart(){return art;};

};
#endif