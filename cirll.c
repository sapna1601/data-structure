//Name:Sapna Sunil Rokade
//Roll no.:227

//Implementation of circular linked list.


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
 NODE *last=NULL;
 

 int ch,i,loc;
  do{
 printf("Enter the choice\n");
 printf("1.create at start\n");
 printf("2.create at end\n");
 printf("3.create at given location\n");
 printf("4.delete at start\n");
 printf("5.delete at end\n");
 printf("6.delete at given location\n");
 printf("7.traverse\n");
 printf("8.Exit\n");
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
       p->next=p;
       start=p;
       last=p;
     }
     else
     {
       p->next=start;
       start=p;
        last->next=p;
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
       p->next=p;
       start=p;
       last=p;
     }
     else                                   
     {
       q=last;
       q->next=p;
       p->next=start;
       last=p;
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
        p->next=p;
        start=p;
        last=p;
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
         last->next=p;
       }
       
       else
       {
          q=start;
          i=1;
          
          while(i<loc-1&&q->next!=start)
          {
            q=q->next;
            i++;
          }
          
          if(i==loc-1)
          {
            if(q==last)
            {
              p->next=start;
              q->next=p;
              last=p;
            }
            else
            {
            p->next=q->next;
            q->next=p;
            }
                
          if(q->next==start)
          {
            // q->next=p;
          //  p->next=start;
           last=p;
           }
            
          
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
     
     else if(start->next==start)
      {
        p=start;
        //p=last;
        start=NULL;
        last=NULL;
        free(p);
      }
      
      else
     {
       p=start;
       start=p->next;
       last->next=start;
        free(p);
     }
   }
   break;
   
   case 5:
   {
     if(start==NULL)
     printf("Linked list is empty\n");
     
     else if(start->next==start)
     {
       p=start;
     // p=last;
       start=NULL;
       last=NULL;
        free(p);
     }
     
     else
     {
      q=start;
       
       while(q->next!=last)
       {
         
         q=q->next;
       }
        p=last;
        q->next=start;
        last=q;
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
      
      else if(start->next==start)
      {
         if(loc==1)
         
        // if(start->next==start)
      
       
        {
          p=start;
          //p=last;
          start=NULL;
          last=NULL;
            free(p);
        }
        else
        {
        printf("invalid location\n");
        }
       
       }
      else
      {
      if (loc==1)
       {
         p=start;
         start=p->next;
         last->next=start;
         free(p);
       }
       
       
       
       
         else   
         
        {
          p=start;
          i=1;
           
           while(i<loc && p->next!=start)
           {
             q=p;
             p=p->next;
             i++;
           }
           
           //if(p->next!=start)
          if(i==loc)
           {
             q->next=p->next;
             
             
             if(p==last)
             {
               
               q=last;
              free(p);
            }  
           
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
       
       while(q->next!=start)
       {
         printf("%d\t",q->data);
          q=q->next;
       }
           printf("%d\n",q->data);
       }
       
      
   }
   break;
   
  
   case 8:
   {
     exit;
     break;
   }
   
    
    default:
    printf("Invalid choice\n");
   
   } 
    
    
 }while(ch!=8);
 }
 
 
 /* output
 
 Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.Exit
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
8.Exit
1
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
8.Exit
2
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
8.Exit
3
Enter the location
1
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
8.Exit
3
Enter the location
5
Enter the data
15
Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.Exit
7
14	12	11	13	15
Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.Exit
4
Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.Exit
7
12	11	13	15
Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.Exit
5
Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.Exit
7
12	11	13
Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.Exit
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
8.Exit
7
12	13
Enter the choice
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.Exit
8
*/
