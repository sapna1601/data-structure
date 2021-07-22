                             //Name-Sapna Sunil Rokade
                             //Roll No.-227

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
  NODE *p,*q,*start=NULL,*last=NULL;
  int key,loc1=1;
int ch,loc,i;
do
{

printf("1.create at start\n");
printf("2.create at end\n");
printf("3.create at given location\n");
printf("4.delete at start\n");
printf("5.delete at end\n");
printf("6.delete at given location\n");
printf("7.traverse\n");
printf("8.exit\n");

printf("enter the choice\n");
scanf("%d",&ch);

switch(ch)
 {
   case 1:
     {
     p=(NODE*)malloc(sizeof(NODE));
     printf("\n enter the data");
     scanf("%d",&p->data);
         if(start==NULL)
     {
       p->next=NULL;
       start=p;
       last=p;
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
            p=(NODE*)malloc(sizeof(NODE));
            printf("\n enter the data");
            scanf("%d",&p->data);
              if(start==NULL)
            {
               p->next=NULL;
               start=p;
               last=p;
            }
            else
            {
               last->next=p;
              p->next=NULL;
              last=p;
            }
            }
            break;
            
                 case 3:
                    {
                    p=(NODE*)malloc(sizeof(NODE));
                      printf("\n enter the location");
                    scanf("%d",&loc);
                    printf("\n enter the data");
                    scanf("%d",&p->data);
                  
                    if(start==NULL)
                    {
                      if(loc==1)
                    {
                       p->next=NULL;
                       start=p;
                       last=p;
                    }
                      else
                      {
                      printf("\n invalid location");
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
                       i=1;
                       q=start;
                     while(i<loc-1 && q!=NULL)
                    {
                      q=q->next;
                       i=i+1;
                    }
                       if(q!=NULL)
                    {
                       p->next=q->next;
                       q->next=p;
                    
                      if(q->next==NULL)
                      {
                      last=p;
                      }
                      }
                     else
                     {
                     printf("\n invalid location");
                    free(p);
                    }
                    }
                    }
                   } 
                   
                    break;
                         
                          case 4:
                              {
                       
                                if(start==NULL)
                              printf("linklist is empty\n");
                                 else if(start->next==NULL)
                              {
                                p=start;
                                p=last;
                                start=NULL;
                                last=NULL;
                                free(p);
                                }
                                else
                                {
                                p=start;
                                start=p->next;
                                }
                              }
                              
                              break;
                              
                   case 5:
                     {
                        if(start==NULL)
                         printf("linklist is empty\n");
                          else if(start->next=NULL)
                      {
                            p=start;
                            start=NULL;
                            last=NULL;
                            free(p);
                        }
                        else
                          {
                             q=start;
                             while(q->next!=NULL)
                        {
                               q=q->next;
                             }
                                p=last;
                                q->next=NULL;
                                last=q;
                                free(p);
                               }
                              }
                          break;
                                            
                  case 6:
                      
                      printf("Enter the location\n");
                       scanf("%d",&loc);
          
                         if(start==NULL)
                        printf("linked list is empty\n");
                           else
                          {
                       if(loc==1)
                           {
                         p=start;
                        start=start->next;
                          free(p);
                             }
      
                           else
                             {
                              i=1;
                              p=start;
                          while(i<loc && p!=NULL)
                             {
                                q=p;
                               p=p->next;  
                                  i++;
                               }
                               if(p!=NULL)
                                 {
                            q->next=p->next;
                            if(p->next==NULL)
                            {
                            last=p;
                            free(p);
                            }
                               else
                          printf("location is invalid\n");
                                  }
                                 }
                                }
                             break;
                                                
                   case 7:
                   {
                    if(start==NULL)
                        printf("linklist is empty\n");
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
                    exit;
                    break;
                                                               
                        default:
                           printf("invalid choice\n");
    }
    }
       while(ch!=8);
    } 
    
    
  /*output
    1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter the choice
1

 enter the data11
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter the choice
1

 enter the data12
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter the choice
2

 enter the data13
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter the choice
3

 enter the location2

 enter the data14
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter the choice
7
12	14	11	13	1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter the choice
4
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter the choice
5
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter the choice
6
Enter the location
2
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter the choice
7
14	1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter the choice
8   */

  






