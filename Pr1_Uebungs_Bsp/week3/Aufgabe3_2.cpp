#include<iostream>
#include <cmath>
using namespace std;


int umkehrung(int n){
    string ausgabe{""};
    int i{0};
    while (n)
    {
        ausgabe+=to_string(n%10);
        n/=10;
        i++;
    }       
    
    return stoi(ausgabe);//string to integer

}

int main(){

    int a,b;
    cin>>a;
    a=umkehrung(a);
    string output{""};
    while (a)
    {
        b=a%10;
        switch (b)
        {
        case 0:
            output+="null";
            break;
        case 1:
            output+="eins";
            break;
        case 2:
            output+="zwei";
            break;
        case 3:
            output+="drei";
            break;
        case 4:
            output+="vier";
            break;
        case 5:
            output+="fuenf";
            break;
        case 6:
            output+="sechs";
            break;
        case 7:
            output+="sieben";
            break;
        case 8:
            output+="acht";
            break;
        case 9:
            output+="neun";
            break;
        
        }
        if (a/100!=0)
        {
            output+="-";
        }
        
        a/=10;
    }

    cout<<output<<"."<<endl;
    



}