#pragma once
#ifndef CIRCLE_QUEUE_H
#define CIRCLE_QUEUE_H
#include<iostream>
using namespace std;
#define MaxSize 100
typedef int QElemType;
class CircleQueue {
private:
	QElemType* base;
	int font;//Õ∑÷∏’Î
	int rear;//Œ≤÷∏’Î
public:
	CircleQueue();
	bool isEmpty();
	int QueueLength();
	bool EnQueue(QElemType e);
	bool DeQueue(QElemType& e);
	QElemType GetTop();
};
#endif // !CIRCLE_QUEUE_H
