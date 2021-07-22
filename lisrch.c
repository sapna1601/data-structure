//Name:Sapna Sunil Rokade
//Roll No.:227

//Program for implementation of linear search.


#include<stdio.h>
main()
{
  int a[5],flag=0,i,key;
  printf("Enter the elements\n");
   for(i=0;i<5;i++)
   {
     scanf("%d",&a[i]);
   }
   
   printf("Enter the element which is to be search\n");
   scanf("%d",&key);
   
   for(i=0;i<5;i++)
   {
     if(key==a[i])
     {
       flag++;
       break;
     }
   }
   
     if(flag==1)
      printf("Search is successful, Element is found at location %d\n",i+1);
      
     else
      printf("Search unsuccessful\n"); 
}



/*output
Enter the elements
23
45
67
89
34
Enter the element which is to be search
89
Search is successful, Element is found at location 4

Enter the elements
34
23
54
85
62
Enter the element which is to be search
99
Search unsuccessful

*/
