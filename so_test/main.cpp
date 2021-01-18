#include <iostream>
#include "utils.h"

using namespace std;
int main_var = 1;
int main(){
   int x = 1;
   int y = 2;
   int c = add(x, y);
   cout<<c<<endl;  
   c = sub(x, y);
   cout<<c<<endl;  
   return 0;
}
