//Name:Sapna Sunil Rokade
//Roll No.:227

//Program for implementation of binary search.

#include<stdio.h>
main()
{
  int a[6],flag=0,i,key,low=0,high=5,mid;
  printf("Enter the elements\n");
   for(i=0;i<6;i++)
   {
     scanf("%d",&a[i]);
   }
   
   printf("Enter the element which is to be search\n");
   scanf("%d",&key);
   
   while(low<=high)
   {
     mid=(low+high)/2;
     
     if(a[mid]==key)
       {
         flag++;
         break;
       }
       
      else if(key>a[mid])
          low=mid+1;
        
       else
          high=mid-1;   
        
   }
   
     if(flag==1)
      printf("Search is successful, Element is found at location %d\n",mid+1);
      
     else
      printf("Search unsuccessful\n"); 
}



/*output
Enter the elements
15
18
25
46
78
86
Enter the element which is to be search
78
Search is successful, Element is found at location 5
*/
