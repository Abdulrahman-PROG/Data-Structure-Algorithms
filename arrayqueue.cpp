
#include <cassert>
#include <iostream>
using namespace std;
const int  max_size = 100;
class arrayqueue {
private:
	int rear;
	int front;
	int count;
	int arr[max_size];
public:
	arrayqueue() {
		rear = max_size - 1;
		front = 0;
		count = 0;
	}
	bool isempthy() {
		return count == 0;
	}
	bool isfull() {
		return count == max_size;
	}
	void addqueue(int element) {
		if (isfull()) {
			cout << "queue is full";
		}
		else {
			rear = (rear + 1) % max_size;
			arr[rear] = element;
			count++;
		}
	}
	void deletee() {
		if (isempthy()){
			cout << "queue is empthy";
		}
		else {
			front = (front + 1) % max_size;
			--count;
		}


	}
	int frontqueue() {
		assert(!isempthy());
		return arr[front];
	}
	int rearqueue() {
		assert(!isempthy());
		return arr[rear];
	}
	void print() {
		assert(!isempthy());
		for (size_t i = front; i != rear; i = (i + 1) % max_size) {
			cout << arr[i] << " ";
		}
		cout << arr[rear];
	}
};
int main()
{
	arrayqueue q1;
	q1.addqueue(10);
	q1.addqueue(20);
	q1.addqueue(44);
	q1.addqueue(40);
	cout<<q1.frontqueue();
}


