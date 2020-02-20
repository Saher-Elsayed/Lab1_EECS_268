#include "Excutive.h"
#include <iostream>
#include <limits>

int main(int argc, char const *argv[]) {


// double test1=5.0;
// Game firstTest;
// cout<< "Enter a value for the test: "<<endl;
// cin>>test1;
//
// firstTest.setPlayTime(test1);
// cout<< "The setted value you chose is: "
// <<firstTest.getPlayTime()<<endl;

if(argc < 2)
  {
    std::cout << "Incorrect number of parameters!\n";
  }
  else
  {
     Excutive exec(argv[1]); //sample creation of executive object
     exec.run(); //presumably handles the calling of all other member methods
  }

  return 0;
}
