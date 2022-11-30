#include <iostream>
#include <queue>

using namespace std;

void print_queue(queue<int> q)
{
	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

int pop_and_return(queue<int> &q)
{
	int value = q.front();
	q.pop();
	return value;
}

int push_rand(queue<int> &q)
{
	int value = rand() % 100;
	q.push(value);
	return value;
}

int main()
{
	srand(time(NULL));
	
	queue<int> q;

	for (int i = 0; i < 10; i++)
	{
		q.push(rand() % 100);
	}
	
	cout << "Queue has value: "; print_queue(q);
	cout << "Popped value: " << pop_and_return(q) << endl;
	cout << "Popped value: " << pop_and_return(q) << endl;
	cout << "Queue has value: "; print_queue(q);
	
	cout << endl << "Pushed value: " << push_rand(q) << endl;
	cout << "Pushed value: " << push_rand(q) << endl;
	
	cout << "Queue has value: "; print_queue(q);
	cout << "Popped value: " << pop_and_return(q) << endl;
	cout << "Popped value: " << pop_and_return(q) << endl;
	cout << "Queue has value: "; print_queue(q);
	
	return 0;
}