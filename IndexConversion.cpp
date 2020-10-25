#include <iostream>
#include <string>
#include <time.h>
using namespace std;

void conv(int**arr, int rows, int cols){
  int *B = new int[rows*cols];
	 int z=0;
	 cout<<"Index Conversion: "<<endl;
	 for (int i=0;i<rows;i++){
		 for (int j=0; j<cols;j++){
			 B[z]=arr[i][j];
		     cout<<"["<<i<<"]["<<j<<"] -->  ["<<z<<"]"<<endl; 
			 z++; 
		 }
	 }
	 cout<<"One-dimensional array: "<<endl;
	 for (int i = 0; i < rows*cols; i++)
    {      
            cout << B[i] << " ";
       
    }
	delete[] B;
}
int main()
{
    srand(time(0));
    setlocale(0, "");
    int N, M;
    cout << "Array size(N,M): ";
    cin >> N >> M;
    int **A = new int*[N];
    for (int i = 0; i < N; i++)
        A[i] = new int[M];
    cout << "Two-dimensional array: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            A[i][j] = rand() % 10;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }   
	conv(A,N,M);
	
	for(int i=0; i<N; i++)
		delete [] A[N];
	
    system("pause");
	return 0;
}
