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
   if(x>y)
   {
     std::cout << x << ">" << y <<"\n";
   }
   else if(x==y)
   {
     std::cout << x << "=" << y <<"\n";
   }
   else if(x<y)
   {
     std::cout << x << "<" << y <<"\n";
   }

   return 0;
}
