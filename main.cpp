#include <iostream>
#include <unistd.h>

#include "myfunctions.h"
using namespace std;



int main()
{
   int count=0;
   bool draw=false;
   bool win=false;
   char turn='x';
   int alegere=1;

   char boardpos[3][3]=
     {
     {'.','.','.'},
     {'.','.','.'},
     {'.','.','.'}
     };

     cout<<"who's first? (choose x or o ) :>";

     cin>>turn;
     cout<< "choose a numbered square!\n";
   do
   {
      printscreen(boardpos);
      turnplayer(turn);
      //checkdraw(draw,boardpos);


      choosepos(alegere,turn,boardpos);
          if (count==8)
          {
         checkdraw(draw,boardpos);
          }
         else
          {
            checkwin(win,boardpos,turn);
          }
      } while (draw==false && (win==false) && (++count<9) );

    if (win==true)
    {

      cout<<turn<< " won!";
      sleep(2);
    }









return 0;

}
