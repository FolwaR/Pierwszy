#include <iostream>

using namespace std;

float sqrt(int);

int main()
{

	cout<<"Hello World!"<<endl;	
	cout<<"Jestem w clean_up"<<endl;
	cout<<"Lol"<<endl;
	cout<<"Podaj liczbe: ";
	int i;
	cin>>i;

	cout<<"liczba podniesiona ^2= "<<sqrt(i)<<endl;

return 0;
}


float sqrt(int i)
{
	return i*i;
}


