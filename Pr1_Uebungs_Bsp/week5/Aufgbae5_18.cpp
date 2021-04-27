#include<iostream>
#include<vector>
//(*) Schreiben Sie eine Funktion, die als Parameter eine natürliche Zahl erhält 
//und alle möglichen Permutationen der in der Zahl vorkommenden Ziffern ausgibt. 
//(Sie können davon ausgehen, dass jede Ziffer nur einmal eingegeben wird.)  

using namespace std;
int faktoriell(int length){//Berechnung der Möglichkeiten, der Anordung der Eingabe zb. abc 3!=6

if(length==1){
    return length;
}

return faktoriell(length-1)*length;

}



vector<string> permuation(string input){
    vector<string> strvek;
    string eingabe{input};
    for (int i = 0; i < input.length(); i++)
    {
        for (int b = 0; b < input.length()-1; i++)
        {
           strvek.push_back(eingabe.at(i)+eingabe.erase(i,1));
        }
        
    }
    

    return strvek;
}




int main(){

    string eingabe;
    cin>>eingabe;   

    cout<<faktoriell(eingabe.length())<<endl;
    eingabe.erase(0,1);
    cout<<eingabe+" "<<eingabe.length()<<endl;
    

}