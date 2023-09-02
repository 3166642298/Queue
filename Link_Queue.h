#pragma once
#ifndef LINKQUEUE_H
#define LINKQUEUE_H
#include<iostream>
using namespace std;
typedef int QElemType;
class LinkQueue {
private:
	typedef struct QNode{
		QElemType data;
		QNode* next;//ָ����һ�ڵ��ָ����
	}*QueuePtr;
	QueuePtr front;
	QueuePtr rear;
public:
	LinkQueue();
	void DestoryQueue();
	void EnQueue(QElemType e);
	void DeQueue(QElemType& e);
	QElemType GetHead();
};
#endif // !LINKQUEUE_H
