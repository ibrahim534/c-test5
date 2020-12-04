/*My name:ibrahim hussain muhammed
  
  Class: the second class

  Department: Computer engineering
*/
#include <iostream>
#include <queue>  // Queue in Standard Template Library
using namespace std;
#define MAX 1000

class Stack
{
    int top;
public:
    int a[MAX];    //Maximum size of Stack

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (top >= MAX)
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        return true;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

int main()
{
    struct Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << " Popped from stack\n";
	queue<string> q;

	q.push("A");	//  Insert "A" in the queue
	q.push("B");	//  Insert "B" in the queue
	q.push("C");	// Insert "C" in the queue
	q.push("D");	// Insert "D" in the queue

	// Returns the number of elements present in the queue
	cout << "Queue size is " << q.size() << endl;

	// Prints the front of the queue ("A")
	cout << "Front element is: " << q.front() << endl;

	// Prints the rear of the queue ("D")
	cout << "Rear element is: " << q.back() << endl;

	q.pop();	// removing the front element ("A")
	q.pop();	// removing the next front element ("B")

	cout << "Queue size is " << q.size() << endl;

	

	return 0;
}