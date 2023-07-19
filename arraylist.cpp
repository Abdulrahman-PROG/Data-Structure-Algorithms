

#include <iostream>
using namespace std;
class arraylist {
private:
	int *arr;
	int maxsize;
	int length;
public:
	arraylist(int s=10) {
		if (s < 0) {
			maxsize = 10;
		}
		else {
			maxsize = s;
			length = 0;
			arr = new int[maxsize];
		}
	}
	bool isempthy() {
		return length == 0;
	}
	bool isfull() {
		return length == maxsize;
	}
	int getsize() {
		return length;
	}
	void print() {
		for (size_t i=0; i < length; i++) {
			cout << arr[i] << " ";
		}
	}
	void add(int pos, int element) {
		if (isfull()) {
			cout << "array is full";
		}
		else if (pos<0 || pos>length) {
			cout << "out of range";
		}
		else {
			for (int i = length; i > pos; i--) {
				arr[i] = arr[i - 1];
			}
			arr[pos] = element;
			length++;
		}
	}
	void remove(int pos) {
		if (isempthy()) {
			cout << "array is empthy";
		}
		else if (pos<0 || pos>length) {
			cout << "out of range";
		}
		else {
			for (int i = pos; i < length; i++) {
				arr[i] = arr[i + 1];
			 
			}
			length--;
		}
	}

	void insertatend(int element) {
		if (isfull()) {
			cout << "isfull";
		}
		else {
			arr[length] = element;
			length++;
		}
	}
	int search(int element) {
		for (size_t i = 0; i < length; i++) {
			if (arr[i] == element) 
				return i;
			return -1;
		}
	}
	void insertnodublicate(int element) {
		if (search(element) == -1) {
			insertatend(element);
		}
		else {
			cout << "element is there";
		}
	}
	void update(int pos, int element) {
		if (pos > length || pos < 0) {
			cout << "out of range";
		}
		else {
			arr[pos] = element;
		}
	}
	int getelement(int pos) {
		if (pos > length || pos < 0) {
			cout << "out of range";
		}
		else {
			return arr[pos];
		}
	}
	~arraylist() {
		delete[]arr;
	}
};
int main()
{
	arraylist ar(100);
	ar.add(0, 10);
	ar.add(1, 20);
	ar.insertatend(30);
	ar.print();
}
