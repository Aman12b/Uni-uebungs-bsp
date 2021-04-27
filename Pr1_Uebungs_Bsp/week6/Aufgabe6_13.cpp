#include<iostream>  
#include<vector>
using namespace std;
//(*) Schreiben Sie eine einfache Version des Tic-Tac-Toe Spiels. Dabei spielt der Benutzer /
//die Benutzerin gegen den Computer. Nach jedem Zug soll der aktuelle Zustand des Spielbretts am Bildschirm ausgegeben werden.  
//(Der Computer muss sich dabei nicht besonders schlau anstellen. Es genügt, wenn er einfach irgendeines 
//der freien Felder besetzt, sobald er am Zug ist. Wenn die Partie zu Ende ist, soll "You win" bzw. 
//"You lose" ausgegeben werden. 

void show(char a[3][3]){


    cout<<"  "<<a[0][0]<<" | "<<a[0][1]<<" | "<<a[0][2]<<endl;
    cout<<"--------------"<<endl;
    cout<<"  "<<a[1][0]<<" | "<<a[1][1]<<" | "<<a[1][2]<<endl;
    cout<<"--------------"<<endl;
    cout<<"  "<<a[2][0]<<" | "<<a[2][1]<<" | "<<a[2][2]<<endl;
    cout<<"--------------"<<endl;

}

int check(const char a[3][3]){//return 1=p1 gewinnt,2=p2 gewinnt,3=fortsetzen,0=kein gewinner

    int p1{0},p2{0},p11{0},p22{0},p111{0},p222{0},empty{0},diagonal{2};
    for (int i = 0; i < 3; i++)//check x achse
    {
        if (a[i][i]=='X')
        {
            if (++p11==3)
            {
               return 1;
            }
        }else{
        if (a[i][i]=='O')
        {
            if (++p22==3)
            {
               return 2;
            }   
        }
        }

        if (a[i][diagonal--]=='X')
        {
            if (++p111==3)
            {
               return 1;
            }
        }else{
        if (a[i][diagonal--]=='O')
        {
            if (++p222==3)
            {
               return 2;
            }   
        }
        }

        
        for (int b = 0; b < 3; b++)
        {
            if(a[i][b]==' '){//checken ob es noch freie Positionen im Spielfeld vorhanden sind
                empty++;
            }
           switch (a[i][b])
           {
           case 'X':
               p1++;
               break;
           
           case 'O':
                p2++;
               break;
           }

        }
        if(p1==3){
               return 1;
           }
           if(p2==3){
               return 2;
           }
           p1=p2=0;
        
    }
    
    for (int i = 0; i < 3; i++)//check y achse
    {
        
        for (int b = 0; b < 3; b++)
        {
           switch (a[b][i])
           {
           case 'X':
               p1++;
               break;
           
           case 'O':
                p2++;
               break;
           }

        }
        if(p1==3){
               return 1;
           }
           if(p2==3){
               return 2;
           }
           p1=p2=0;
        
    }
    if (empty==0)
    {
       return 0;
    }
    return 3;
}

int computer(const char a[3][3]){
    int leeresfeld{0};
    int c{0},w{0},w1{0},ctab{0},c1{0},emptyspa{0},emptyreih{0};
    vector<int> leerespallte;vector<int> leeretabelle;
    for (int i = 0; i < 3; i++)
    {
        a[i][i]=='X'?c1++:c1;
        if (c1==2)
        {
            for(int h=0;h<3;h++){
                if (a[h][h]==' ')
                {
                    return h*10+h;
                }
            }
            
        }
        
        for (int b = 0; b < 3; b++)
        {
            if (a[i][b]==' ')
            {
               emptyspa++;
               leeresfeld=i*10+b;
            }
            if (a[b][i]==' ')
            {
               emptyreih++;
            }
            if (a[i][b]=='O')
            {
                w++;
                if (w==2)
                {
                   for (int x = 0; x<3; x++)
                   {
                      if (a[i][x]==' ')
                      {
                          return i*10+x;
                      }  
                   }                  
                }
            }
            if (a[b][i]=='O')
            {
                if (++w1==2)
                {
                   for (int x = 0; x<3; x++)
                   {
                      if (a[b][x]==' ')
                      {
                          return b*10+x;
                      }  
                   }                  
                }
            }
            if (a[i][b]=='X')
            {
                c++;
                if (c==2)
                {
                   for (int x = 0; x<3; x++)
                   {
                      if (a[i][x]==' ')
                      {
                          return i*10+x;
                      }  
                   }                  
                }
            }
            if (a[b][i]=='X')
            {
                if (++ctab==2)
                {
                   for (int x = 0; x<3; x++)
                   {
                      if (a[b][x]==' ')
                      {
                          return b*10+x;
                      }  
                   }                  
                }
            }
            if (emptyreih==3)
        {

            leeretabelle.push_back(b);
        }
        }
        if (emptyspa==3)
        {
            leerespallte.push_back(i);
        }
        emptyreih=0;
        emptyspa=0;
        c=0;
        w=0;
        w1=0;
        ctab=0;
    }

    if (!leerespallte.empty())
    {
        return leerespallte.front()*10;
    }
    
    
    return leeresfeld;
}
int main(){
    bool run{true};
    char a[3][3];
    int comp;
    for (int i = 0; i < 3; i++)
    {
        for (int b = 0; b < 3; b++)
        {
            (a[i][b]=' ');
        }
        
    }

    int x{0},y{0},xcomp{0},ycomp{0};
    do
    {
        cout<<"x: ";cin>>x;cout<<"y: ";cin>>y;cout<<endl;

        while (a[x-1][y-1]!=' '||x>3||y>3||x<0||y<0)
        {
            cout<<"Ungeltige Eingabe"<<endl;
            cout<<"x: ";cin>>x;cout<<"y: ";cin>>y;cout<<endl;
        }
        a[x-1][y-1]='X';
        show(a);
        comp=computer(a);
        xcomp=comp/10;
        ycomp=comp%10;
        cout<<"Computer belegt X:"<<xcomp+1<<" Y:"<<ycomp+1<<endl;
        a[xcomp][ycomp]='O';
        cout<<"#######################################"<<endl;
        show(a);
        switch (check(a))
        {
        case 1:
            cout<<"Spieler 1 hat gewonnen"<<endl;
            run=false;
            break;
        case 2:
            cout<<"Spieler 2 hat gewonnen"<<endl;
            run=false;
            break;  
        case 0:
            cout<<"Draw"<<endl;
            run=false;
            break;  
        }
    } while (run);
    

}