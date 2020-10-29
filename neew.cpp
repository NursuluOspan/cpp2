#include <iostream>
#include <string>
using namespace std;
int f(int i, int j, int cols)
{
	
    return i * cols + j;
}
int f2(int i, int cols){
	
	cout<<"["<<i/4<<"]["<<i%4<<"]"<<endl;
	return 0;
}

int main(){ 

//b[3][4]=a[f(i,j,cols)]


cout<<"[0][0]->["<<f(0,0,4)<<"]"<<endl;
cout<<"[2][1]->["<<f(2,1,4)<<"]"<<endl;


//a[3*4]=b[i/4][i%4];
cout<<"[5]->";
f2(5,4);
cout<<"[11]->";
f2(11,4);

}
