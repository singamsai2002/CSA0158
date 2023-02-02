#include <stdio.h>
void main( )
{
       char name[20];
       float score1 , score2, score3, avg;

       printf("Please Enter your name : "  ) ;
       scanf("%s" , name);
       printf("P1ease Enter the First Score : " ) ;
       scanf("%f",&score1);
       printf("P1ease Enter the Second Score : " ) ;
       scanf ( "%f",&score2);
       printf("P1ease Enter the Third Score : " ) ;
       scanf ("%f" , &score3);
       avg = (score1+score2+score3)/3;
       printf ("\n\nName: %-s\n\n", name);
       printf("Score 1: %-5.1f\n" , score1 ) ;
       printf("Score 2: %-5.1f\n" , score2);
       printf("Score 3: %-5.1f\n" , score3);
       printf("Average: %-5.1f\n\n", avg);
       getch();
}
