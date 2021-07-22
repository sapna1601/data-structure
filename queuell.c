                   //Name-Sapna Rokade
                   //Roll No.-227
                   
//Queue using linklist

#include<stdio.h>
#include<stdlib.h>

main()
{
struct queue
  {
  int data;
  struct queue *next;
  };
  typedef struct queue QUEUE;
  QUEUE *p,*q,*front=NULL,*rear=NULL;
 
int ch;
do
{
printf("1.enqueue\n");
printf("2.dequeue\n");
printf("3.traverse\n");
printf("4.Exit\n");

printf("enter the choice\n");
scanf("%d",&ch);

switch(ch)
{
case 1:
  {
  p=(QUEUE*)malloc(sizeof(QUEUE));
     printf("enter the data\n");
     scanf("%d",&p->data);
   if(front==NULL)
   {
   p->next=NULL;
   front=p;
   rear=p;
   }
   else
   {
   q=rear;
   q->next=p;
   p->next=NULL;
   rear=p;
   }
   }
   break;
   
case 2:
  {
  if(front==NULL)
  printf("queue is underflow\n");
  else
  {
  p=front;
  front=front->next;
  printf("%d is dequeue\n",p->data);
  free(p);
  }
  }
  break;
  
case 3:
  {
  if(front==NULL)
  printf("queue is empty\n");
  else
  {
  q=front;
  while(q!=NULL)
  {
  printf("%d\n",q->data);
  q=q->next;
  }
  }
  }
  break;
  
case 4:
   break;
   
   default:
     printf("choice is invalid\n");
     
}
}
while(ch!=4);
}
   
/*output
1.enqueue
2.dequeue
3.traverse
4.Exit
enter the choice
1
enter the data
11
1.enqueue
2.dequeue
3.traverse
4.Exit
enter the choice
1
enter the data
12
1.enqueue
2.dequeue
3.traverse
4.Exit
enter the choice
1
enter the data
13
1.enqueue
2.dequeue
3.traverse
4.Exit
enter the choice
2
11 is dequeue
1.enqueue
2.dequeue
3.traverse
4.Exit
enter the choice
3
12
13
1.enqueue
2.dequeue
3.traverse
4.Exit
enter the choice
4   */

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
