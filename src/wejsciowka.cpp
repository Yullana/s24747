#include <iostream> 
#include <string>

int main(){
int h;
std::cout << "h: ";
std::cin >> h;

for(int i = 0; i < h; ++i )
{
for( int x = h; x > i; --x){
std::cout << "-";
}
for(int y = 0; y<2*i+1; ++y){
std::cout << "#";
}
for( int x = h; x > i; --x){
std::cout << "-";
}
std::cout <<"\n";
}

return 0;
}
