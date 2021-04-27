#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<string> sorting1(vector<string> input){
    //stabiles Sortierverfahren
    int change{0},i{1};
    string pointer;
    string first,next;
    bool run{true};
    while(run)
    {
        first=input.at(i-1).substr(input.at(i-1).find(' ')+1);
        next=input.at(i).substr(input.at(i).find(' ')+1);
        if (first.at(0)>next.at(0))
        {   
            swap(input.at(i),input.at(i-1));
            change++;
        }
        else
        {
            if (first.at(0)==next.at(0)&&first!=next)
            {   
                int a{1};
                int length1=first.length();
                int length2=next.length();
                while(a<length1&&a<length2)
                {
                    if (first.at(a)>next.at(a))
                     {
                     swap(input.at(i),input.at(i-1));
                     change++;
                     break;
                     }
                     if (first.at(a)<next.at(a))
                     {
                        break;
                     }
                a++;
                }                
           }           
        }
        
        i++;
        if(i>=static_cast<int>(input.size())){

            if (0==change)
            {
                break;
            }
            i=1;
            change=0;
        }
    }return input;
}


vector<string> sorting2(vector<string> input){
//Selection sort verfahren
   size_t listlength=input.size();
   string tocheck,zeiger;
   int zeigermin{0};
   for (size_t i = 0; i < listlength; i++)
   {
       tocheck=input.at(i).substr(input.at(i).find(' ')+1);

       for (size_t a = i+1; a < listlength; a++)
       {
           
           zeiger=input.at(a).substr(input.at(a).find(' ')+1);
           unsigned long count{0};
           do
           {
               if (zeiger.at(count)<tocheck.at(count))
               {
                   zeigermin=a;
                   tocheck=zeiger;
                   break;
               }
               if (zeiger.at(count)>tocheck.at(count))
               {
                   break;
               }
               count++;
               
           } while (count<zeiger.size()&&count<tocheck.size());    
           
       }
       if (zeigermin!=0)
       {
           swap(input.at(i),input.at(zeigermin));
           zeigermin=0;
       }  
   }
   return input;
}

int main(){
    string c,a;
    vector<string> namenliste{"Franz Mueller", "Hermann Maier","Lieschen Mueller"};
   
   // while (cin>>c)
    //{
      //  cin>>a;
       // namenliste.push_back(a);
    //}
    for(string a:sorting1(namenliste)){

       cout<<a<<", "<<endl;
    }
    cout<<"------------------------------------"<<endl;
    for(string a:sorting2(namenliste)){

       cout<<a<<", "<<endl;
    }

}
