#include <iostream>
using namespace std;
#include <string>
#include "tablelamp.h"
class digitallamp: public tablelamp{

public:
digitallamp()
{
  this->brightness=0.0;
}
void dim()
{
  if(brightness<10)
  {
    brightness++;
  }
}
void print(ostream &o)
{
  o<<*this<<"with brightness "<<brightness<<endl;
}
private:
float brightness;
};