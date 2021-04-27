#include<iostream>
#include<vector>
#include"Lehrveranstaltung.h"
#include"Student.h"
using namespace std;



double Lehrveranstaltung::avpunkte(int num){
    double av{0};
    for (Student s:teilnehmer)
    {
        av+=s.getpunkte(num);
    }
    return av/teilnehmer.size();
}   
 
vector<int> Lehrveranstaltung::studpunkte(int id){

    for (Student s:teilnehmer)
    {
        if (s.getid()==id)
        {
            return s.getallpunkte();
        }
        
    }
    throw runtime_error("Teilnhemer nicht gefunden");
    

}

void Lehrveranstaltung::punkteadden(int id,int punkte){

    for (Student& s:teilnehmer)
    {
        if (s.getid()==id)
        {
            s.addpunkte(punkte);
        }
        
    }

}
int Lehrveranstaltung::getpunktetest(int id,int testnum){

    for(Student s:teilnehmer){
        if (s.getid()==id)
        {
            return s.getpunkte(testnum);
        }   
    }
    throw runtime_error("Id not found!");
}
Student Lehrveranstaltung::searchname(string name){

    for(Student s:teilnehmer)
    if (s.getname()==name)
    {
        return s;
    }
    throw runtime_error("Name nicht gefunden");

}