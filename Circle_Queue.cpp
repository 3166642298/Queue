#include "Circle_Queue.h"

CircleQueue::CircleQueue()
{
	base = new QElemType[MaxSize];
	if (this->base == NULL)
	{
		exit(0);
	}
	else {
		this->font = this->rear = 0;
	}
}

bool CircleQueue::isEmpty()
{
	return  this->font==this->rear;
}

int CircleQueue::QueueLength()
{
	return ((this->rear-this->font+MaxSize)%MaxSize);
}

bool CircleQueue::EnQueue(QElemType e)
{
	if (((this->rear + 1) % MaxSize) == this->font)
	{
		return false;
	}
	else {
		this->base[this->rear] = e;
		this->rear = (rear + 1) % MaxSize;
		return true;
	}
}

bool CircleQueue::DeQueue(QElemType& e)
{
	if (this->font == this->rear)
	{
		return false;
	}
	else {
		e = this->base[this->font];
		this->font = (this->font + 1) % MaxSize;
	}
}

QElemType CircleQueue::GetTop()
{
	if (this->font != this->rear) {
		return this->base[this->font];
	}
	else {
		return 0;
	}
}
