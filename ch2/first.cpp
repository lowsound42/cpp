#include "../std_lib_facilties.h"

int main()
{
    string first_name = "???";
    double age = -1;

    cout<<"Enter your name and age please: ";
    cin >> first_name >> age;
    cout<<"Hola, " << first_name << " age(" << age*12 << " months)\n";
    return 0;
}