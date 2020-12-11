#include "../std_lib_facilties.h"

int main()
{
 string previous = " ";
 string current;

 while (cin >> current)
 {
     if (previous == current)
     {
         cout << "repeated word\n";
     }
     previous = current;
 }
}