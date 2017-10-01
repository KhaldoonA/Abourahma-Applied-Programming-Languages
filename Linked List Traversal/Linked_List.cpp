#include <iostream>
#include <cstddef>
using namespace std;

class HeadNode {
};
struct Node
{
	int value;
	Node *next;
};

Node* deleteNodes(int val, Node *list)
{
	Node * last = list;
	Node * curr = list;
	while(curr != NULL)
	{
		if(curr == list && curr->value == val)
		{
			list = list->next;
			last = list;
			curr = list;
		}
		else if(curr->value == val)
		{
			last->next = curr->next;
			curr = last->next;
		}
		else
		{
			last = curr;
			curr = last->next;
		}
	}
	return list;
}

void deleteMember()
{
	Node * list = new Node();
	Node * curr = list;
	const int size = 10;
	int a[size] = {1, 2, 2, 2, 1, 2, 2, 2, 2, 1};
	for(int i = 0; i < size; i++)
	{
		curr->next = new Node();
		curr->value = a[i];
		cout << a[i] << " ";
		if(i == size-1)
			curr->next = NULL;
		curr = curr->next;
	}
	cout << endl;	
	
	curr = deleteNodes(1, list);
	while(curr != NULL)
	{
		cout << curr->value << " ";
		curr = curr->next;
	}
	cout << endl;
	delete curr; 
	delete list;
}

int main()
{
	deleteMember();
	return 0;
}