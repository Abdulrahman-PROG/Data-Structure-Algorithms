#include <iostream>
using namespace std;

class linkedlist {
private:
	struct node {
		int item;
		node* next;
	};
	node* first;
	node* last;
	int length;
public:
	linkedlist() {
		first = last = NULL;
		length = 0;
	}
	bool isempthy() {
		return length == 0;
	}
	void insertfirst(int element) {
		node* newnode = new node;
		newnode ->item = element;
		if (isempthy()) {
			first = last = newnode;
			newnode ->next = NULL;
		}
		else {
			newnode->next = first;
			first = newnode;
		}
		length++;
	}
	void insertend(int element) {
		node* newnode = new node;
		newnode->item = element;
		if (isempthy()) {
			first = last = newnode;
			newnode->next = NULL;
		}
		else {
			last->next = newnode;
			newnode->next = NULL;
			last = newnode;
		}
		length++;
	}
	void insertatpos(int pos, int element) {

		if (pos<0 || pos>length) {
			cout << "out of range";
		}
		else {
			node* newnode = new node;
			newnode->item = element;
			if (pos == 0) {
			insertfirst(element);
		    }
			else if (pos == length) {
				insertend(element);
			     }
			else {
				node* cur = first;
				for (size_t i = 1; i < pos; i++) {
					cur = cur->next;
				}
				newnode->next = cur->next;
				cur->next = newnode;
			}
			length++;
		}
	}
	void print(){
		node* curr = first;
		while (curr != NULL) {
			cout << curr->item << " ";
			curr = curr->next;
		}
    }   
	void removefirst() {
		if (length == 0) {
			cout << "is empthy";
		}
		else if (length == 1) {
			delete first;
			first = last = NULL;
			length--;
		}
		else {
			node* temp = first;
			first = first->next;
			delete temp;
		}
	}
	void removeend() {
		if (length == 0) {
			cout << "is empthy";
		}
		else if (length == 1) {
			delete first;
			first = last = NULL;
			length--;
		}
		else {
			node* tempp = first->next;
			node* prev = first;
			while (tempp != last) {
				prev = tempp;
				tempp = tempp->next;
			}
			delete tempp;
			prev->next = NULL;
			last = prev;
			length--;
		}
	}
	void remove_specific_element(int element)
	{

		if (length == 0)
			cout << "List is empty";

		else if (element == first->item)
			removefirst();
		else if (element == last->item)
			removeend();
		else {

			node* cur = first->next;
			node* prev = first;
			for (int i = 1; i < length; i++)
			{
				if (cur->item == element)
					break;

				prev = cur;
				cur = cur->next;
			}

			if (cur == NULL)
				cout << "can't delete Element " << element << " becuse it dose not exist on the list" << endl;
			else
				prev->next = cur->next;
			delete cur;
			length--;
		}

	}
	void reverse() {
		node* prev, *nextt,*currr;
		prev = NULL;
		currr = first;
		nextt = currr->next;
		while (nextt != NULL) {
			nextt = currr->next;
			currr->next = prev;
			prev = currr;
			currr = nextt;
		}
		first = prev;
	}
	int search(int element) {
		node* curr = first;
		int pos = 0;
		while (curr != NULL) {
			if (curr->item == element) {
				return pos;
				curr = curr->next;
				pos++;
			}
			return -1;
		}
	}
};
int main()
{
	linkedlist ob;
	ob.insertfirst(10);
	ob.insertfirst(11);
	ob.insertfirst(12);
	ob.insertatpos(2,13);
	ob.remove_specific_element(10);
	ob.print();

}
