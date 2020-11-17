#include "StackAndQueue.h"

#include <gtest.h>

TEST(Stack, can_create_Stack)
{
	ASSERT_NO_THROW(StackOnList<int>A);
}

TEST(Stack, Can_copy_List)
{
	StackOnList<int>q;
	q.push(1);
	ASSERT_NO_THROW(StackOnList<int>w(q));
}
TEST(Stack, IsEmpty)
{
	StackOnList<int>q;
	EXPECT_EQ(q.IsEmpty(), 1);
}

TEST(Stack, push)
{
	StackOnList<int>q;
	q.push(0);
	q.push(1);
	int r = q.pop();
	EXPECT_EQ(r, 1);
}

TEST(Stack, pop)
{
	StackOnList<int> v;
	int m = 3;
	v.push(0);
	v.push(1);
	v.push(2);
	v.pop();
	v.pop();
	int t = v.pop();
	EXPECT_EQ(t, 0);
}



TEST(Queue, can_create_Queue)
{
	ASSERT_NO_THROW(QueueOnList<int>A);
}



TEST(Queue, Can_copy_Queue)
{
	QueueOnList<int>q;
	q.push(1);
	ASSERT_NO_THROW(QueueOnList<int>w(q));
}
TEST(Queue, IsEmpty)
{
	QueueOnList<int>q;
	EXPECT_EQ(q.IsEmpty(), 1);
}

TEST(Queue, push)
{
	QueueOnList<int>q;
	q.push(0);
	q.push(1);
	int r = q.pop();
	EXPECT_EQ(r, 0);
}

TEST(Queue, pop)
{
	QueueOnList<int> v;
	int m = 3;
	v.push(0);
	v.push(1);
	v.push(2);
	v.pop();
	v.pop();
	int t = v.pop();
	EXPECT_EQ(t, 2);
}

TEST(Queue, popandpush)
{
	QueueOnList<int>q;
	q.push(0);
	q.push(1);
	q.push(3);
	q.push(4);
	q.pop();
	q.pop();
	int e = q.pop();
	EXPECT_EQ(e, 3);
}


