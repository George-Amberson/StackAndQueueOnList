
#include <iomanip>
#include "StackAndQueue.h"
#include <stack>
#include <string>
#include <iostream>
#include "List.h"
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	StackOnList<int>A;
	for (int i = 10; i > 1; i--)
	{
		A.push(i);
	}
	cout << A.pop();
	QueueOnList<int>B(move(A));
	int* ar = new int[3];
	ar[0] = 1;
	ar[1] = 2;
	ar[2] = 5;
	QueueOnList<int>C(ar, 3);
	StackOnList<int>D;
	srand(time(NULL));
	for (int i = 0; i < 7; i++)
	{
		D.Push_In_Order(rand() % 20);
	}
	return 0;
}
	


