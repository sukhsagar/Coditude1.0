#include<iostream>
using namespace  std;

int main()
{
	char string[10], x;
	cout<< "Enter points  of the chess"; 
	cin.getline(string, 10);
	if (string[0] == 'a' || string[0] == 'c' || string[0] == 'e' || string[0] == 'g')
	{
		if (string[1] == '1' || string[1] == '3' || string[1] == '5' || string[1] == '7')
			cout << "Black square";
		else
			cout << "White square";}
	else {
	
		if (string[1] == '2' || string[1] == '4' || string[1] == '6' || string[1] == '8')
			cout << "white square";
		else
			cout << "black square";
	}
		return 0;
}


