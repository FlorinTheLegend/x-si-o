#include <iostream>
#include <unistd.h>

#include "myfunctions.h"
using namespace std;

void  printscreen(char (&x)[3][3])

{



   cout<<endl;
   cout<<" 1"<<"\t"<<"|"<<"2"<<"\t"<<"|3\n";
   cout<<"    "<<x[0][0]<<"   "<<"|"<<"   "<<x[0][1]<<"   "<<"|"<<"   "<<x[0][2]<<"   \n";
   cout<<"\t"<<"|"<<"\t"<<"|\n";
   cout<<"  ---------------------\n";
   cout<<" 4"<<"\t"<<"|"<<"5"<<"\t"<<"|6\n";
   cout<<"    "<<x[1][0]<<"   "<<"|"<<"   "<<x[1][1]<<"   "<<"|"<<"   "<<x[1][2]<<"   \n";
   cout<<"\t"<<"|"<<"\t"<<"|\n";
   cout<<"  ---------------------\n";
   cout<<" 7"<<"\t"<<"|8"<<"\t"<<"|9\n";
   cout<<"    "<<x[2][0]<<"   "<<"|"<<"   "<<x[2][1]<<"   "<<"|"<<"   "<<x[2][2]<<"   \n";
   cout<<"\t"<<"|"<<"\t"<<"|\n";

}

void choosepos(int alegere,char &turn,char (&boardpos)[3][3])

{
     cin>>alegere;

     switch (alegere)
   {
      case 1:
          if(boardpos[0][0]=='x' || boardpos[0][0]=='o')
             {
                cout<< "position used\n";
                sleep(1); //wait 1 second
                system("cls");
                printscreen(boardpos);
                turnplayer(turn);
                choosepos(alegere,turn,boardpos);
                break;
             }
          else if (turn=='x')
          {
           boardpos[0][0]='x';
           turn='o';
           system("cls");

           break;
          }
          else
          {
             boardpos[0][0]='o';
             turn='x';
              system("cls");

             break;
          }

      case 2:
          if(boardpos[0][1]=='x' || boardpos[0][1]=='o')
             {
                cout<< "position used\n";
                sleep(1); //wait 1 second
                system("cls");
                printscreen(boardpos);
                turnplayer(turn);
                choosepos(alegere,turn,boardpos);
                break;
             }
          else if (turn=='x')
          {
           boardpos[0][1]='x';
           turn='o';
            system("cls");

           break;
          }
          else
          {
             boardpos[0][1]='o';
             turn='x';
              system("cls");

             break;
          }

      case 3:
          if(boardpos[0][2]=='x' || boardpos[0][2]=='o')
             {
                cout<< "position used\n";
                sleep(1); //wait 1 second
                system("cls");
                printscreen(boardpos);
                turnplayer(turn);
                choosepos(alegere,turn,boardpos);
                break;
             }
          else if (turn=='x')
          {
           boardpos[0][2]='x';
           turn='o';
            system("cls");

           break;
          }
          else
          {
             boardpos[0][2]='o';
             turn='x';
              system("cls");

             break;
          }

      case 4:
          if(boardpos[1][0]=='x' || boardpos[1][0]=='o')
             {
                cout<< "position used\n";
                sleep(1); //wait 1 second
                system("cls");
                printscreen(boardpos);
                turnplayer(turn);
                choosepos(alegere,turn,boardpos);
                break;
             }
          else if (turn=='x')
          {
           boardpos[1][0]='x';
           turn='o';
            system("cls");

           break;
          }
          else
          {
             boardpos[1][0]='o';
             turn='x';
              system("cls");

             break;
          }
      case 5:
          if(boardpos[1][1]=='x' || boardpos[1][1]=='o')
             {
                cout<< "position used\n";
                sleep(1); //wait 1 second
                system("cls");
                printscreen(boardpos);
                turnplayer(turn);
                choosepos(alegere,turn,boardpos);
                break;
             }
          else if (turn=='x')
          {
           boardpos[1][1]='x';
           turn='o';
            system("cls");

           break;
          }
          else
          {
             boardpos[1][1]='o';
             turn='x';
              system("cls");

             break;
          }

      case 6:
          if(boardpos[1][2]=='x' || boardpos[1][2]=='o')
             {
                cout<< "position used\n";
                sleep(1); //wait 1 second
                system("cls");
                printscreen(boardpos);
                turnplayer(turn);
                choosepos(alegere,turn,boardpos);
                break;
             }
          else if (turn=='x')
          {
           boardpos[1][2]='x';
           turn='o';
            system("cls");

           break;
          }
          else
          {
             boardpos[1][2]='o';
             turn='x';
              system("cls");

             break;
          }
      case 7:
          if(boardpos[2][0]=='x' || boardpos[2][0]=='o')
             {
                cout<< "position used\n";
                sleep(1); //wait 1 second
                system("cls");
                printscreen(boardpos);
                turnplayer(turn);
                choosepos(alegere,turn,boardpos);
                break;
             }
          else if (turn=='x')
          {
           boardpos[2][0]='x';
           turn='o';
            system("cls");

           break;
          }
          else
          {
             boardpos[2][0]='o';
             turn='x';
              system("cls");

             break;
          }
      case 8:
          if(boardpos[2][1]=='x' || boardpos[2][1]=='o')
             {
                cout<< "position used\n";
                sleep(1); //wait 1 second
                system("cls");
                printscreen(boardpos);
                turnplayer(turn);
                choosepos(alegere,turn,boardpos);
                break;
             }
          else if (turn=='x')
          {
           boardpos[2][1]='x';
           turn='o';
            system("cls");

           break;
          }
          else
          {
             boardpos[2][1]='o';
             turn='x';
              system("cls");

             break;
          }
      case 9:
          if(boardpos[2][2]=='x' || boardpos[2][2]=='o')
             {
                cout<< "position used\n";
                sleep(1); //wait 1 second
                system("cls");
               printscreen(boardpos);
               turnplayer(turn);
                choosepos(alegere,turn,boardpos);
                break;
             }
          else if (turn=='x')
          {
           boardpos[2][2]='x';
           turn='o';
            system("cls");

           break;
          }
          else
          {
             boardpos[2][2]='o';
             turn='x';
              system("cls");

             break;
          }

      default :
       {
          cout<< "wrong input";
          choosepos(alegere,turn,boardpos);
          break;
       }

       }

}

