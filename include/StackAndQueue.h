#pragma once
#include "List.h"

using namespace std;

template<class A2>
class QueueOnList;


template<class A2>
class StackOnList
{
public:
	StackOnList():Data(){}
	StackOnList(StackOnList& lhs) :Data(lhs.Data) {}
	StackOnList(StackOnList&& lhs) :Data(move(lhs.Data)) {}
	StackOnList(A2* Array, int _size) :Data()
	{
		for (int i = 0; i < _size; i++)
		{
			this->push(Array[i]);
		}
	}
	StackOnList(QueueOnList<A2>&& lhs) :Data(move(lhs.Data)){}
	bool IsEmpty()
	{
		return(Data.IsEmpty());
	}
	int GetSize()
	{
		return(Data.GetSize());
	}
	virtual void push(const A2& lhs)
	{
		Data.push_front(lhs);
	}
	void Push_In_Order(const A2& lhs)
	{
		Data.push_in_order(lhs);
	}
	A2& pop()
	{
		return(Data.pop_front());
	}
	
protected:
List<A2>Data;
};

template<class A2>
class QueueOnList:public StackOnList<A2>
{
public:
	QueueOnList() :StackOnList() {}
	QueueOnList(StackOnList&& lhs) :StackOnList(move(lhs)) {}
	QueueOnList(A2* Array, int size):StackOnList(Array, size) 
	{
		this->Data.reverse();
	}
	void push(const A2& lhs)override
	{
		this->Data.push_back(lhs);
	}
};