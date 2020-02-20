#ifndef GAME_H
#define GAME_H
#include <string>
using namespace std;
#include <iostream>
class Game
{
private:
  string m_name;
  double m_gr;
  double m_pr;
  int m_year;
  int m_minP;
  double m_playT;


public:
void setName(string gameName);
string getName();

void setGibbonsRating(double rating);
double getGibbonsRating();

void setPublicRating( double rating);
double getPublicRating();

void setYearPublish(int year);
int getYearPublish();

void setMinPlayer( int playernum);
int getMinPlayert();

void setPlayTime(double Playtime);
double getPlayTime();



};
#endif
