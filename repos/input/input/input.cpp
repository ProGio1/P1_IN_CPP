
#include <iostream>
using namespace std;

int main()
{
	short int  A = 10 , B= 20 ,C ,D ;

	C = A++ ;
	D = B-- ;
	 
	cout << "A : " << A << "\n";
	cout << "B : " << B << "\n";
	cout << "C : " << C << "\n";
	cout << "D : " << D << "\n";
	
	return 1; 
}

