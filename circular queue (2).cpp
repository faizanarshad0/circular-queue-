#include<iostream>
#define SIZE 4
using namespace std;
int cqueu[SIZE],front=-1,rear=-1;
void c_enQueue(int Value){
if ((front==0 && rear==SIZE-1)||(front==rear+1))
{
	cout<<"Queue is Full. Insertion is not Possible"<<endl;
	return;
}
if(front==-1) 
{
	front=0;
	rear=0;
		}
else{if (rear==SIZE-1)
	{
		rear=0;
		 }
	else
	rear = rear+1;
	}	
	cqueu[rear]= Value;
	cout<<" insertion is sucessfull"<<endl;
	}
void c_deQueue()
{
	if(front==-1)
	{
	cout<<"Qeueu is empty";
			return;
			}
	cout<<"Element deleted : "<<cqueu[front]<<endl;
	if (front==rear)
	{
		front=-1;
		rear=-1;
		}
	else{
		if (front==SIZE-1)
		front=0;
		else
		front=front+1;
		}
		}
void c_Display()
	{   	int f=front,r=rear;
		if(front==-1&&rear==-1)
		{
			cout<<"Queue is empty";
			return;
			}
		cout<<"Queue Element are :  ";
		if(f<=r)
		{	while(f<=r)
			{    cout<<cqueu[f]<<" ";
				f++;
				}
				}
		else{
			while(f<=SIZE-1)
			{
				cout<<cqueu[f]<<" ";
				f++;
					}
			f=0;
			while(f<=r)
			{	cout<<cqueu[f]<<" ";
				f++;}
				}
		cout<<endl;
		}
int main()
{	int a,d;
while(1){
	cout<<" 1-Insert Element to Circular Queue: \n"<<endl;
	cout<<" 2-Delete Element to Circular  Queue: \n"<<endl;
	cout<<" 3-Display all Circular Elements: \n"<<endl;
	cout<<" 4-EXIT: \n"<<endl;
	cout<<endl;
	cout<<"Select Option: ";
	cin>>a;
	switch(a){
	case 1:
		for(int i=1;i<5;i++){
		cout<<"Enter Element : ";
		cin>>d;
		c_enQueue(d);
			}
	break;
	case 2:
	c_deQueue();
	break;
	case 3:
	c_Display();
	break;
	case 4:
	exit(0);
	break;
	default:
	cout<<"invaid option"<<endl;
		break;
	}
	
	}
	
	
	}


