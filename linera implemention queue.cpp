#include<stdio.h>
#include<process.h>
int queue[5];
long front,rear;
int main()
{
	int choice,value;
	int tqueue;
	
	{
		printf("   menu  \n");
		printf("1: insert element in queue\n");
		printf("2:delete element in queue\n");
		printf("3:dispay yhe queue\n");
		printf("4:exit \n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case1:
				if(rear<4)
				{
					printf("enter the number\n ");
					scanf("%d",&value);
					if(front==-1)
					{
						front=0;
						rear=0;
					}
					else
					{
						rear=rear+1;
						queue[rear]=value;
					}
				}
				else
				{
					printf("queue is full\n");
				}
				break;
				
				case2:
				if(front==-1)
				{
					printf("queue is empty\n");
				}
				else
				{
					value=queue[front];
					if(front==rear)
					{
						front=-1;
						rear=-1;
					}
					else
					{
						front=front+1;
						printf(" delete is=%d",value);
					}
				}
				break;
				
				case3:
					
			  void display();
				break;
				
				case4:
				exit(0);
				
				default:
					printf(" you entered the wrong choice\n");
		}
	}
}
   void tqueue()
   {
   	front=rear=-1;
   }
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	printf("%d\n",queue[i]);
}