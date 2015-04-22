#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void ISBNCheck(string ISBN);

int main()
{
	string ISBNNum;

	cout << "Please Input your 10 digit ISBN Number: " << endl;
	cin >> ISBNNum;

	ISBNCheck(ISBNNum);

	system("PAUSE");
	return 0;
}

void ISBNCheck(string ISBN)
{
	int ISBNNumbers[11];
	int ISBNTotal;
	char str[] = {" "};

	if (ISBN.size() == 10)
	{
		/*ISBNNumbers[9] = (int)ISBN[9];
		ISBNNumbers[9] = ISBN[9];
		ISBNNumbers[8] = ISBN[8];
		ISBNNumbers[7] = ISBN[7];
		ISBNNumbers[6] = ISBN[6];
		ISBNNumbers[5] = ISBN[5];
		ISBNNumbers[4] = ISBN[4];
		ISBNNumbers[3] = ISBN[3];
		ISBNNumbers[2] = ISBN[2];
		ISBNNumbers[1] = ISBN[1];
		ISBNNumbers[0] = ISBN[0];*/

		for (int i = ISBN.size() -1; i > -1; i--)
		{
			str[0] = ISBN[i];
			ISBNNumbers[i] = atoi(str);
		}
		
		ISBNTotal = ((ISBNNumbers[0] * 10) + (ISBNNumbers[1] * 9) + (ISBNNumbers[2] * 8) + (ISBNNumbers[3] * 7) + (ISBNNumbers[4] * 6) + (ISBNNumbers[5] * 5) + (ISBNNumbers[6] * 4) + (ISBNNumbers[7] * 3) + (ISBNNumbers[8] * 2) + (ISBNNumbers[9] * 1));

		if (ISBNTotal % 11 == 0)
		{
			cout << "That is a Valid ISBN Number" << endl;
		}
		else
		{
			cout << "That is not a Valid ISBN Number" << endl;
		}
	}
	else
	{
		cout << "That is not a Valid ISBN Number" << endl;
	}
}