char turnplayer(char &turn)
{

    if (turn=='x')
    {
       cout << "player 1 (X) turn: >";
       return turn;

    }
    else
    {

        cout << "player 2 (O) turn: >";
        return turn;
    }

}
bool checkdraw(bool draw ,char (&boardpos)[3][3])
{

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {

         if(boardpos[i][j]=='x'||'o')
         {
            draw=true;
            cout<<"it's draw!";

         }
         else
         {
            draw=false;
         }

      }

   }
 return draw;

}
bool checkwin(bool &win,char (&boardpos)[3][3],char &turn )
{
   for (int i = 0; i < 3; i++) //check simple patern rows and columns
   {
          //check x
      if ( (boardpos[i][0]=='x') && ( boardpos[i][1]=='x' ) && ( boardpos[i][2]=='x' ) )
       {
          win=true;
          turn='x';
          return win;
       }
      if ( ( boardpos[0][i]=='x') && (boardpos[1][i]=='x') && (boardpos[2][i]=='x') )
      {
        win=true;
        turn='x';
        return win;
      }
       //check o
      if ( (boardpos[i][0]=='o') && ( boardpos[i][1]=='o' ) && ( boardpos[i][2]=='o' ) )
       {
          win=true;
          turn='o';
          return win;
       }
      if ( ( boardpos[0][i]=='o') && (boardpos[1][i]=='o') && (boardpos[2][i]=='o') )
      {
        win=true;
        turn='o';
        return win;
      }


   }


                // check diagonal win
   //check x
    if (boardpos[0][0]=='x'&&boardpos[1][1]=='x'&&boardpos[2][2]=='x')
    {
          win=true;
          turn='x';
          return win;
    }
    if (boardpos[2][2]=='x'&&boardpos[1][1]=='x'&&boardpos[2][0]=='x')
    {
          win=true;
          turn='x';
          return win;
    }
    //check o
        if (boardpos[0][0]=='o'&&boardpos[1][1]=='o'&&boardpos[2][2]=='o')
    {
          win=true;
          return win;
    }
    if (boardpos[2][2]=='o'&&boardpos[1][1]=='o'&&boardpos[2][0]=='o')
    {
          win=true;
          return win;
    }




   return win;


}



































/*
 * functions_for_XO.cpp
 *
 *  Created on: 14 dec. 2022
 *      Author: flori
 */




