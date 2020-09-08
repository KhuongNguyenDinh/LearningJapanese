#include "libraries.h"
void lesson1()
{
    ifstream file("lesson1.txt");
    string s;
    while(getline(file, s))
    {
        cout<<s<<endl;
    }
}

int main()
{
    cout<<"Hello, This is Japanese Learning code programming!"<<endl;
    lesson1();
}