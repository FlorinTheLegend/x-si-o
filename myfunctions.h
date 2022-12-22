/*
 * functions_for_XO.h
 *
 *  Created on: 14 dec. 2022
 *      Author: flori
 */
#include <iostream>
#include <unistd.h>
using namespace std;
#ifndef HEADER_FUNCTIONS_FOR_XO_H_
#define HEADER_FUNCTIONS_FOR_XO_H_

void  printscreen(char (&x)[3][3]);

char turnplayer(char &turn);

void choosepos(int ,char &turn,char(&boardpos)[3][3]);

bool checkdraw(bool ,char (&boardpos)[3][3]);

bool checkwin(bool &win,char (&boardpos)[3][3],char &turn);

#endif /* HEADER_FUNCTIONS_FOR_XO_H_ */
