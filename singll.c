//Name:Sapna Sunil Rokade
//Roll No.:227


//Implement singly linked list.

#include<stdio.h>
#include<stdlib.h>
main()
{
  struct node
 {
  int data;
  struct node *next;
 };
 
 typedef struct node NODE;
 NODE *start=NULL,*p,*q;
 

 int ch,i,loc,ele/*loc_=1*/;
  do{
 printf("Enter the choice\n");
 printf("1.create at start\n");
 printf("2.create at end\n");
 printf("3.create at given location\n");
 printf("4.delete at start\n");
 printf("5.delete at end\n");
 printf("6.delete at given location\n");
 printf("7.traverse\n");
 printf("8.search element\n");
 printf("9.Exit\n");
 scanf("%d",&ch);
 switch(ch)
 {
   case 1:
    {
     p=(NODE *)malloc(sizeof(NODE));
     printf("Enter the data\n");
     scanf("%d",&p->data);
     
     if(start==NULL)
     {
       p->next=NULL;
       start=p;
     }
     else
     {
       p->next=start;
       start=p;
     }
    }
    break;
    
   case 2:
   {
      p=(NODE *)malloc(sizeof(NODE));
     printf("Enter the data\n");
     scanf("%d",&p->data);
     
     if(start==NULL)
     {
       p->next=NULL;
       start=p;
     }
     else
     {
       q=start;
       while(q->next!=NULL)
       {
         q=q->next;
       }
       
       
       p->next=NULL;
	q->next=p;
     }
   }
   break;
   
   case 3:
   {
     p=(NODE *)malloc(sizeof(NODE));
     printf("Enter the location\n");
     scanf("%d",&loc);
     printf("Enter the data\n");
     scanf("%d",&p->data);
     
     if(start==NULL)
     {
      if(loc==1)
      {
        p->next=NULL;
        start=p;
      }
      
      else
      {
        printf("Invalid location\n");
        free(p);
      }
     }
     
     else
     {
       if(loc==1)
       {
         p->next=start;
         start=p;
       }
       
       else
       {
          q=start;
          i=1;
          
          while(i<loc-1&&q!=NULL)
          {
            q=q->next;
            i++;
          }
          if(q!=NULL)
          {
            p->next=q->next;
            q->next=p;
          }
          
          else
          {
            printf("Invalid location\n");
            free(p);
          }
       }
     }
     
   }
   break;
   
   case 4:
   {
     if(start==NULL)
     printf("Linked list is empty\n");
     
     else
     {
       p=start;
       start=p->next;
        free(p);
     }
   }
   break;
   
   case 5:
   {
     if(start==NULL)
     printf("Linked list is empty\n");
     
     else if(start->next==NULL)
     {
       p=start;
       start=NULL;
        free(p);
     }
     
     else
     {
      p=start;
       
       while(p->next!=NULL)
       {
         q=p;
         p=p->next;
       }
        q->next=NULL;
         free(p);
     }
   }
   break;
   
   case 6:
   {
       printf("Enter the location\n");
       scanf("%d",&loc);
     
      if(start==NULL)
      printf("Linked list is empty\n");
      
      else
      {
        if(loc==1)
        {
          p=start;
          start=p->next;
            free(p);
        }
        
        else
        {
          p=start;
          i=1;
           
           while(i<loc && p!=NULL)
           {
             q=p;
             p=p->next;
             i++;
           }
           
           if(p!=NULL)
           {
             q->next=p->next;
              free(p);
           }
           
           else
           printf("Invalid location\n");
        }
      }
      
   }
   break;
   
   case 7:
   {
     
      
      if(start==NULL)
      printf("Linked list is empty\n");
      
      else
      {
       q=start;
       
       while(q!=NULL)
       {
         printf("%d\t",q->data);
          q=q->next;
       }
      }
   }
   break;
   
   case 8:
   {
     int loc_=1;
     if(start==NULL)
      printf("Linked list is empty\n");
      
     else
     {
       printf("Enter the element which is to be search in LL\n");
        scanf("%d",&ele);
        
       p=start;
       
       while(p!=NULL)
       {
         if(p->data==ele)
         {
         printf("Element is found at location %d\n",loc_);
         break;
         }
          p=p->next;
         loc_++;
         
         
       }
      if(p==NULL)
         printf("Element is not found\n"); 
         
           
     }
    } 
     
     break; 
   
   
   case 9:
   {
     exit;
     break;
   }
   
    
    default:
    printf("Invalid choice\n");
 }
 
 }
 
 while(ch!=9);
 
}

/*output

Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search element
9.Exit
1
Enter the data
11
Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search element
9.Exit
2
Enter the data
12
Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search element
9.Exit
3
Enter the location
3
Enter the data
13
Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search element
9.Exit
7
11	12	13	Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search element
9.Exit
4
Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search element
9.Exit
3
Enter the location
2
Enter the data
14
Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search element
9.Exit
7
12	14	13	Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search element
9.Exit
6
Enter the location
2
Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search element
9.Exit
7
12	13	Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search element
9.Exit
8
Enter the element which is to be search in LL
11
Element is not found
Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search element
9.Exit
8
Enter the element which is to be search in LL
12
Element is found at location 1
Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search element
9.Exit
9



    */

