#include "Link_Queue.h"

LinkQueue::LinkQueue()
{
	front = new QNode;
	if (front == NULL)
	{
		exit(0);
	}
	front->next = NULL;
	rear = front;
}

void LinkQueue::DestoryQueue()
{
	while (front->next != NULL)
	{
		QueuePtr p = front->next;
		delete front;
		front = p;
	}
}

void LinkQueue::EnQueue(QElemType e)
{
	QueuePtr p = new QNode;
	p->data = e;
	p->next = NULL;
	rear->next = p;
	rear = p;
}

void LinkQueue::DeQueue(QElemType& e)
{
	QNode* p;
	if (front == rear) {
		return;
	}
	p = front->next;
	e = p->data;
	front->next = p->next;
	if (rear == p)
	{
		rear = front;
	}
	delete p;
}

QElemType LinkQueue::GetHead()
{
	return front->next->data;
}
