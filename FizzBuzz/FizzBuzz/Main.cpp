#include <iostream>
#include <string>

using namespace std;

string FizzBuzz(int num);
int result;

int main()
{
	for (int i = 0; i < 100; i++)
	{
		cout << FizzBuzz(i) << endl;
	}

	system("Pause");
	return 0;
}

string FizzBuzz(int num)
{

	if (num%3 == 0)
	{
		result = 3;
	}

	if (num%5 == 0)
	{
		result = 5;
	}

	switch (result)
	{
	case 3:
		return "Fizz";
		break;
	case 5:
		return "Buzz";
		break;
	default:
		return "";
		break;
	}

}