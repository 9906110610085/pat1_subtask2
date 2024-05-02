#include <iostream>
 using namespace std;
 
 int main()
 
 {
	string binary; //variable to store what the user enters 
	int count =0;
	int binarylen;
	int lenght;
	int total =0;
	int startingvalue =1;
	
	cout << "Enter a binary number :";
	cin >> binary;
	binarylen = binary.size();
	lenght = binary.size();
	
	
	
	do
	{
	binarylen = binarylen -1;	
	if (binary[binarylen] =='1')
	{
		total = total + startingvalue;
		} 
	 startingvalue = startingvalue *2;
	 count ++;
	} while (count < lenght);
	
	cout << "Decimal represantation:" << total << endl;
 
	 return 0;
	}
