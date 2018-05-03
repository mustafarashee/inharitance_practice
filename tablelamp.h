#include <iostream>
using namespace std;
#include <string>
class tablelamp{

public:
tablelamp()
{
  button="off";
}
void pressswitch()
{
  if(button=="off")
  {
button="on";
  }
  else{
    button="off";
  }
}
friend ostream& operator <<(ostream & o,const tablelamp &t)
{
  return((t.button=="on")? o<<"is on":o<<"is off");
}

private:
string button;
};
