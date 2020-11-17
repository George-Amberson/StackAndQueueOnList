#pragma once
#include "List.h"

using namespace std;

template<class A2>
class StackOnList
{
public:
	StackOnList():Data(){}
	StackOnList(StackOnList& lhs) :Data(lhs.Data) {}
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
	void push(const A2& lhs)override
	{
		this->Data.push_back(lhs);
	}
};