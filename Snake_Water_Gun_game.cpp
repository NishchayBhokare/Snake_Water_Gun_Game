#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

 void winner(char comp,char choice)
 {
     //Different conditions sw,ws,  ss,ww,gg,  sg,gs, wg,gw

     //if(comp=='s' && choice=='s' || comp=='w' && choice=='w' || comp=='g' && choice=='g')

     if(comp==choice)
     {
         cout<<"Game Draw...!\n";
     }
     else if(comp=='w' && choice=='s' || comp=='s' && choice=='g' || comp=='g' && choice=='w' )
     {
         cout<<"Congratulations! You won...\n";
     }
     else if(comp=='s' && choice=='w' || comp=='g' && choice=='s' || comp=='w' && choice=='g' )
     {
         cout<<"You Lose..!\n";
     }
     else{
        cout<<"Invalid choice...Please Try Again";
     }

 }
int main()
{
    char choice,comp;
    srand(time(0));
    int num=rand()%100+1;
    cout<<"What is your choice...\n";
    cout<<"Enter 's' for snake, 'w' for water and 'g' for gun\n";
    cin>>choice;

    if(num<34)
    {
      comp='s';
    }

    else if(num>33 && num<67)
    {
      comp='g';
    }

    else
    {
      comp='w';
    }

    winner(comp,choice);
    if(comp=='s')
    cout<<"computers choice is: snake ";
    else if(comp=='w')
    cout<<"computers choice is: water ";
    else
    cout<<"computers choice is: gun ";
    getch();
    return 0;
}
