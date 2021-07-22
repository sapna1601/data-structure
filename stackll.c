                 //Name-Sapna Sunil Rokade
                 //Roll No.-227
                 
//stack using linklist

#include<stdio.h>
#include<stdlib.h>

void main()
{
struct stack
  {
  int data;
  struct stack *next;
  };
  typedef struct stack STACK;
  STACK *p,*q,*top=NULL;
 
int ch;
do
{
printf("1.push\n");
printf("2.pop\n");
printf("3.traverse\n");
printf("4.Exit\n");

printf("enter the choice\n");
scanf("%d",&ch);

switch(ch)
{
case 1:
    {
     p=(STACK*)malloc(sizeof(STACK));
     printf("enter the data\n");
     scanf("%d",&p->data);
      if(top==NULL)
      {
       p->next=NULL;
       top=p;
      }
       else
       {
       p->next=top;
       top=p;
       }
    }
      break;
      
case 2:
  {
    if(top==NULL)
    printf("stack is underflow\n");
    else
    {
    p=top;
    top=top->next;
    printf("%d is popped\n",p->data);
    free(p);
    }
  }
    break; 
    
case 3:
{
if(top==NULL)
printf("stack is empty\n");
else
{
q=top;
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
       printf("invalid choice\n");
       
} 
}
while(ch!=4);
}

/*output
1.push
2.pop
3.traverse
4.Exit
enter the choice
1
enter the data
11
1.push
2.pop
3.traverse
4.Exit
enter the choice
1
enter the data
12
1.push
2.pop
3.traverse
4.Exit
enter the choice
1
enter the data
13
1.push
2.pop
3.traverse
4.Exit
enter the choice
2
13 is popped
1.push
2.pop
3.traverse
4.Exit
enter the choice
3
12
11
1.push
2.pop
3.traverse
4.Exit
enter the choice
4    */

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
