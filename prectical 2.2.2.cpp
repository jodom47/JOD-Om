//write a program to make the pertern 1,23,456.
#include <iostream>
using namespace std;
int main ()
{
	int row =3;
	int number=1;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			cout<<" "<<number;
			number++;
		}
		cout<<"\n";
	}
	
	return 0;
}