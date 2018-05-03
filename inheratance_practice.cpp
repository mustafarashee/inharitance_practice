#include <iostream>
using namespace std;
#include "digitallamp.h"
main()
{
  digitallamp mylamp;
  mylamp.pressswitch();
   mylamp.pressswitch();
   mylamp.dim();
   mylamp.dim();
   mylamp.dim();
   mylamp.print(cout); 
 
  
  system("pause");
}