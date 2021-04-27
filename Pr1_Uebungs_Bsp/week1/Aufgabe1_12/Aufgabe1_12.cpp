#include<iostream>

using namespace std;

int main()
{
    int lotto{6},moeglickieten{45};
    long double wsl{1};
    
    cout<<wsl<<endl;
    for (size_t i = 0; i < 6; i++)
    {
        
        wsl*=(double)lotto--/moeglickieten--;
        
    }
    cout<<"Die Wahrscheinlichkeit einen Lotto 6er zu erzielen betraegt "<<wsl<<"%."<<endl;


    return 0;
}
