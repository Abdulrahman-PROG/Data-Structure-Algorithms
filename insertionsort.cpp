#include <iostream>
using namespace std;
int main()
{
	int arr[6] = { 5,4,6,3,1,2 };
	int j, key;
	for (int i = 1; i < 6; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && key < arr[j]) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}