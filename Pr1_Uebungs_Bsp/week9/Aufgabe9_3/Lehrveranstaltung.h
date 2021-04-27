#ifndef LEHRVERANSTALTUNG_H
#define LEHRVERANSTALTUNG_H

#include<iostream>
#include<vector>
#include"Student.h"
using namespace std;
class Lehrveranstaltung{

string name;
vector<Student> teilnehmer;

public:
Lehrveranstaltung(string lv):name{lv}{};
void addstudent(Student stu){teilnehmer.push_back(stu);};
double avpunkte(int num);  
int getpunktetest(int id,int testnum); 
vector<Student> erzieltepunkte(){return teilnehmer;};  
vector<int> studpunkte(int id);
void punkteadden(int id,int punkte);
Student searchname(string name);
};

#endif