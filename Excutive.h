#ifndef EXCUTIVE_H
#define EXCUTIVE_H
#include <iostream>
#include <fstream>
#include <string>
#include "Game.h"
using namespace std;


class Excutive
{
private:
  int m_size;
  fstream infile;
  Game* m_array;
public:
Excutive(string filename);
~Excutive();
void PrintAllGames();
void PrintGamesFromYear();
void PrintRankingRange();
void ThePeopleVsGibbons();
void FindGame();
void run();

};
#endif
