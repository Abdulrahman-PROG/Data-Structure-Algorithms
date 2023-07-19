#include <iostream>
#include<cassert>
using namespace std;
class linkedqueue {
private:
	struct node {
		int item;
		node* next;
	};
	node* rearptr;
	node* frontptr;
	int count;
public:
	linkedqueue() {
		rearptr = frontptr = NULL;
		count = 0;
	}
	bool isempthy() {
		return count = 0;
	}
	void enqueue(int element) {
		if (isempthy()){
			frontptr = new node;
			frontptr->item = element;
			frontptr->next = NULL;
			rearptr = frontptr;
			count++;
		}
		else {
			node* newptr = new node;
			newptr-> item = element;
			newptr->next = NULL;
			rearptr->next = newptr;
			rearptr = newptr;
			count++;
		}
	}
	void dequeue() {
		if (isempthy()) {
			cout << "isempthy";
		}
		else {
			node* tempptr = frontptr;
			if (rearptr == frontptr) {
				rearptr = NULL;
				frontptr = NULL;
				count--;
			}
			else {
				frontptr = frontptr->next;
				tempptr->next = NULL;
				delete tempptr;
				count--;
			}
		}
	}
	int getfront() {
		assert(!isempthy());
		return frontptr->item;
	}
	int getrear() {
		assert(isempthy());
		return rearptr->item;
	}
	void display() {
		node* cur = frontptr;
		while (cur != NULL) {
			cout << cur->item;
			cur = cur->next;
		}
	}
	void deletequeue() {
		node* current;
		while (frontptr != NULL) {
			current = frontptr;
			frontptr = frontptr->next;
			delete current;
		}
		rearptr = NULL;
		count = 0;

	}
};
int main()
{
	linkedqueue ob1;
	ob1.enqueue(5);
	ob1.enqueue(9);
	ob1.enqueue(2);
	ob1.display();


}