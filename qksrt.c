//Name-Sapna Sunil Rokade
//Roll No.-227
//Implementation of quick sort.


#include<stdio.h>
 int pivot,i,j,temp;
void quicksort(int a[],int low,int high)
{
  if(low<high)
  {
   pivot=low;
   i=low;
   j=high;
   
   while(i<j)
   {
   while(a[i]<=a[pivot]&&i<=high)
    i++;
    while(a[j]>a[pivot]&&j>=low)
     j--;
     
     if(i<j)
     {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
     
    }
       temp=a[j];
       a[j]=a[pivot];
       a[pivot]=temp;
     
    
    
    
    
    quicksort(a,low,j-1);
    quicksort(a,j+1,high); 
   
  }
}
  
main()
{
  
  int a[5],low=0,high=4;
  printf("Enter the elements\n");
    for(i=0;i<5;i++)
    {
      scanf("%d",&a[i]);
    }
    
   quicksort(a,0,4);
    
    printf("Sorted elements are\n");
    
    for(i=0;i<5;i++)
    printf("%d\n",a[i]);
    
    
} 


/*output

Enter the elements
98
-45
3
-9
23
Sorted elements are
-45
-9
3
23
98
*/
