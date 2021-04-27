#include<iostream>
#include"Student.h"
#include"Lehrveranstaltung.h"
using namespace std;


ostream& operator<<(ostream& o,Student& stu){
    
    o<<"Id: "<<stu.getid()<<" Name: "<<stu.getname()<<" Martikelnummer: "<<stu.getmartikelnummer();
    int i{0};
    for (int pk:stu.getallpunkte())
    {
        o<< (i==0?"\n":"");
        o<<" Test"<<i<<" Punkte: "<<pk<<"\n";
    }o<<"\n";
    return o;

}
int main(){

    Lehrveranstaltung mg1("MG1");
    Student s1("Aman",11234134,0);
    Student s2("Max",11234657,1);
    Student s3("Muster",1123594,2);
    Student s4("Felix",3467443,3);
    mg1.addstudent(s1);mg1.punkteadden(0,10);
    mg1.addstudent(s2);mg1.punkteadden(1,8);
    mg1.addstudent(s3);mg1.punkteadden(2,12);
    mg1.addstudent(s4);mg1.punkteadden(3,5);

    for(Student s:mg1.erzieltepunkte()){
        cout<<s;
    };
    cout<<"Av Test 0 points: "<<mg1.avpunkte(0)<<endl;
    cout<<"Get Test 0 points from Person with id 1"<<endl;
    cout<<mg1.getpunktetest(1,0)<<endl;
    cout<<"Search Person with name Felix"<<endl;
    Student st=mg1.searchname("Felix");
    cout<<st;
    int a;
    cin>>a;
}