/*  Assignment 7  */

// 1. Write a program to find the Nth term of the Fibonnaci series.
//  #include <stdio.h>
//  int main()
//  {
//      int n,i;
//      int s1 = 0,s2=1,s3;
//      printf("Enter N:: ");
//      scanf("%d",&n);
//      for ( i = 2; i <= n; i++)
//      {
//          s3 = s1+s2;
//          s1=s2;
//          s2=s3;
//      }
//      printf("Nth Term = %d",s3);
//      return 0;
//  }

// 2. Write a program to print first N terms of Fibonacci series
// #include <stdio.h>
// int main()
// {
//     int n,i;
//     int s1 = 0,s2=1,s3;
//     printf("Enter N:: ");
//     scanf("%d",&n);
//     printf("%d\t %d\t",s1,s2);
//     for ( i = 2; i <= n; i++)
//     {
//         s3 = s1+s2;
//         printf("%d\t",s3);
//         s1=s2;
//         s2=s3;
//     }
//     return 0;
// }

// 3. Write a program to check whether a given number is there in the Fibonacci series or not.
// #include <stdio.h>
// int main()
// {
//     int n, i,x;
//     int s1 = 0, s2 = 1, s3;
//     int present = 0;
//     printf("Enter N:: ");
//     scanf("%d", &n);
//     printf("Enter x:: ");
//     scanf("%d",&x);
//     for (i = 2; i <= n; i++)
//     {
//         s3 = s1 + s2;
//         if (x==s3)
//         {
//             present++;
//             break;
//         }
//         s1 = s2;
//         s2 = s3;
//     }
//     if (present == 1)
//     {
//         printf("%d is present.",x);
//     }
//     else
//     {
//         printf("%d is not present.",x);
//     }
//     return 0;
// }

// 4. Write a program to calculate HCF of two numbers
// lcm * hcf = x * y
// #include <stdio.h>
// int main()
// {
//     int num1,num2,lcm,hcf;
//     printf("Enter two numbers:: ");
//     scanf("%d %d",&num1,&num2);
//     for (int i = 1; i <= num1*num2; i++)
//     {
//         if ((i%num1==0) && (i%num2==0))
//         {
//             lcm = i;
//             //printf("LCM = %d\n",lcm);
//             break;
//         }
//     }
//     hcf = lcm/(num1*num2);
//     printf("HCF = %d",hcf);
//     return 0;
// }

// 5. Write a program to check whether two given numbers are co-prime numbers or not
// if HCF==1 then n is co-prime
//  #include <stdio.h>
//  int main()
//  {
//      int num1,num2,lcm,hcf;
//      printf("Enter two numbers:: ");
//      scanf("%d %d",&num1,&num2);
//      for (int i = 1; i <= num1*num2; i++)
//      {
//          if ((i%num1==0) && (i%num2==0))
//          {
//              lcm = i;
//              //printf("LCM = %d\n",lcm);
//              break;
//          }
//      }
//      hcf = lcm/(num1*num2);
//      //printf("HCF = %d\n",hcf);
//      if (hcf == 1)
//      {
//         printf("Yes, both %d and %d are co-prime.",num1,num2);
//      }
//      else
//      printf("No, both %d and %d aren't co-prime.",num1,num2);
//      return 0;
//  }

// 6. Write a program to print all Prime numbers under 100
// #include <stdio.h>
// int main()
// {
//   int i, a = 1, count; 
//   while(a <= 100)
//   {
//     count = 0;
//     i = 2;
//     while(i <= a/2)
//     {
//       if(a%i == 0)
//       {
//         count++;
// 	break;
//       }
//       i++;	
//     }	
//     if(count == 0 && a != 1 )
//     {
// 	printf(" %d ", a);
//     }
//     a++; 
//   }
//   return 0;
// }

// 7. Write a program to print all Prime numbers between two given numbers
// #include <stdio.h>
// int main()
// {
//     int i, a, count, num1, num2;
//     printf("Enter Two numbers : ");
//     scanf("%d %d", &num1, &num2);
//     for (i = num1; i < num2; i++)
//     {
//         count = 0;
//         for (a = 1; a <= i; a++)
//         {
//             if (i % a == 0)
//                 count++;
//         }
//         if (count == 2)
//             printf("%d\t", i);
//     }
//     return 0;
// }

// 8. Write a program to find next Prime number of a given number
// #include <stdio.h>
// int main()
// {
//     int i, a, count, num;
//     printf("Enter a number : ");
//     scanf("%d", &num);
//     for (i = num; i < 10000; i++)
//     {
//         count = 0;
//         for (a = 1; a <= i; a++)
//         {
//             if (i % a == 0)
//                 count++;
//         }
//         if (count == 2)
//         {
//             if (num == i)
//             {
//                 ;
//                 ;
//             }
//             else
//             {
//                 printf("Next prime number = %d\t", i);
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// 9. Write a program to check whether a given number is an Armstrong number or not
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int num,dig = 0,arm_no = 0;
//     printf("Enter a number:: ");
//     scanf("%d",&num);
//     int x = num;
//     for (int i = 1; x > 0; i++)
//     {
//         x = x/10;
//         dig++;
//     }
//     //printf("Digit = %d\n",dig);
//     //printf("num = %d\n",num);
// //Armstrong no or not
// int y = num;
// for (int i = 1; y > 0; i++)
// {
//     arm_no = arm_no + pow(y%10,dig);
//     y = y/10;
// }
//   //printf("Armstrong no = %d\n",arm_no);
// if (num==arm_no)
// {
//     printf("Yes, %d is an armstrong number.",num);
// }
// else
// {
//     printf("No, %d is not an armstrong number.",num);
// }
//     return 0;
// }

// 10. Write a program to print all Armstrong numbers under 1000
// #include <stdio.h>
// int main()
// {
//     int i, temp,rem,sum,count = 0;
//     printf("Armstrong numbers between 1 and 1000 are:\n ");
//     for ( i = 1; i <= 1000; i++)
//     {
//        temp = i;
//        sum = 0;
//        while (temp > 0)
//        {
//         rem = temp%10;
//         sum = sum+(rem*rem*rem);
//         temp = temp/10;
//        }
//        if (i==sum)
//        {
//         printf("\n%d",i);
//         count++;
//        }  
//     }
//     return 0;
// }

// 11. Write a program to find the position of first 1 in LSB.

