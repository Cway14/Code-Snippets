#include <stdio.h>

class LL
{
private:
	class Node
	{
	public:
		int val;
		Node *next;
	};

	Node *head;
	Node *tail;

public:
	LL()
	{
		head = NULL;
		tail = NULL;
	}

	void insertBack(int val)
	{
		Node *newNode = new Node();
		newNode->val = val;
		newNode->next = NULL;
		if (head == NULL)
		{
			head = newNode;
		}
		else
		{
			Node *current = head;
			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = newNode;
		}
	}

	void insertFront(int val)
	{
		Node *newNode = new Node();
		newNode->val = val;
		newNode->next = head;
		head = newNode;
	}

	int remove(int i)
	{
		Node *current = head;
		Node *previous;
		for (int j = 0; j < i; j++)
		{
			if (current == NULL)
			{
				printf("Cannot Delete: i out of range\n");
				return INT_MIN;
			}
			previous = current;
			current = current->next;
		}
		int ret = previous->next->val;
		previous->next = current->next;
		return ret;
	}

	void print()
	{
		Node *current = head;
		while (current != NULL)
		{
			printf("%d\n", current->val);
			current = current->next;
		}
	}
};