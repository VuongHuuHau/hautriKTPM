#include <iostream>
#include <sstream>
#include <conio.h>
using namespace std;

int main()
{
  string swap;
Clrscr();

  cout << "Input the width of the rectangle: ";
  double width;
  cin >> swap;
  while ( !(stringstream(swap) >> width) )
  {
    cout << "Error! Type mismatch! \nInput again: ";
    cin >> swap;
  }
  
  cout << "Input the height of the regtangle: ";
  double height;
  cin >> swap;
  while ( !(stringstream(swap) >> height) )
  {
    cout << "Error! Type mismatch! \nInput again: ";
    cin >> swap;
  }
  cout << "dong moi them";
 
  
return 0;
}