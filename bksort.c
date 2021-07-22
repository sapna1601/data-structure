//Name:Sapna Sunil Rokade
//Roll No.:227

//Implementation of bucket sort.

#include<stdio.h>
void bucketsort(int a[],int n);


int max(int a[],int n)
{
  int max=a[0],i;
  for(i=0;i<n;i++)
  {
   if(max<a[i])
   max=a[i];
  }
 return max;
}
void bucketsort(int a[],int n)
{
 int bucket[10][10],bucketcount[10];
 int i,j,k,rem,divisor=1,loop=0,large,m;
 large=max(a,n);
 
 while(large>0)
 {
   loop++;
   large=large/10;
 }
 
for(m=0;m<loop;m++)
{
  for(i=0;i<10;i++) 
  {
   bucketcount[i]=0;
  }
  for(i=0;i<n;i++)
  {
   rem=(a[i]/divisor)%10;
   bucket[rem][bucketcount[rem]]=a[i];
   bucketcount[rem]++;
  }
  i=0;
  for(k=0;k<10;k++)
  {
    for(j=0;j<bucketcount[k];j++)
    {
      a[i]=bucket[k][j];
      i++;
    }
  
  }
  divisor=divisor*10;
}

}







int main()
{
  int a[25],n,i;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements \n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
bucketsort(a,n);
printf("The sorted elements are\n");
for(i=0;i<n;i++)
{
 printf("%d\n",a[i]);
}
}


/*output

Enter the number of elements
7
Enter the elements 
34
77
21
99
59
30
29
The sorted elements are
21
29
30
34
59
77
99
*/
