#include <iostream>

int n;
int arr[100] = {0, };

using namespace std;

int main()
{
	cin >> n;
	
	
	int sum=0;
	for (int i=0; i<100; i++)
	{
		if (i==0)
		{
			arr[i]=0;
		}
		else if (i==1)
		{
			arr[i]=1;
		}
		else
		{
			arr[i]=arr[i-2] + arr[i-1] ;	
		}
	}
	
	for (int i=0; i<=n; i++)
	{
		if (i==n)
		{
			cout << arr[i];
		}
	}
	
	return 0;
}
