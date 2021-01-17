#include <iostream>
#include "utils.h"

using namespace std;
int main(){
   cout<<"test"<<endl; 
   int x = 1;
   int y = 2;
   int c = add(x, y);
   cout<<c<<endl;  
   c = sub(x, y);
   cout<<c<<endl;  
   return 0;
}
