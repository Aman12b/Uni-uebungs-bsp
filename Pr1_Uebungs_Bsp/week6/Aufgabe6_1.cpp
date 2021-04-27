#include<iostream>
#include<vector>
#include <limits>
using namespace std;

vector<double> sort(vector<vector<int>> vk){

    int max{0};
    double mittelwertadd{0};
    vector<int> all;
    vector<int> sorting;
    vector<vector<int>> sorted;
    vector<double> mittelwert;
    for(auto i: vk){
        for(auto a:i){
            all.push_back(a);
            if (a>max)
            {
                max=a;
            }
            
        }
    }
      
    for(int i=10;i<max*10;i*=10){
        for(int value:all){
            if (value<i&&value>=(i/10))
            {
               sorting.push_back(value);  
               mittelwertadd+=value;             
            }   
        }
        if (!sorting.empty())
        {
            sorted.push_back(sorting);
            mittelwert.push_back(mittelwertadd/sorting.size());
            mittelwertadd=0;
            sorting.clear();
        }
       
    }
    return mittelwert;
}



int main(){
    int input;char addlist;
    vector<vector<int>> vk;
    vector<int> loader;
    bool loop{true},restart{true};
    string repeat;
    //filling
    cout<<"Um die Testreihe zu beenden, geben sie bitte einen Buchstaben ein!"<<endl;
  
    do{
     while (loop)
    {
       while (!cin.fail())
        {
            cin>>input;
            loader.push_back(input);
        }
        cout<<" Liste wurde erstellt."<<endl;
        vk.push_back(loader);
        loader.clear();
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        do
        {   
            cout<<"Wollen sie eine weitere Liste hinzufuegen [j/n]"<<endl;
            cin>>addlist;
        } while (toupper(addlist)!='J'&&toupper(addlist)!='N');
        toupper(addlist)=='N'?loop=false:loop=true;
    
    }

    cout<<"Returnwert: {";
    for(auto a:sort(vk)){

        cout<<a<<", ";

    }
    cout<<"}"<<endl;


    cout<<"Wollen sie weitere Zahlen eingaben? [j/n]"<<endl;
    cin>>repeat;
    restart=toupper(repeat[0])=='J'?true:false;
} while (restart);
}