#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
template <class t>
class stack {
private:
    int top;
    t item[MAX_SIZE];
public:
    stack()
    {
        top = -1;
    }
    void push(t val) 
    {
        if (top >= MAX_SIZE - 1)
        {
            cout << "stack full ";
        }
        else {
            top++;
            item[top] = val;
        }
    }
    bool isempty()
    {
        return top < 0;
    }
    void pop() {

        if (isempty()) {
            cout << "stack empty on pop";
        }
        else {
            top--;
        }
    }
        void gettop(t&stacktop) {

            if (isempty()) {
                cout << "stack empty on pop";
            }
            else {
                stacktop = item[top];
                cout << stacktop << endl;
            }
        }
        void print() {
            cout << "[";
            for (int i = top; i >= 0; i--) {
            cout << item[i] << " ";
            }
            cout << "]";
            cout << endl;
        }
    };
int main()
{
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(17);
    s.push(20);
    s.print();
}