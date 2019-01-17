#include <iostream>

using namespace std;

int main() 
{
// number 3

	int ari[5];
	int* ptr = ari;
	
	cout<<"First  #: ";
	cin>>ari[0]; 
	cout<<"Second #: ";
	cin>>ari[1]; 
	cout<<"Third  #: ";
	cin>>ari[2]; 
	cout<<"Fourth #: ";
	cin>>ari[3]; 
	cout<<"Fifth  #: ";
	cin>>ari[4]; 
	
	for(int i = 0; i <= 4; i++)
	{
		cout<< *ptr <<endl;
		ptr++;
	}
	return 0;
	
}

