#include<iostream>
#include"Circle_Queue.h"
#include"Link_Queue.h"
using namespace std;
int main()
{
	CircleQueue CQueue;
	CQueue.EnQueue(1);
	CQueue.EnQueue(2);
	CQueue.EnQueue(3);
	CQueue.EnQueue(4);
	CQueue.EnQueue(5);
	CQueue.EnQueue(6);
	cout << CQueue.GetTop()<< endl;
	LinkQueue LQueue;
	LQueue.EnQueue(10);
	LQueue.EnQueue(11);
	LQueue.EnQueue(12);
	LQueue.EnQueue(13);
	LQueue.EnQueue(14);
	cout << LQueue.GetHead() << endl;
	return 0;
}