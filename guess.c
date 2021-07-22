//Name:Sapna Sunil Rokade
//Roll No.:227

#include<stdio.h>
#include<stdlib.h>
main()
{
   int guess,try=0,num;
    srand(time(0));
  num=rand()%100+1;
  
  do{
  printf("Enter the number you have to guess\n");
  scanf("%d",&guess);
   try++;
   
   if(guess>num)
   printf("Guess is too high\n");
   
   else if(guess<num)
    printf("Guess is too low\n");
    
    else
     printf("Congrats**!!!\n You have guessed it after %d tries\n",try);
   
  }while(guess!=num);
  
}

/*output

Enter the number you have to guess
34
Guess is too low
Enter the number you have to guess
67
Guess is too high
Enter the number you have to guess
56
Guess is too high
Enter the number you have to guess
45
Guess is too high
Enter the number you have to guess
37
Guess is too low
Enter the number you have to guess
44
Guess is too high
Enter the number you have to guess
41
Congrats**!!!
 You have guessed it after 7 tries
*/
