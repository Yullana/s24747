#include <iostream>
#include <string>
int ask_user_for_integer ( std :: string const prompt )
{
if ( not prompt . empty ()) {
std :: cout << prompt ;
}
auto value = std :: string {};
std :: getline ( std :: cin , value );
return std :: stoi ( value );
}

int main ()
{
   int x;
   x = ask_user_for_integer("texst ");
   int y;
   y = ask_user_for_integer("texst ");
   int z;
   z = ask_user_for_integer("texst ");
   if(x>y && x>z)
   {
     std::cout << x <<"\n";
   }
   else if(y>x && y>z)
   {
     std::cout << y <<"\n";
   }
   else if(z>x && z>y)
   {
     std::cout << z <<"\n";
   }

   return 0;
}
