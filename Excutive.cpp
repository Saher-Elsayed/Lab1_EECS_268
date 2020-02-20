#include "Excutive.h"


Excutive::Excutive(string fileName)
{

  infile.open(fileName);
    if(infile.is_open())
    {
      string name;
      double gibbonsRating;
      double peoplesRating;
      int yearPublished;
      int minPlayers;
      double minPlayTime;
      infile >> m_size;
      m_array = new Game[m_size];
      Game temp;
      int count =0;
      while(infile >> name >> gibbonsRating >> peoplesRating >> yearPublished >> minPlayers >> minPlayTime)
      {
        temp.setName(name);
        temp.setGibbonsRating(gibbonsRating);
        temp.setPublicRating(peoplesRating);
        temp.setYearPublish(yearPublished);
        temp.setMinPlayer(minPlayers);
        temp.setPlayTime(minPlayTime);
        m_array[count] = temp;
        count++;
      }

    }
    else
    {
      cout << "Could not open file" << endl;
    }
  }

 Excutive::~Excutive()
 {
delete [] m_array;
 }

void Excutive::PrintAllGames()
{
  for(int i =0; i<m_size;i++)
  {
    cout << m_array[i].getName() << " ";
    cout << "(" <<m_array[i].getYearPublish() << ")" << " ["
     << "GR= " << m_array[i].getGibbonsRating() <<  ", PR=" << m_array[i].getPublicRating() << ", MP=" <<
     m_array[i].getMinPlayert() << ", MT= " << m_array[i].getPlayTime() << "]";
     cout << endl;
   }
  cout << endl;
}
//
void Excutive:: PrintGamesFromYear()
{
  cout<<" Enter the year you want the games from: ";
  int year=0;
  cin>>year;
  int total=0;
for(int i=0; i<m_size ;i++)
  {
  if(year == m_array[i].getYearPublish())
    {
  cout << m_array[i].getName() << " ";
  cout << "(" <<m_array[i].getYearPublish() << ")" << " ["
   << "GR= " << m_array[i].getGibbonsRating() <<  ", PR=" << m_array[i].getPublicRating() << ", MP=" <<
   m_array[i].getMinPlayert() << ", MT= " << m_array[i].getPlayTime() << "]";
   cout << endl;
   total++;
    }
  }
  if(total==0)
  {
  cout<<"No Games found";
  cout<<endl;
}

}
//
void Excutive::PrintRankingRange()
{
  double LowerRange=0.0;
  double HigherRange=0.0;
 int total=0;
    cout<<"Enter the lower range and Higher range respectively: ";
    cin>>LowerRange>>HigherRange;
for(int i=0;i<m_size;i++)
  {
    if(m_array[i].getGibbonsRating()>LowerRange && m_array[i].getGibbonsRating()<HigherRange)
{
  cout << m_array[i].getName() << " ";
  cout << "(" <<m_array[i].getYearPublish() << ")" << " ["
   << "GR= " << m_array[i].getGibbonsRating() <<  ", PR=" << m_array[i].getPublicRating() << ", MP=" <<
   m_array[i].getMinPlayert() << ", MT= " << m_array[i].getPlayTime() << "]";
   cout << endl;cout<<endl;
total++;
}
if(total==0)
{

    cout<<"Sorry the rating are more than what you have inputed!"<<" or "
    <<"Sorry the rating are less than what you have inputed!";

  }
  cout<<endl;
}
  }
//
void Excutive::ThePeopleVsGibbons()
{
  double difference=0.0;
  cout<< "Emter a the seperation range between Gibbon's rating and the public rating: ";
  cin>>difference;
for(int i=0;i <m_size;i++)
  {
    if(abs(m_array[i].getGibbonsRating()-m_array[i].getPublicRating()) <= difference)
    {
      cout << m_array[i].getName() << " ";
      cout << "(" <<m_array[i].getYearPublish() << ")" << " ["
       << "GR= " << m_array[i].getGibbonsRating() <<  ", PR=" << m_array[i].getPublicRating() << ", MP=" <<
       m_array[i].getMinPlayert() << ", MT= " << m_array[i].getPlayTime() << "]";
       cout << endl;cout<<endl;
    }
    else
      {{cout<<"There is no difference as: " << difference;}
      cout<<endl;
  }
 }
}
//
void Excutive::FindGame()
{
  int PlayNum=0;
  double TimeSpent=0.0;
  cout<<"How many player are playing today: ";
  cin >> PlayNum;
  cout<<"how long are you planning to play: ";
  cin>> TimeSpent;
  int total=0;
  for(int i=0;i<m_size;i++)
  {
    if(m_array[i].getMinPlayert()>= PlayNum && m_array[i].getPlayTime()>=TimeSpent)
    {
      cout << m_array[i].getName() << " ";
      cout << "(" <<m_array[i].getYearPublish() << ")" << " ["
       << "GR= " << m_array[i].getGibbonsRating() <<  ", PR=" << m_array[i].getPublicRating() << ", MP=" <<
       m_array[i].getMinPlayert() << ", MT= " << m_array[i].getPlayTime() << "]";
       cout << endl;cout<<endl;
       total++;
    }

  }
if(total==0)
{
    cout<<"I can't find any game of that sort for you!!";
  }

  cout<<endl;
}
//
void Excutive::run()
{
  while(1)
  {
    int choice;
    cout << "1. Print all games" << endl;
    cout << "2. Print all games from year" << endl;
    cout << "3. Print a ranking range" << endl;
    cout << "4. The People VS Dr. Gibbons" << endl;
    cout << "5. Find a game to play" << endl;
    cout << "6. Exit" << endl;
    cin >> choice;
    if(choice ==1)
    {
      PrintAllGames();
    }
    if(choice ==2)
    {
      PrintGamesFromYear();
    }
    if(choice ==3)
    {
      PrintRankingRange();
    }
    if(choice ==4)
    {
      ThePeopleVsGibbons();
    }
    if(choice ==5)
    {
      FindGame();
    }
    if(choice ==6)
    {
      break;
    }
  }
}
