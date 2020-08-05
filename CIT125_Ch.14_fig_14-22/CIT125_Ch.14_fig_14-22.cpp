// CIT125 Intro To C++ Luigi Robles
// 08-04-2020 Summer Term
// Ch.14 pg.550 Fig. 14-22 number saving program
// Saves numbers from 10 through 25
// along with the square of each number
// in a sequential access file

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
	ofstream outNumbers; //create outNumbers output file object
	outNumbers.open("TryThis17.txt"); //open 

	if (outNumbers.is_open())//checking if file was opened correctly
	{
		for (int x = 10; x < 26; x += 1)
			outNumbers << x << '#'
			<< pow(x, 2.0) << endl;
		//end for
		outNumbers.close();
		cout << "Numbers saved in file." << endl;
	}
	else
		cout << "Can't open the TryThis17txt file."
		<< endl;
	//end if
	return 0;
}	//end of main function

