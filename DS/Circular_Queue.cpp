#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class CircularQueue
{
	public:
		int size;
		int *arr;
		int front;
		int rear;
	public:
		CircularQueue(int s)
		{
			size = s;
			arr = new int[size];
			front = rear = -1;
		}
	public:
		void Enqueue(int data);
		int Dequeue();
		void displayQueue();
};

void CircularQueue::Enqueue(int data)
{
	if((rear == size-1 && front ==0) || (rear == (front-1)%(size-1)))
	{
		cout<<"The queue is full "<<endl;
		return;
	}
	if( rear == size-1 && front!=0)
	{
		rear =0;
		arr[rear] = data;
		return;
	}
	if( rear == -1)
	{
		front=rear = 0;
		arr[rear] = data;
		return;
	}
	else{
		rear++;
		arr[rear] = data;
		return;
	}
}

int CircularQueue::Dequeue()
{
	if(front ==-1)
	{
		cout<<"The queue is empty"<<endl;
		return INT_MIN;
	}
	int value = arr[front];
	arr[front] = INT_MIN;
	if(front == rear)
	{
		front = rear = -1;
	}
	if(front == size-1)
	{
		front =0;
	}
	else{
		front++;
	}
	return value;
}

void CircularQueue::displayQueue()
{
	if(front==-1)
	{
		cout<<"The queue is empty"<<endl;
		return;
	}
	if(rear >=front)
	{
		for(int i=front;i<=rear;i++)
			cout<<arr[i]<<" ";
		return;
	}
	else{
		for(int i=rear;i<=front;i++)
			cout<<arr[i]<<" ";
		for(int i=front+1;i<size;i++)
			cout<<arr[i]<<" ";
		return;
	}
}

int main()
{
	CircularQueue q(10);
	q.Enqueue(10);
	q.Enqueue(28);
	q.Enqueue(40);
	q.Enqueue(50);

	q.displayQueue();
	q.Dequeue();
	cout<<endl;
	q.displayQueue();
	q.Enqueue(6);
	q.Enqueue(80);
	q.Enqueue(20);
	q.Enqueue(50);
	q.Enqueue(90);
	q.Enqueue(100);
	q.Enqueue(99);
	cout<<endl;
	q.displayQueue();


	return 0;
}

