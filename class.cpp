#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    double gpa;
};

int main()
{
    student alom;
    alom.id=88892;
    alom.gpa=3.65;

    cout<<alom.id<<endl;
    cout<<alom.gpa<<endl;


    getch();
}
