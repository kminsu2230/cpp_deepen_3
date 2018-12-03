#include <iostream>

int n;

int count=1; // line
int sum=1; // value
int num=1; // range

using namespace std;

int main()
{
	cin >> n;

	while (true)
	{
		if (n <= sum )
		{
			break;
		}
		
		num = 6*count;
		count ++;
		sum = sum + num;
	}

	
	cout << count;

	return 0;
}
