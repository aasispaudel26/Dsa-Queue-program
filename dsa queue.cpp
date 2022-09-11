#include<stdio.h>
#include<conio.h>
int queue[20], choice, n, rear, front, item, i;
void enqueue();
void dequeue();
void display();

int main(){

front = -1;
rear = -1;
printf("\nEnter the size of the queue[max=20]");
scanf("%d",&n);
printf("n\t queue operation using array");
printf("\nt.............");
printf("\n\t.enque\n\t 2.dequw\n\t 3.DISPLAY\n\t 4.EXIT");
do
{
	printf("\n Enter the choice: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:{
		enqueue();
			break;	
		}
		
			case 2:{
		dequeue();
			break;	
		}
			case 3:{
		display();
			break;	
		}
			case 4:{
		printf("\n\t exit point");
			break;	
		}
		default:
			{
				printf("\n\t please enter a valid choice (1/2/3/4)");
				
			}
			
 
      	}
      	
}
while(choice!=4);
      return 0; 
  }
  void enqueue(){
  	if(rear < n-1)
  	{
  		printf("enter the data to be inserted");
  		scanf("%d, &item");
  		if(front == -1)
  		{
		 front = 0;
		 rear = 0; 
		  }
		  else 
		  {
		  	rear = rear + 1;
		  	
		  }
		  queue[rear] = item;
		  
		  
  		
	  }
	  else{
	  	printf("queue is full or overflow \n");
	  	
	  }
}
  	
	  
	  void dequeue(){
	  	if (front!= -1){
	  	item = queue[front];
	  	if(front == rear)
	  	{
	  		front = -1;
	  		rear = -1;
		  }
	  	
	  		
		  
		  else
		  	front = front + 1;
		  	printf("deleted data is %d \n",item);
	}
		  else
		  {
		   
		  printf("queue is empty or underflow \n");
	  }
}
	  void display(){
	  	if(front!=0){
	  		printf("\n the element is in queue\n");
	  		for (i=rear; i>=front;i--)
	  		printf("\n%d",queue[i]);
	  		printf("\nelements at front of the queue is %d",queue[front]);
	  		printf("\npress next choice");
	  		
		  }
		  else{
		  	printf("\n the queue is empty");
		  }
	}

	
	  
	  
	  
  
  
    


