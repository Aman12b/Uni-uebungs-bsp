#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<vector>

using namespace std;
class Student{

string studentname;
int martikelnummer;
int id;
vector<int> testpunkte;
public:
Student(string name,int martnum,int identific):studentname{name},martikelnummer{martnum},id{identific}{};
string getname(){return studentname;};
int getid(){return id;};
int getmartikelnummer(){return martikelnummer;};
int getpunkte(int testnummer){return testpunkte.at(testnummer);};
vector<int> getallpunkte(){return testpunkte;};
friend ostream& operator<<(ostream& o,Student& stu);
void addpunkte(int punkte){testpunkte.push_back(punkte);};
};


#endif