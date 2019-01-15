#include <QCoreApplication>
#include <iostream>

using namespace std;


int add(int x,int y )
{
    return x+y;
}



int main(int argc, char *argv[])
{

 int x = 5;
 int y = 7;

 cout << "Addition" << add(x,y);

}


