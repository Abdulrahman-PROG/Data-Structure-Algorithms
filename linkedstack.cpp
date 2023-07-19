#include <iostream>
using namespace std;
template <class t>
class stack
{
private:
	struct node{
		t item;
		node* next;
	};
	node* top, * cur;
public:
	stack() {
		top = NULL;
	}

		void push(t newitem) {
			node* newitemptr = new node;
			if (newitemptr == NULL) {
				cout << "cannot accses";
			}
			else {
				newitemptr->item = newitem;
				newitemptr->next = top;
				top = newitemptr;
			}
		}
		bool isempthy() {
			return top == NULL;
		}
		void pop() {
			if (isempthy()) {
				cout << "stack is empty";
			}
			else {
				node* temp = top;
				top = top->next;
				temp = temp->next = NULL;
			}
		}
		void pop(t&stacktop) {
			if (isempthy()) {
				cout << "stack is empty";
			}
			else {
				stacktop = top->next;
				node* temp = top;
				top = top->next;
				temp = temp->next = NULL;
			}
		}
		void gettop(t&stacktop) {
			if (isempthy()) {
				cout << "stack is empty";
			}
			else {
				stacktop = top->next;
			}
		}
		void display() {
			cur = top;
			cout << "items";
			cout << "[";
			while (cur != NULL) {
				cout << cur->item;
				cur = cur->next;
			}
			cout << "]";
		}
};
int main()
{
	stack<int> s;
	s.push(200);
	s.push(50);
	s.push(44);
	s.display();

}