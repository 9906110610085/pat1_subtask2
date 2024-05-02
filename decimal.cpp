#include <iostream>
#include <algorithm>
using namespace std;

int main ()

{

	int decimal;
	int remainder;
	string binary;
	
	
	cout << "Enter a decimal number:;";
	cin >> decimal;
	
	do
	{
		remainder = decimal%2;
		binary	= binary + to_string(remainder);
		decimal = decimal/2;
		}
	while(decimal > 0);
	reverse (binary.begin(),binary.end());
	cout << "binary represantation :"<<binary;	
	return 0;
	}
