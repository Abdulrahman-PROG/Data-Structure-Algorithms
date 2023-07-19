#include <iostream>
using namespace std;
union box {
	double weight;
	double height;
};
int main()
{
	box b1;
	b1.weight = 30;
	b1.height = 40;
	cout << b1.weight << endl;
	cout << b1.height << endl;




}