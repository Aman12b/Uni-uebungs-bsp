#include<iostream>
using namespace std;



int main(){

    double a;
    unsigned int b{0};
    cin>>a;
    string input{to_string(a)};
    string output{""};
    while (b<input.length())
    {
        
        switch (input[b++])
        {
        case '0':
            output+="null";
            break;
        case '1':
            output+="eins";
            break;
        case '2':
            output+="zwei";
            break;
        case '3':
            output+="drei";
            break;
        case '4':
            output+="vier";
            break;
        case '5':
            output+="fuenf";
            break;
        case '6':
            output+="sechs";
            break;
        case '7':
            output+="sieben";
            break;
        case '8':
            output+="acht";
            break;
        case '9':
            output+="neun";
            break;
        case '.':
            output+="komma";
        }
    
        
        if (input[b]=='0'&&input[b+1]=='0'&&input[b+2]=='0')
        {
            break;
        }
        output+=input.length()==b?"":"-";
        
    }

    cout<<output<<"."<<endl;
    



}