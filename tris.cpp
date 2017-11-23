#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    inizio:     //ricominciare
    const int r=5;
    char ricominciare;
    bool vero=false,vintog1=false,vintog2=false;
    int i=0,j=0,g=0,n=0;
    char g1[25],g2[25];
    char stamp[r][r]={{'7','|','8','|','9'},{'-','-','-','-','-'},{'4','|','5','|','6'},{'-','-','-','-','-'},{'1','|','2','|','3'}};
    char vett[r][r]={{' ','|',' ','|',' '},{'-','-','-','-','-'},{' ','|',' ','|',' '},{'-','-','-','-','-'},{' ','|',' ','|',' '}};    
    
    system("cls");
    for (j=0;j<r;j++)
    {
        
        for (i=0;i<r;i++)
        {
            cout<<"   "<<stamp[j][i];
        }
        cout<<endl;
    }
    cout<<"\n come si chima il giocatore 1? ";
    cin>>g1;
    cout<<"\n come si chima il giocatore 2? ";
    cin>>g2;
    system("cls");
    do
    {
    system("cls");
    for (j=0;j<r;j++)
    {
        
        for (i=0;i<r;i++)
        {
            cout<<"   "<<vett[j][i];
        }
        cout<<endl;
    }
    
    do
    {
    do
    {
    cout<<g1<<" dove voi mettere la X? ";
    n=getch();
    n-=48;
    }while (n>9&&n<1);
    switch (n)
    {
           case 7: j=0,i=0;break;
           case 8: j=0,i=2;break;
           case 9: j=0,i=4;break;
           case 4: j=2,i=0;break;
           case 5: j=2,i=2;break;
           case 6: j=2,i=4;break;
           case 1: j=4,i=0;break;
           case 2: j=4,i=2;break;
           case 3: j=4,i=4;break;
           
    }      
    if (vett[j][i]==32)
    {
       vett[j][i]='X';
       vero=true;
    }
    else 
         vero=false;
    } while (g<9&&vero!=true&&vintog1==false&&vintog2==false);
    system("cls");
    for (j=0;j<r;j++)
    {
        
        for (i=0;i<r;i++)
        {
            cout<<"   "<<vett[j][i];
        }
        cout<<endl;
    }
    //controllo vincita g1
    if (vett[0][0]=='X'&&vett[0][2]=='X'&&vett[0][4]=='X')
       vintog1=true;
    else if (vett[2][0]=='X'&&vett[2][2]=='X'&&vett[2][4]=='X')
         vintog1=true;
    else if (vett[4][0]=='X'&&vett[4][2]=='X'&&vett[4][4]=='X')
         vintog1=true;
    else if (vett[0][0]=='X'&&vett[2][0]=='X'&&vett[4][0]=='X')
         vintog1=true;
    else if (vett[0][2]=='X'&&vett[2][2]=='X'&&vett[4][2]=='X')
         vintog1=true;
    else if (vett[0][4]=='X'&&vett[2][4]=='X'&&vett[4][4]=='X')
         vintog1=true;
    else if (vett[0][0]=='X'&&vett[2][2]=='X'&&vett[4][4]=='X')
         vintog1=true;
    else if (vett[0][4]=='X'&&vett[2][2]=='X'&&vett[4][0]=='X')
         vintog1=true;
    //fine
    if (vintog1==false)
    {
    for (j=0;j<r;j++)
    {
        
        for (i=0;i<r;i++)
        {
            if (vett[j][i]!=32)
            g++;
        }
    }
    while (g<9&&vero!=true&&vintog1==false&&vintog2==false);
    {
    do
    {
    cout<<g2<<" dove voi mettere la O? ";
    n=getch();
    n-=48;
    }while (n>9&&n<1);
    switch (n)
    {
           case 7: j=0,i=0;break;
           case 8: j=0,i=2;break;
           case 9: j=0,i=4;break;
           case 4: j=2,i=0;break;
           case 5: j=2,i=2;break;
           case 6: j=2,i=4;break;
           case 1: j=4,i=0;break;
           case 2: j=4,i=2;break;
           case 3: j=4,i=4;break;
           
    } 
    if (vett[j][i]==32)
    {
       vett[j][i]='O';
       vero=true;
    }
    else 
         vero=false;
    } 
    
    g=0;
    for (j=0;j<r;j++)
    {
        
        for (i=0;i<r;i++)
        {
            if (vett[j][i]!=32)
            g++;
        }
        cout<<endl;
    }
    }
    
    //controllo vincita g2
    if (vett[0][0]=='O'&&vett[0][2]=='O'&&vett[0][4]=='O')
       vintog2=true;
    else if (vett[2][0]=='O'&&vett[2][2]=='O'&&vett[2][4]=='O')
         vintog2=true;
    else if (vett[4][0]=='O'&&vett[4][2]=='O'&&vett[4][4]=='O')
         vintog2=true;
    else if (vett[0][0]=='O'&&vett[2][0]=='O'&&vett[4][0]=='O')
         vintog2=true;
    else if (vett[0][2]=='O'&&vett[2][2]=='O'&&vett[4][2]=='O')
         vintog2=true;
    else if (vett[0][4]=='O'&&vett[2][4]=='O'&&vett[4][4]=='O')
         vintog2=true;
    else if (vett[0][0]=='O'&&vett[2][2]=='O'&&vett[4][4]=='O')
         vintog2=true;
    else if (vett[0][4]=='O'&&vett[2][2]=='O'&&vett[4][0]=='O')
         vintog2=true;
    //fine
       
       
       
    }while (g<25&&vintog1==false&&vintog2==false);
    cout<<endl<<endl;
    system("cls");
    for (j=0;j<r;j++)
    {
        
        for (i=0;i<r;i++)
        {
            cout<<"   "<<vett[j][i];
        }
        cout<<endl;
    }
    if (vintog1==true)
       cout<<"\n bravo "<<g1<<" hai vinto! ";
    else if (vintog2==true)
       cout<<"\n bravo "<<g2<<" hai vinto! ";
    else
        cout<<"\n pareggio ";
    
    cout<<"\n\n vuoi fare un' altra partita? (s/n)  ";
    cin>>ricominciare;
    if (ricominciare=='s'||ricominciare=='S')
    {
       goto inizio;
    }
    else if (ricominciare=='n'||ricominciare=='N')
    {
         cout<<" spero ti sia divertito  _______\n";
         cout<<"                         | B.R.|\n";
         cout<<"                         -------\n";
    }
    else
    {
        cout<<" impara a scrivere     _______\n";
         cout<<"                      | B.R.|\n";
         cout<<"                      -------\n";
        
    }

	cout<<endl<<endl;
	system("pause");
	return 0;
}
