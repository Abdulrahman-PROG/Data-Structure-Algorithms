#include <iostream>
using namespace std;
int main()
{
	int temp;
	int arr[6] = { 2,5,6,3,1,4 };
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
