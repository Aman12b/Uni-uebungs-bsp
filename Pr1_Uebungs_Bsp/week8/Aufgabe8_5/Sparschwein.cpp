#include<iostream>
#include<vector>
#include<string>
#include"Sparschwein.h"
#include"Muenze.h"


using namespace std;

Sparschwein::Sparschwein(int anz1,int anz5,int anz10){
    einwerfen(anz1,anz5,anz10);
}
void Sparschwein::leeren(){
    collector.clear();
    valueupdate();
}
void Sparschwein::print(ostream& os){
    string output;
    for (unsigned long i = 0; i < collector.size(); i++)
    {
       output+=to_string(collector.at(i).getanz())+"*"+to_string(collector.at(i).getart());
       output+=(i!=collector.size()-1?" + ":" = ");
    }
    output+= to_string(currentvalue)+"Cent\n";
    os<<output;
}
void Sparschwein::einwerfen(int anz1,int anz5,int anz10){

    if(anz1!=0){
        Muenze m1(anz1,1);
        collector.push_back(m1);
    }  
    if(anz5!=0){
        Muenze m2(anz5,5);
        collector.push_back(m2);
    } 
    if(anz10!=0){
        Muenze m3(anz10,10);
        collector.push_back(m3);
    }  
    valueupdate();


}
void Sparschwein::valueupdate(){
    int money{0};
    for(Muenze m:collector){
        money+=(m.getanz()*m.getart());
    }
    currentvalue=money;
}
int Sparschwein::getvalueupdate(){
    return currentvalue;
}
bool Sparschwein::operator<(Sparschwein const& s){
    return this->currentvalue<s.currentvalue;
}
bool Sparschwein::operator>(Sparschwein const& s){
    return this->currentvalue>s.currentvalue;
}
bool Sparschwein::operator==(Sparschwein const& s){
    return this->currentvalue==s.currentvalue;
}
bool Sparschwein::operator!=(Sparschwein const& s){
    return this->currentvalue!=s.currentvalue;
}
