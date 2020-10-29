#include <iostream>
#include <string>
using namespace std;
int f(int i, int j, int cols)
{
    return i * cols + j;
}
int main(){ 
int b[3][4];
int a[3*4];
cout<<f(1,2,4);
}