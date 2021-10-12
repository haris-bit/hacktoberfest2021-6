#include <iostream>
#include <cstring>
using namespace std;
int main()
{	
	char arr[15] = "Razor Elmopapa";
	char reversedArr[15];
	int arrSize = sizeof(arr)/sizeof(char);
	int reversedArrSize = sizeof(arr)/sizeof(char);
	int j = 0;
  
	for(int i = arrSize-2; i>=0; i--)
	{
		while(j<=13)
		{
			reversedArr[j] = arr[i];
			j++;
			break;
		}
	}

	for(int i = 0; i<reversedArrSize; i++)
		cout<<reversedArr[i]<<" ";

	return 0;
}
