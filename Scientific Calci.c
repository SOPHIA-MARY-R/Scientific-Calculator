
                                   //Scientific Calculator

#include<stdio.h>
#include<stdlib.h>

float determinant(float [][5], float);
void cofactor(float [][5], float);
void transpose(float [][5], float [][5], float);
char name[50], ch;
int button,n,r1,r2,r3,r4,r5,r,i,j,h,arr[10],num,rows, coef = 1, space;
float v1,v2,v3,v4,v5,v,adj,opp,rad,arr1[5][5],arr2[5][5],mul[5][5];
float a[5][5], k, d, sum=0;
void main()
{
       // For this type "color dshsh" in "cmd"
       //Start+S --> cmd --> color dshsh
    //       Color attributes are specified by TWO hex digits -- the first
    //corresponds to the background; the second the foreground.  Each digit
//can be any of the following values:
//
//    0 = Black       8 = Gray
//    1 = Blue        9 = Light Blue
//    2 = Green       A = Light Green
//    3 = Aqua        B = Light Aqua
//    4 = Red         C = Light Red
//    5 = Purple      D = Light Purple
//    6 = Yellow      E = Light Yellow
//    7 = White       F = Bright White
      system("color B0"); //background as white and foreground as black
      //system("color B0"); //background as light aqua and foreground as black
      printf("\n\t\tYour good name?   ");
      scanf("%s",name);
      printf("\n\t\tHello! %s , Enjoy Computing!!!!\n",name);
    do
    {
      view:
      printf("\n\t\t _________________________________________");
      printf("\n\t\t| _______________________________________ |");
      printf("\n\t\t||                                       ||");
      printf("\n\t\t||       Scientific Calculator ^ ^       ||");
      printf("\n\t\t||                              U        ||");
      printf("\n\t\t||_______________________________________||");
      printf("\n\t\t|| 0) Off  | 1) Sum  | 2)  *   | 3)  /   ||");
      printf("\n\t\t||_________|_________|_________|_________||");
      printf("\n\t\t|| 4) mod  | 5)  ^   | 6) abs  | 7) inv  ||");
      printf("\n\t\t||_________|_________|_________|_________||");
      printf("\n\t\t|| 8) hyp  | 9) ln   |10)  e   |11) sin  ||");
      printf("\n\t\t||_________|_________|_________|_________||");
      printf("\n\t\t||12) cos  |13) tan  |14) nPr  |15) nCr  ||");
      printf("\n\t\t||_________|_________|_________|_________||");
      printf("\n\t\t||16) LCM  |17) GCD  |18)    Factors     ||");
      printf("\n\t\t||_________|_________|___________________||");
      printf("\n\t\t||19) SI   |20) CI   |21)    Percent     ||");
      printf("\n\t\t||_________|_________|___________________||");
      printf("\n\t\t||22)  ceil   |23)  floor  |24)   sqrt   ||");
      printf("\n\t\t||____________|____________|_____________||");
      printf("\n\t\t||25)  cbrt   |26)  fact   |27)  log10   ||");
      printf("\n\t\t||____________|____________|_____________||");
      printf("\n\t\t||28)  sin^-1 |29)  cos^-1 |30)  tan^-1  ||");
      printf("\n\t\t||____________|____________|_____________||");
      printf("\n\t\t||31)  sinh   |32)  cosh   |33)  tanh    ||");
      printf("\n\t\t||____________|____________|_____________||");
      printf("\n\t\t||34) sinh^-1 |35) cosh^-1 |36)  tanh^-1 ||");
      printf("\n\t\t||____________|____________|_____________||");
      printf("\n\t\t||37)  Mat+   |38)  Mat-   |39)   Mat*   ||");
      printf("\n\t\t||____________|____________|_____________||");
      printf("\n\t\t||40) MatInv  |41)  Trans  |42)   Det    ||");
      printf("\n\t\t||____________|____________|_____________||");
      printf("\n\t\t||43)  Sort   |44) Discount|45)  Leap_y  ||");
      printf("\n\t\t||____________|____________|_____________||");
      printf("\n\t\t||46)   Avg   |47)    Fibonacci Series   ||");
      printf("\n\t\t||____________|__________________________||");
      printf("\n\t\t||48)       Speciality Of A Number       ||");
      printf("\n\t\t||_______________________________________||");
      printf("\n\t\t||49)  Pascal Triangle     |50)   Help   ||");
      printf("\n\t\t||_________________________|_____________||");
      printf("\n\t\t|_________________________________________|");
      printf("\n\n%s, Enter a Button Number:-  ",name);
      if(scanf("%d",&button)!=1)
      {
          fflush(stdin);
          printf("\n%s, kindly enter a valid button number from 0 to 50",name);
          goto view;
      }
      else if(button == 0)
      {
          printf("\n\t\tBye! %s, \n\t\tThanks for utilizing!!\n\t\tCalculator turning Off...\n\n",name);
          return 0;
      }
      else if(button >=1 && button <=10)
        first_ten_choices(button);
      else if(button >=11 && button <=20)
        second_ten_choices(button);
      else if(button >=21 && button <=30)
        third_ten_choices(button);
      else if(button >=31 && button <=40)
        fourth_ten_choices(button);
      else if(button >=41 && button <=50)
        fifth_ten_choices(button);
    }while(button!=0);
}
void first_ten_choices(int b)
{
    if(b == 1)
    {
        input21:
            printf("\t\t\t____________\n");
            printf("\nEnter no.of.arguments(Maximum 5 inputs):\n");
            if(scanf("%d",&n)!=1 || n > 5 || n < 2)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with positive integer inputs!\n");
                printf("\n\t\t\tKindly , do not give no.of arguments beyond 5 or less than 2....\n");
                printf("\t\t\t____________\n");
                goto input21;
            }
        chase1:
            printf("\nEnter %d integer or float inputs:-\n",n);
            if(n==2)
            {
                if(scanf("%f%f",&v1,&v2)!=2)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float..\n");
                    printf("\t\t\t____________\n");
                    goto chase1;
                };
                printf("\n--->| %f |\n\n",v1+v2);
                printf("\t\t\t____________\n");
            }
            else if(n==3)
            {
                 if(scanf("%f%f%f",&v1,&v2,&v3)!=3)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float ..!\n");
                    printf("\t\t\t____________\n");
                    goto chase1;
                };
                printf("\n--->| %f |\n\n",v1+v2+v3);
                printf("\t\t\t____________\n");
            }
            else if(n==4)
            {

                 if(scanf("%f%f%f%f",&v1,&v2,&v3,&v4)!=4)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float ..!\n");
                    printf("\t\t\t____________\n");
                    goto chase1;
                };
                printf("\n--->| %f |\n\n",v1+v2+v3+v4);
                printf("\t\t\t____________\n");
            }
            else if(n==5)
            {
                 if(scanf("%f%f%f%f%f",&v1,&v2,&v3,&v4,&v5)!=5)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float ..!\n");
                    printf("\t\t\t____________\n");
                    goto chase1;
                };
                printf("\n--->| %f |\n\n",v1+v2+v3+v4+v5);
                printf("\t\t\t____________\n");
            }
    }
    else if(b == 2)
    {
        input22:
            printf("\t\t\t____________\n");
            printf("\nEnter no.of.arguments(Maximum 5 inputs):\n");
            if(scanf("%d",&n)!=1 || n > 5 || n < 2)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with positive integer inputs!\n");
                printf("\n\t\t\tKindly , do not give no.of arguments beyond 5 or less than 2....\n");
                printf("\t\t\t____________\n");
                goto input22;
            }
            chase2:
                printf("Enter %d (integer or float) inputs:\n",n);
            if(n==2)
            {
                if(scanf("%f%f",&v1,&v2)!=2)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float ..!\n");
                    printf("\t\t\t____________\n");
                    goto chase2;
                };
                printf("\n--->| %f |\n\n",v1*v2);
                printf("\t\t\t____________\n");
            }
            else if(n==3)
            {
                 if(scanf("%f%f%f",&v1,&v2,&v3)!=3)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float ..!\n");
                    printf("\t\t\t____________\n");
                    goto chase2;
                };
                printf("\n--->| %f |\n\n",v1*v2*v3);
                printf("\t\t\t____________\n");
            }
            else if(n==4)
            {

                 if(scanf("%f%f%f%f",&v1,&v2,&v3,&v4)!=4)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float ..!\n");
                    printf("\t\t\t____________\n");
                    goto chase2;
                };
                printf("\n--->| %f |\n\n",v1*v2*v3*v4);
                printf("\t\t\t____________\n");
            }
            else if(n==5)
            {
                 if(scanf("%f%f%f%f%f",&v1,&v2,&v3,&v4,&v5)!=5)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float ..!\n");
                    printf("\t\t\t____________\n");
                    goto chase2;
                };
                printf("\n--->| %f |\n\n",v1*v2*v3*v4*v5);
                printf("\t\t\t____________\n");
            }
    }
    else if(b == 3)
    {
        input23:
            printf("\t\t\t____________\n");
            printf("\nEnter no.of.arguments(Maximum 5 inputs):\n");
            if(scanf("%d",&n)!=1 || n > 5 || n < 2)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with positive integer inputs!\n");
                printf("\n\t\t\tKindly , do not give no.of arguments beyond 5 or less than 2....\n");
                printf("\t\t\t____________\n");
                goto input23;
            }
            chase3:
                printf("Enter %d (integer or float) inputs:\n",n);
            if(n==2)
            {
                if(scanf("%f%f",&v1,&v2)!=2 || v2==0)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float (except first input other inputs can't be zero)..!\n");
                    printf("\t\t\t____________\n");
                    goto chase3;
                };
                printf("\n--->| %f |\n\n",v1/v2);
                printf("\t\t\t____________\n");
            }
            else if(n==3)
            {
                 if(scanf("%f%f%f",&v1,&v2,&v3)!=3 || v2==0 || v3==0)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float (except first input other inputs can't be zero)..!\n");
                    printf("\t\t\t____________\n");
                    goto chase3;
                };
                printf("\n--->| %f |\n\n",v1/v2/v3);
                printf("\t\t\t____________\n");
            }
            else if(n==4)
            {

                 if(scanf("%f%f%f%f",&v1,&v2,&v3,&v4)!=4 || v2==0 || v3==0 || v4==0)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float (except first input other inputs can't be zero)..!\n");
                    printf("\t\t\t____________\n");
                    goto chase3;
                };
                printf("\n--->| %f |\n\n",v1/v2/v3/v4);
                printf("\t\t\t____________\n");
            }
            else if(n==5)
            {
                 if(scanf("%f%f%f%f%f",&v1,&v2,&v3,&v4,&v5)!=5 || v2==0 || v3==0 || v4==0 || v5==0)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float (except first input other inputs can't be zero)..!\n");
                    printf("\t\t\t____________\n");
                    goto chase3;
                };
                printf("\n--->| %f |\n\n",v1/v2/v3/v4/v5);
                printf("\t\t\t____________\n");
            }
    }
    else if(b == 4)
    {
        input24:
            printf("\t\t\t____________\n");
            printf("\nEnter no.of.arguments(Maximum 5 inputs):\n");
            if(scanf("%d",&n)!=1 || n > 5 || n < 2)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with positive integer inputs!\n");
                printf("\n\t\t\tKindly , do not give no.of arguments beyond 5 or less than 2...\n");
                printf("\t\t\t____________\n");
                goto input24;
            }
            chase4:
                printf("Enter %d integer inputs:\n",n);
            if(n==2)
            {
                if(scanf("%d%d",&r1,&r2)!=2 || r2==0 )
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float (except first input other inputs can't be zero)..!\n");
                    printf("\t\t\tKindly enter only integer inputs\n\n");
                    printf("\t\t\t____________\n");
                    goto chase4;
                }
                printf("\n--->| %d |\n\n",r1%r2);
                printf("\t\t\t____________\n");
            }
            else if(n==3)
            {
                 if(scanf("%d%d%d",&r1,&r2,&r3)!=3 || r2==0 || r3==0)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float (except first input other inputs can't be zero)..!\n");
                    printf("\t\t\tKindly enter only integer inputs\n\n");
                    printf("\t\t\t____________\n");
                    goto chase4;
                }
                printf("\n--->| %d |\n\n",r1%r2%r3);
                printf("\t\t\t____________\n");
            }
            else if(n==4)
            {

                 if(scanf("%d%d%d%d",&r1,&r2,&r3,&r4)!=4 || r2==0 || r3==0 || r4==0)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float (except first input other inputs can't be zero)..!\n");
                    printf("\t\t\tKindly enter only integer inputs\n\n");
                    printf("\t\t\t____________\n");
                    goto chase4;
                }
                printf("\n--->| %d |\n\n",r1%r2%r3%r4);
                printf("\t\t\t____________\n");
            }
            else if(n==5)
            {
                 if(scanf("%d%d%d%d%d",&r1,&r2,&r3,&r4,&r5)!=5 || r2==0 || r3==0 || r4==0 || r5==0)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with integer or float (except first input other inputs can't be zero)..!\n");
                    printf("\t\t\tKindly enter only integer inputs\n\n");
                    printf("\t\t\t____________\n");
                    goto chase4;
                }
                printf("\n--->| %d |\n\n",r1%r2%r3%r4%r5);
                printf("\t\t\t____________\n");
            }
    }
    else if(b == 5)
    {
        input25:
            printf("\t\t\t____________\n");
            printf("\nEnter no.of.arguments(Maximum 3 inputs):\n");
            if(scanf("%d",&n)!=1 || n > 3 || n < 2)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with positive integer inputs!\n");
                printf("\n\t\t\tKindly , do not give no.of arguments beyond 3 or less than 2....\n");
                printf("\t\t\t____________\n");
                goto input25;
            }
            chase5:
                 printf("Enter %d (integer or float) inputs:\n",n);
            if(n==2)
            {
                if(scanf("%f%f",&v1,&v2)!=2 || v1 < 0 || v2 < 0)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with positive integer or float (except first input other inputs can't be float)..!\n");
                    printf("\t\t\tKindly enter only integer inputs\n\n");
                    printf("\t\t\t____________\n");
                    goto chase5;
                }
                printf("\n--->| %f |\n\n",pow(v1,v2));
                printf("\t\t\t____________\n");
            }
            else if(n==3)
            {
                 if(scanf("%f%f%f",&v1,&v2,&v3)!=3 || v1 < 0 || v2 < 0 || v3 < 0)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid inputs.......\n\t\t\tTry Again with positive integer or float (except first input other inputs can't be float)..!\n");
                    printf("\t\t\tKindly enter only integer inputs\n\n");
                    printf("\t\t\t____________\n");
                    goto chase5;
                }
                printf("\n--->| %f |\n\n",pow(pow(v1,v2),v3));
                printf("\t\t\t____________\n");
            }

    }
    else if(b == 6)
    {
        input26:
            printf("\t\t\t____________\n");
            printf("\nEnter an integer or float:-\n");
            if(scanf("%f",&v1)!=1 || v1==0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with integer or float inputs!\n");
                printf("\n\t\t\tKindly do not zero\n");
                printf("\t\t\t____________\n");
                goto input26;
            }
            if(v1 > 0)
            {
                printf("\n--->| %f |\n\n",v1);
                printf("\t\t\t____________\n");
            }
            else
            {
                printf("\n--->| %f |\n\n",v1*-1);
                printf("\t\t\t____________\n");
            }
    }
    else if(b == 7)
    {
        input27:
            printf("\t\t\t____________\n");
            printf("\nEnter an integer:-\n");
            if(scanf("%d",&n)!=1 || n == 0 || n < 0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with positive integer inputs!\n");
                printf("\n\t\t\tKindly do not enter zero\n");
                printf("\t\t\t____________\n");
                goto input27;
            }
            printf("\n--->| %f |\n\n",(float)1/n);
            printf("\t\t\t____________\n");
    }
    else if(b == 8)
    {
        input28:
            printf("\t\t\t____________\n");
            printf("\nEnter Adjacent Side(integer or float):-\n");
            if(scanf("%f",&adj)!=1 || adj == 0.0 || adj < 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with positive integer or float inputs!\n");
                printf("\n\t\t\tKindly do not enter zero or negative numbers\n");
                printf("\t\t\t____________\n");
                goto input28;
            }
        input281:
            printf("\t\t\t____________\n");
            printf("\nEnter Opposite Side(integer or float):-\n");
            if(scanf("%f",&opp)!=1 || opp == 0.0 || opp < 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with positive integer or float inputs!\n");
                printf("\n\t\t\tKindly do not enter zero or negative numbers\n");
                printf("\t\t\t____________\n");
                goto input281;
            }
        printf("\n--->| %f |\n\n",hypot(adj,opp));
        printf("\t\t\t____________\n");
    }
    else if(b == 9)
    {
        printf("\t\t\t____________\n");
        printf("\nEnter a number(integer or float):-\n");
        choose3:
            if(scanf("%f",&v1)!=1 || v1 < 0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with positive integer or float values \n");
                printf("\t\t\t____________\n");
                goto choose3;
            }
            printf("\n--->| %f |\n\n",log(v1));
            printf("\t\t\t____________\n");
    }
    else if(b == 10)
    {
        printf("\t\t\t____________\n");
        printf("\nEnter a number(integer or float):-\n");
        choose31:
            if(scanf("%f",&v1)!=1 || v1 < 0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with positive integer or float values \n");
                printf("\t\t\t____________\n");
                goto choose31;
            }
            printf("\n--->| %f |\n\n",exp(v1));
            printf("\t\t\t____________\n");
    }

}

void second_ten_choices(int b)
{
    if(b == 11)
    {
        input11:
            printf("\t\t\t____________\n");
            printf("\nEnter a degree ( -450 <= degree <= 450 ):\n");
            if(scanf("%f",&v1)!=1 || v1 < -450 || v1 > 450)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with a degree(float or integer) value!\n");
                printf("\t\t\tKindly enter degrees only from -450 to 450 \n");
                printf("\t\t\t____________\n");
                goto input11;
            }
            rad = v1 * (3.141592654/ 180.0);
            printf("\n--->| %f |\n\n",sin(rad));
            printf("\t\t\t____________\n");
    }
    else if(b == 12)
    {
        input12:
            printf("\t\t\t____________\n");
            printf("\nEnter a degree ( -450 <= degree <= 450 ):\n");
            if(scanf("%f",&v1)!=1 || v1 < -450 || v1 > 450)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with a degree(float or integer) value!\n");
                printf("\t\t\tKindly enter degrees only from -450 to 450 \n");
                printf("\t\t\t____________\n");
                goto input12;
            }
            rad = v1 * (3.141592654/ 180.0);
            printf("\n--->| %f |\n\n",cos(rad));
            printf("\t\t\t____________\n");
    }
    else if(b == 13)
    {
        input13:
            printf("\t\t\t____________\n");
            printf("\nEnter a degree ( -450 <= degree <= 450 ):\n");
            if(scanf("%f",&v1)!=1 || v1 <= -450 || v1 >= 450 || v1 == 90 || v1 == -90 || v1 == 270 || v1 == -270)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with a degree(float or integer) value!");
                printf("\n\t\t\t---->MATH ERROR");
                printf("\n\t\t\tTry again with some other inputs other than 90, -90, 270, -270, 450, -450\n\t\t because tangent is undefined at these angles");
                printf("\n\t\t\t____________\n");
                goto input13;
            }
            rad = v1 * (3.141592654/ 180.0);
            printf("\n--->| %f |\n\n",tan(rad));
            printf("\t\t\t____________\n");
    }
    else if(b == 14)
    {
            input14:
                printf("\t\t\t____________\n");
                printf("\nEnter one integer input( 'n' value):\n");
                if(scanf("%d",&n)!=1 || n < 0 || n > 11)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with a  integer value as factorial does not exist for float values!\n");
                printf("\t\t\tKindly enter only positive integers less than or equal to 11 [<=11!]\n");
                printf("\t\t\t____________\n");
                goto input14;
            }
            chf:
                printf("Enter 'r' value to compute 'nPr'\n");
                if(scanf("%d",&r)!=1 || r < 0 || r > n)
                {
                fflush(stdin);
                printf("\n\t\t\tInvalid Choice.......\n\t\t\tTry Again with positive integers less than 'n' [r<=n]\n");
                printf("\t\t\t____________\n");
                goto chf;
                }
                printf("\n--->| %d |\n\n",facto(n)/facto(n-r));
                printf("\t\t\t____________\n");
    }
    else if(b == 15)
    {
        input15:
                printf("\t\t\t____________\n");
                printf("\nEnter one integer input( 'n' value):\n");
                if(scanf("%d",&n)!=1 || n < 0 || n > 11)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with a  integer value as factorial does not exist for float values!\n");
                printf("\t\t\tKindly enter only positive integers less than or equal to 11 [<=11!]\n");
                printf("\t\t\t____________\n");
                goto input15;
            }
            chf1:
                printf("Enter 'r' value to compute 'nCr'\n");
                if(scanf("%d",&r)!=1 || r < 0 || r > n)
                {
                fflush(stdin);
                printf("\n\t\t\tInvalid Choice.......\n\t\t\tTry Again with positive integers less than 'n' [r<=n]\n");
                printf("\t\t\t____________\n");
                goto chf1;
                }
                printf("\n--->| %d |\n\n",facto(n)/(facto(r)*facto(n-r)));
                printf("\t\t\t____________\n");
    }
    else if(b == 16)
    {
        input16:
            printf("\t\t\t____________\n");
            printf("\nEnter no.of.arguments(Maximum 10 inputs):\n");
            if(scanf("%d",&n)!=1 || n < 0 || n > 10)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with positive integer inputs less than 10 ...\n");
                printf("\t\t\t____________\n");
                goto input16;
            }

            chase16:
            printf("Enter %d integers:\n",n);
            for(i=0;i<n;i++)
            {
                if(scanf("%d",&arr[i])!=1)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with integers ..!\n");
                    printf("\t\t\t____________\n");
                    goto chase16;
                }
            }
            printf("\n--->| %d |\n\n",findlcm(arr, n));
            printf("\t\t\t____________\n");
    }
    else if(b == 17)
    {
        input17:
            printf("\t\t\t____________\n");
            printf("\nEnter no.of.arguments(Maximum 10 inputs):\n");
            if(scanf("%d",&n)!=1 || n < 0 || n > 10)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with positive integer inputs less than 10 ...\n");
                printf("\t\t\t____________\n");
                goto input17;
            }

            chase17:
            printf("Enter %d integers:\n",n);
            for(i=0;i<n;i++)
            {
                if(scanf("%d",&arr[i])!=1)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with integers ..!\n");
                    printf("\t\t\t____________\n");
                    goto chase17;
                }
            }
            printf("\n--->| %d |\n\n",findGCD(arr, n));
            printf("\t\t\t____________\n");
    }
    else if(b == 18)
    {
        input18:
            printf("\t\t\t____________\n");
            printf("\nEnter one integer input:\n");
            if(scanf("%d",&n)!=1 || n < 0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one positive integer value!\n");
                printf("\t\t\t____________\n");
                goto input18;
            }
            for (i = 1; i<= n; ++i )
            {
                if (n % i == 0)
                    printf("--->| %d |\n", i);
            }
            printf("\t\t\t____________\n");
    }
    else if(b == 19)
    {
        input19:
            printf("\t\t\t____________\n");
            printf("\nEnter principal(integer or float):\n");
            if(scanf("%f",&v1)!=1 || v1 < 0.0 || v1 == 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one positive integer or float value!\n");
                printf("\t\t\t____________\n");
                goto input19;
            }
        input191:
            printf("\t\t\t____________\n");
            printf("\nEnter Rate of Interest(integer or float):\n");
            if(scanf("%f",&v2)!=1 || v2 < 0.0 || v2 == 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one positive integer or float value!\n");
                printf("\t\t\t____________\n");
                goto input191;
            }
        input192:
            printf("\t\t\t____________\n");
            printf("\nEnter No.of.years(integer or float),please enter in years:\n");
            if(scanf("%f",&v3)!=1 || v3 < 0.0 || v3 == 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one positive integer or float value!\n");
                printf("\t\t\t____________\n");
                goto input192;
            }
        printf("--->| %.2f |",(v1*v2*v3)/100);
        printf("\n\t\t\t____________\n");
    }
    else if(b == 20)
    {
        input20:
            printf("\t\t\t____________\n");
            printf("\nEnter principal(integer or float):\n");
            if(scanf("%f",&v1)!=1 || v1 < 0.0 || v1 == 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one positive integer or float value!\n");
                printf("\t\t\t____________\n");
                goto input20;
            }
        input201:
            printf("\t\t\t____________\n");
            printf("\nEnter Rate of Interest(integer or float):\n");
            if(scanf("%f",&v2)!=1 || v2 < 0.0 || v2 == 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one positive integer or float value!\n");
                printf("\t\t\t____________\n");
                goto input201;
            }
        input202:
            printf("\t\t\t____________\n");
            printf("\nEnter No.of.years(integer or float),please enter in years:\n");
            if(scanf("%f",&v3)!=1 || v3 < 0.0 || v3 == 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one positive integer or float value!\n");
                printf("\t\t\t____________\n");
                goto input202;
            }
        float CI = v1*(pow((1+(v2/100)),v3));
        printf("--->| %.2f |",CI);
        printf("\n\t\t\t____________\n");
    }
}

void third_ten_choices(int b)
{
    if(b == 21)
    {
        input21:
            printf("\t\t\t____________\n");
            printf("\nEnter Whole value(integer or float):\n");
            if(scanf("%f",&v1)!=1 || v1 < 0.0 || v1 == 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one positive integer or float value!\n");
                printf("\t\t\t____________\n");
                goto input21;
            }
        input211:
            printf("\t\t\t____________\n");
            printf("\nEnter Part Value(integer or float):\n");
            if(scanf("%f",&v2)!=1 || v2 < 0.0 || v2 == 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one positive integer or float value!\n");
                printf("\t\t\t____________\n");
                goto input211;
            }
            printf("\n--->| %.2f percentage |",v2*100/v1);
            printf("\n\t\t\t____________\n");
    }
    else if(b == 22)
    {
        input22:
            printf("\t\t\t____________\n");
            printf("\nEnter a value(integer or float):\n");
            if(scanf("%f",&v1)!=1 || v1 == 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one  integer or float value!\n");
                printf("\t\t\t____________\n");
                goto input22;
            }
            printf("\n--->| %.2f |",ceil(v1));
            printf("\n\t\t\t____________\n");
    }
    else if(b == 23)
    {
        input23:
            printf("\t\t\t____________\n");
            printf("\nEnter a value(integer or float):\n");
            if(scanf("%f",&v1)!=1 ||  v1 == 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one integer or float value!\n");
                printf("\t\t\t____________\n");
                goto input23;
            }
            printf("\n--->| %.2f |",floor(v1));
            printf("\n\t\t\t____________\n");
    }
    else if(b == 24)
    {
        input24:
            printf("\t\t\t____________\n");
            printf("\nEnter a value(integer or float):\n");
            if(scanf("%f",&v1)!=1 || v1<0.0 || v1 == 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one positive integer or float value!\n");
                printf("\n\t\t\tBecause, square root of a negative number becomes complex number & it is not real!");
                printf("\n\t\t\t____________\n");
                goto input24;
            }
            printf("\n--->| %.2f |",sqrt(v1));
            printf("\n\t\t\t____________\n");
    }
    else if(b == 25)
    {
        input25:
            printf("\t\t\t____________\n");
            printf("\nEnter a value(integer or float):\n");
            if(scanf("%f",&v1)!=1 || v1 == 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one  integer or float value!\n");
                printf("\n\t\t\t____________\n");
                goto input25;
            }
            printf("\n--->| %.2f |",cbrt(v1));
            printf("\n\t\t\t____________\n");
    }
    else if(b == 26)
    {
        input26:
            printf("\t\t\t____________\n");
            printf("\nEnter a value(integer):\n");
            if(scanf("%d",&n)!=1 || n <0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one  positive integer value!\n");
                printf("\n\t\t\tBecause, float values are not permitted in finding factorial!\n");
                printf("\n\t\t\t____________\n");
                goto input26;
            }
            printf("\n--->| %d |",facto(n));
            printf("\n\t\t\t____________\n");
    }
    else if(b == 27)
    {
        input27:
            printf("\t\t\t____________\n");
            printf("\nEnter one float input:\n");
            if(scanf("%f",&v1)!=1 || v1 == 0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one float value!\n");
                printf("\t\t\tKindly , enter only positive integers\n");
                printf("\t\t\tKindly do not enter zero to avoid Math Error!\n");
                printf("\t\t\t____________\n");
                goto input27;
            }
            printf("\n--->| %f |\n\n",log10(v1));
            printf("\t\t\t____________\n");
    }
    else if(b == 28)
    {
        input28:
            printf("\t\t\t____________\n");
            printf("\nEnter a number(integer or float):\n");
            if(scanf("%f",&v1)!=1 || v1 < -1 || v1 > 1)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with a degree(float or integer) value!\n");
                printf("\t\t\tKindly enter degrees only from -1 to 1 as the trigonometric ratios exist from -1 to 1\n");
                printf("\t\t\t____________\n");
                goto input28;
            }
            rad = asin(v1)*180/3.141592654;
            printf("\n--->| %f |\n\n",rad);
            printf("\t\t\t____________\n");
    }
    else if(b == 29)
    {
        input29:
            printf("\t\t\t____________\n");
            printf("\nEnter a number(integer or float):\n");
            if(scanf("%f",&v1)!=1 || v1 < -1 || v1 > 1)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with a degree(float or integer) value!\n");
                printf("\t\t\tKindly enter degrees only from -1 to 1 as the trigonometric ratios exist from -1 to 1\n");
                printf("\t\t\t____________\n");
                goto input29;
            }
            rad = acos(v1)*180/3.141592654;
            printf("\n--->| %f |\n\n",rad);
            printf("\t\t\t____________\n");
    }
    else if(b == 30)
    {
        input30:
            printf("\t\t\t____________\n");
            printf("\nEnter a number(integer or float):\n");
            if(scanf("%f",&v1)!=1 || v1 < -1 || v1 > 1)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with a degree(float or integer) value!\n");
                printf("\t\t\tKindly enter degrees only from -1 to 1 as the trigonometric ratios exist from -1 to 1\n");
                printf("\t\t\t____________\n");
                goto input30;
            }
            rad = atan(v1)*180/3.141592654;
            printf("\n--->| %f |\n\n",rad);
            printf("\t\t\t____________\n");
    }
}

void fourth_ten_choices(int b)
{
    if(b == 31)
    {
        input31:
            printf("\t\t\t____________\n");
            printf("\nEnter a value(integer or float)\n");
            if(scanf("%f",&v1)!=1)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with a float or integer value!\n");
                printf("\t\t\t____________\n");
                goto input31;
            }
            printf("\n--->| %f |\n\n",sinh(v1));
            printf("\t\t\t____________\n");
    }
    else if(b == 32)
    {
        input32:
            printf("\t\t\t____________\n");
            printf("\nEnter a value(integer or float)\n");
            if(scanf("%f",&v1)!=1)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with a float or integer value!\n");
                printf("\t\t\t____________\n");
                goto input32;
            }
            printf("\n--->| %f |\n\n",cosh(v1));
            printf("\t\t\t____________\n");
    }
    else if(b == 33)
    {
        input33:
            printf("\t\t\t____________\n");
            printf("\nEnter a value(integer or float)\n");
            if(scanf("%f",&v1)!=1)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with a float or integer value!\n");
                printf("\t\t\t____________\n");
                goto input33;
            }
            printf("\n--->| %f |\n\n",tanh(v1));
            printf("\t\t\t____________\n");
    }
    else if(b == 34)
    {
        input34:
            printf("\t\t\t____________\n");
            printf("\nEnter a value(integer or float)\n");
            if(scanf("%f",&v1)!=1)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with a float or integer value!\n");
                printf("\t\t\tKindly enter degrees only from -450 to 450 \n");
                printf("\t\t\t____________\n");
                goto input34;
            }
            rad = asinh(v1)*180/3.141592654;
            printf("\n--->| %f |\n\n",rad);
            printf("\t\t\t____________\n");
    }
    else if(b == 35)
    {
        input35:
            printf("\t\t\t____________\n");
            printf("\nEnter a value(integer or float)\n");
            if(scanf("%f",&v1)!=1)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with a float or integer value!\n");
                printf("\t\t\tKindly enter degrees only from -450 to 450 \n");
                printf("\t\t\t____________\n");
                goto input35;
            }
            rad = acosh(v1)*180/3.141592654;
            printf("\n--->| %f |\n\n",rad);
            printf("\t\t\t____________\n");
    }
    else if(b == 36)
    {
        input36:
            printf("\t\t\t____________\n");
            printf("\nEnter a value(integer or float)\n");
            if(scanf("%f",&v1)!=1)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with a float or integer value!\n");
                printf("\t\t\tKindly enter degrees only from -450 to 450 \n");
                printf("\t\t\t____________\n");
                goto input36;
            }
            rad = atanh(v1)*180/3.141592654;
            printf("\n--->| %f |\n\n",rad);
            printf("\t\t\t____________\n");
    }
    else if(b == 37)
    {
        input37r1:
            printf("\t\t\t____________\n");
            printf("Enter the no.of.rows:-\n");
            if(scanf("%d",&r1)!=1 || r1<0 ||r1>5)
            {
                fflush(stdin);
                printf("Enter positive integers  below 5\n");
                printf("\t\t\t____________\n");
                goto input37r1;
            }
        input37r2:
            printf("\t\t\t____________\n");
            printf("Enter the no.of.columns:-\n");
            if(scanf("%d",&r2)!=1 || r2<0 ||r2>5)
            {
                fflush(stdin);
                printf("Enter positive integers  below 5\n");
                printf("\t\t\t____________\n");
                goto input37r2;
            }
        input37m1:
            printf("\t\t\t____________\n");
            printf("\n\n\t\t\tEnter  %d x %d matrix:\n",r1,r2);
            printf("Enter A matrix elements(integers or float):\n");
            for(i=0;i<r1;i++)
            {
                for(j=0;j<r2;j++)
                {
                    if(scanf("%f",&arr1[i][j])!=1)
                    {
                        fflush(stdin);
                        printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with an integer or float input!\n");
                        printf("\t\t\t____________\n");
                        goto input37m1;
                    }
                }
            }
        input37m2:
            printf("\t\t\t____________\n");
            printf("\n\n\t\t\tEnter  %d x %d matrix:\n",r1,r2);
            printf("Enter B matrix elements(integers or float):\n");
            for(i=0;i<r1;i++)
            {
                for(j=0;j<r2;j++)
                {
                    if(scanf("%f",&arr2[i][j])!=1)
                    {
                        fflush(stdin);
                        printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with an integer or float input!\n");
                        printf("\t\t\t____________\n");
                        goto input37m2;
                    }
                }
            }
            printf("\t\t\t____________\n");
                    for(i=0;i<r1;i++)
                    {
                        for(j=0;j<r2;j++)
                             printf("%f ",arr1[i][j]+arr2[i][j]);
                        printf("\n");
                    }
                    printf("\t\t\t____________\n");
    }
    else if(b == 38)
    {
        input38r1:
            printf("\t\t\t____________\n");
            printf("Enter the no.of.rows:-\n");
            if(scanf("%d",&r1)!=1 || r1<0 ||r1>5)
            {
                fflush(stdin);
                printf("Enter positive integers  below 5\n");
                printf("\t\t\t____________\n");
                goto input38r1;
            }
        input38r2:
            printf("\t\t\t____________\n");
            printf("Enter the no.of.columns:-\n");
            if(scanf("%d",&r2)!=1 || r2<0 ||r2>5)
            {
                fflush(stdin);
                printf("Enter positive integers  below 5\n");
                printf("\t\t\t____________\n");
                goto input38r2;
            }
        input38m1:
            printf("\t\t\t____________\n");
            printf("\n\n\t\t\tEnter  %d x %d matrix:\n",r1,r2);
            printf("Enter A matrix elements(integers or float):\n");
            for(i=0;i<r1;i++)
            {
                for(j=0;j<r2;j++)
                {
                    if(scanf("%f",&arr1[i][j])!=1)
                    {
                        fflush(stdin);
                        printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with an integer or float input!\n");
                        printf("\t\t\t____________\n");
                        goto input38m1;
                    }
                }
            }
        input38m2:
            printf("\t\t\t____________\n");
            printf("\n\n\t\t\tEnter  %d x %d matrix:\n",r1,r2);
            printf("Enter B matrix elements(integers or float):\n");
            for(i=0;i<r1;i++)
            {
                for(j=0;j<r2;j++)
                {
                    if(scanf("%f",&arr2[i][j])!=1)
                    {
                        fflush(stdin);
                        printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with an integer or float input!\n");
                        printf("\t\t\t____________\n");
                        goto input38m2;
                    }
                }
            }
        subch:
            printf("\n\t\t\tKindly say if you need A-B or B-A:-");
            printf("\n\t\t\tPress 1 for A-B\n\t\t\tPress 2 for B-A\n");
            if(scanf("%d",&n)!=1)
            {
                fflush(stdin);
                printf("\n\t\t\tKindly enter 1 or 2!");
                goto subch;
            }
            if(n == 1)
            {
                    printf("\t\t\t____________\n");
                    for(i=0;i<r1;i++)
                    {
                        for(j=0;j<r2;j++)
                             printf("%f ",arr1[i][j]-arr2[i][j]);
                        printf("\n");
                    }
                    printf("\t\t\t____________\n");
            }
            if(n == 2)
            {
                    printf("\t\t\t____________\n");
                    for(i=0;i<r1;i++)
                    {
                        for(j=0;j<r2;j++)
                             printf("%f ",arr2[i][j]-arr1[i][j]);
                        printf("\n");
                    }
                    printf("\t\t\t____________\n");
            }
    }
    else if(b == 39)
    {
        input39r1:
            printf("\t\t\t____________\n");
            printf("Enter the no.of.rows:-\n");
            if(scanf("%d",&r1)!=1 || r1<0 ||r1>5)
            {
                fflush(stdin);
                printf("Enter positive integers  below 5\n");
                printf("\t\t\t____________\n");
                goto input39r1;
            }
        input39r2:
            printf("\t\t\t____________\n");
            printf("Enter the no.of.columns:-\n");
            if(scanf("%d",&r2)!=1 || r2<0 ||r2>5)
            {
                fflush(stdin);
                printf("Enter positive integers  below 5\n");
                printf("\t\t\t____________\n");
                goto input39r2;
            }
        input39m1:
            printf("\t\t\t____________\n");
            printf("\n\n\t\t\tEnter  %d x %d matrix:\n",r1,r2);
            printf("Enter A matrix elements(integers or float):\n");
            for(i=0;i<r1;i++)
            {
                for(j=0;j<r2;j++)
                {
                    if(scanf("%f",&arr1[i][j])!=1)
                    {
                        fflush(stdin);
                        printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with an integer or float input!\n");
                        printf("\t\t\t____________\n");
                        goto input39m1;
                    }
                }
            }
        printf("\n\t\t\tFor multiplication, the column of the first matrix,\n\t\t\t should be equal to the row of second matrix:-");
        printf("\n\t\t\tSo, kindly enter the column number for second matrix");
        input39r4:
            printf("\t\t\t____________\n");
            printf("Enter the no.of.columns:-\n");
            if(scanf("%d",&r4)!=1 || r4<0 ||r4>5)
            {
                fflush(stdin);
                printf("Enter positive integers  below 5\n");
                printf("\t\t\t____________\n");
                goto input39r4;
            }
        input39m2:
            printf("\t\t\t____________\n");
            printf("\n\n\t\t\tEnter  %d x %d matrix:\n",r2,r4);
            printf("Enter B matrix elements(integers or float):\n");
            for(i=0;i<r2;i++)
            {
                for(j=0;j<r4;j++)
                {
                    if(scanf("%f",&arr2[i][j])!=1)
                    {
                        fflush(stdin);
                        printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with an integer or float input!\n");
                        printf("\t\t\t____________\n");
                        goto input39m2;
                    }
                }
            }
             printf("\t\t\t____________\n");
                    for(i=0;i<r1;i++)
                    {
                        for(j=0;j<r4;j++)
                        {
                            for(h=0;h<r2;h++)
                                mul[i][j]+=arr1[i][h]*arr2[h][j];
                        }
                    }
                    for(i=0;i<r1;i++)
                    {
                        for(j=0;j<r4;j++)
                            printf("%f ",mul[i][j]);
                        printf("\n");
                    }
                    printf("\t\t\t____________\n");

    }
    else if(b == 40)
    {
        input40r1:
            printf("\t\t\t____________\n");
            printf("Enter the no.of.rows:-\n");
            if(scanf("%d",&r1)!=1 || r1<0 ||r1>5)
            {
                fflush(stdin);
                printf("Enter positive integers  below 5\n");
                printf("\t\t\t____________\n");
                goto input40r1;
            }
            printf("\n\t\t\tAs inverse exists only for square matrix, column is same as row\n");
        input40m1:
            printf("\t\t\t____________\n");
            printf("\n\n\t\t\tEnter  %d x %d matrix:\n",r1,r1);
            printf("Enter A matrix elements(integers or float):\n");
            for(i=0;i<r1;i++)
            {
                for(j=0;j<r1;j++)
                {
                    if(scanf("%f",&a[i][j])!=1)
                    {
                        fflush(stdin);
                        printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with an integer or float input!\n");
                        printf("\t\t\t____________\n");
                        goto input40m1;
                    }
                }
            }
              d = determinant(a, r1);
              if (d == 0)
                printf("\nInverse of Entered Matrix is not possible as determinant is zero!\n");
              else
                cofactor(a, r1);
    }

}

void fifth_ten_choices(int b)
{
    if(b == 41)
    {
        input41r1:
            printf("\t\t\t____________\n");
            printf("Enter the no.of.rows:-\n");
            if(scanf("%d",&r1)!=1 || r1<0 ||r1>5)
            {
                fflush(stdin);
                printf("Enter positive integers  below 5\n");
                printf("\t\t\t____________\n");
                goto input41r1;
            }
        input41r2:
            printf("\t\t\t____________\n");
            printf("Enter the no.of.columns:-\n");
            if(scanf("%d",&r2)!=1 || r2<0 ||r2>5)
            {
                fflush(stdin);
                printf("Enter positive integers  below 5\n");
                printf("\t\t\t____________\n");
                goto input41r2;
            }
        input41m1:
            printf("\t\t\t____________\n");
            printf("\n\n\t\t\tEnter  %d x %d matrix:\n",r1,r2);
            printf("Enter A matrix elements(integers or float):\n");
            for(i=0;i<r1;i++)
            {
                for(j=0;j<r2;j++)
                {
                    if(scanf("%f",&arr1[i][j])!=1)
                    {
                        fflush(stdin);
                        printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with an integer or float input!\n");
                        printf("\t\t\t____________\n");
                        goto input41m1;
                    }
                }
            }
            for(i=0;i<r2;i++)
            {
                for(j=0;j<r1;j++)
                {
                    printf("%.2f ",arr1[j][i]);
                }
                printf("\n");
            }
    }
    else if(b == 42)
    {
        input42r1:
            printf("\t\t\t____________\n");
            printf("Enter the no.of.rows:-\n");
            if(scanf("%d",&r1)!=1 || r1<0 ||r1>5)
            {
                fflush(stdin);
                printf("Enter positive integers  below 5\n");
                printf("\t\t\t____________\n");
                goto input42r1;
            }
            printf("\n\t\t\tAs determinant exists only for square matrix, column is same as row\n");
        input42m1:
            printf("\t\t\t____________\n");
            printf("\n\n\t\t\tEnter  %d x %d matrix:\n",r1,r1);
            printf("Enter A matrix elements(integers or float):\n");
            for(i=0;i<r1;i++)
            {
                for(j=0;j<r1;j++)
                {
                    if(scanf("%f",&arr1[i][j])!=1)
                    {
                        fflush(stdin);
                        printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with an integer or float input!\n");
                        printf("\t\t\t____________\n");
                        goto input42m1;
                    }
                }
            }
            printf("--->| %.2f |",determinant(arr1,r1));
    }
    else if(b == 43)
    {
        input43:
            printf("\t\t\t____________\n");
            printf("\nEnter no.of.arguments(Maximum 10 inputs):\n");
            if(scanf("%d",&n)!=1 || n < 0 || n > 10)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with positive integer inputs less than 10...\n");
                printf("\t\t\t____________\n");
                goto input43;
            }

            chase43:
            printf("Enter %d integers:\n",n);
            for(i=0;i<n;i++)
            {
                if(scanf("%d",&arr[i])!=1)
                {
                    fflush(stdin);
                    printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with integers ..!\n");
                    printf("\t\t\t____________\n");
                    goto chase43;
                }
            }
            sort(arr, n);
            printf("\t\t\t____________\n");
    }
    else if(b == 44)
    {
        input44:
            printf("\t\t\t____________\n");
            printf("\nEnter the amount(integer or float):\n");
            if(scanf("%f",&v1)!=1 || v1 < 0.0 || v1 == 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one positive integer or float value!\n");
                printf("\t\t\t____________\n");
                goto input44;
            }
        input441:
            printf("\t\t\t____________\n");
            printf("\nEnter Discount Percentage(integer or float):\n");
            if(scanf("%f",&v2)!=1 || v2 < 0.0 || v2 == 0.0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one positive integer or float value!\n");
                printf("\t\t\t____________\n");
                goto input441;
            }
            printf("\n--->| %.2f rupees|",(v1 - (v1*v2/100)));
            printf("\n\t\t\t____________\n");
    }
    else if(b == 45)
    {
        input45:
            printf("\t\t\t____________\n");
            printf("\nEnter the year:\n");
            if(scanf("%d",&r)!=1)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one positive integer!\n");
                printf("\t\t\t____________\n");
                goto input45;
            }
            if(r%400 == 0)
            {
                printf("\n--->Leap Year");
                printf("\t\t\t____________\n");
            }
            else if(r%100==0)
            {
                printf("\n--->Not Leap Year");
                printf("\t\t\t____________\n");
            }
            else if(r%4==0)
            {
                printf("\n--->Leap Year");
                printf("\t\t\t____________\n");
            }
            else
            {
                printf("\n--->Not Leap Year");
                printf("\t\t\t____________\n");
            }
    }
    else if(b == 46)
    {
        printf("\nEnter the valid numbers(float or integer):-");
        r=0;
        while(scanf("%f%c",&v,&ch)!=0)
        {
            if(ch!='\n')
            {
                r+=1;
                sum+=v;
            }
            else
            {
                 r+=1;
                sum+=v;
                break;
            }

        }
        printf("\n--->| %.3f |",sum/r);
        printf("\t\t\t____________\n");
    }
    else if(b == 47)
    {
        input47:
            printf("\t\t\t____________\n");
            printf("\nEnter the no.of.terms(integer):\n");
            if(scanf("%d",&n)!=1 || n<0)
            {
                fflush(stdin);
                printf("\n\t\t\tInvalid Input.......\n\t\t\tTry Again with one  positive integer value!\n");
                printf("\n\t\t\tBecause, float values are not permitted in finding Fibonacci Series!\n");
                printf("\n\t\t\t____________\n");
                goto input47;
            }
            for(i=0;i<n;i++)
              printf("%d ",fib(i));
            printf("\n\t\t\t____________\n");
    }
    else if(b == 48)
    {
            printf("\t\tCome On!\n\t\tAdmire the interesting mathematics!\n\n");
            input48:
            printf("\t\tEnter a number:-\n\t\t");
            while(scanf("%d",&num)!= 1)
            {
                printf("\n\t\t\tKindly, enter only positive integer inputs!");
                printf("\n\t\t\t____________\n");
                goto input48;
            }
            ishappy(num);

            if(num>2 && num%2==0)
            goldbach(num);

            if(num%10==7||num%7==0)
            {
            printf("\n\t\t _________________________________________________________________");
            printf("\n\t\t| Buzz number:-                                                   |");
            printf("\n\t\t| ________________                                                |");
            printf("\n\t\t| A number is said to be Buzz Number,                             |");
            printf("\n\t\t| if it ends with 7 or is divisible by 7.                         |");
            printf("\n\t\t|                                                                 |");
            printf("\n\t\t|Eg:-                                                             |");
            printf("\n\t\t|  7, 14, 21, 28, 7007, 2457, 8907.....                           |");
            printf("\n\t\t|_________________________________________________________________|\n");
            printf("\n\t\t\t~~~~~~~~~~\n");
            printf("\t\t%d is a Buzz number",num);
            printf("\n\t\t\t~~~~~~~~~~\n");
            }

            if(checkAutomorphic(num))
            {
            printf("\n\t\t _________________________________________________________________");
            printf("\n\t\t| Automorphic number:-                                            |");
            printf("\n\t\t| ___________________                                             |");
            printf("\n\t\t| An automorphic number is an integer,                            |");
            printf("\n\t\t| whose square ends with the given integer itself                 |");
            printf("\n\t\t|                                                                 |");
            printf("\n\t\t|Eg:-                                                             |");
            printf("\n\t\t| 25^2 = 625                                                      |");
            printf("\n\t\t| 76^2 = 5776                                                     |");
            printf("\n\t\t| -->last two digits of the square represent the number itself.   |                                                   |");
            printf("\n\t\t|_________________________________________________________________|\n");
            printf("\n\t\t\t~~~~~~~~~~\n");
            printf("\t\t%d is an Automorphic number",num);
            printf("\n\t\t\t~~~~~~~~~~\n");
            }

            int temp=num;
            int n=num,N=num,num1=num,rem =0,sumOfDigits=0,x=0,rev=0,Sum=0;
            int t1=num1,p=num1;
            int c=1;
            while(p>9)
            {
                c++;
                p/=10;
            }
            while(num>0)
            {
                r=num%10;
                Sum=Sum+pow(r,c);
                num=num/10;
            }
            if(temp==Sum)
            {
            printf("\n\t\t _________________________________________________________________");
            printf("\n\t\t| Armstrong[Narcissistic] number:-                                |");
            printf("\n\t\t| ________________________________                                |");
            printf("\n\t\t| An armstrong number is a number which is,                       |");
            printf("\n\t\t| equal to the sum of the nth power of its individual digits,     |");
            printf("\n\t\t| where n is the number of digits of the integer.                 |");
            printf("\n\t\t|                                                                 |");
            printf("\n\t\t|Eg:- 0, 1, 153, 370, 371, 407, 1634, 8208, 9474, 54748, 92727,.. |");
            printf("\n\t\t| 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153                            |");
            printf("\n\t\t| 1^4 + 6^4 + 3^4 + 4^4 =  1 + 1296 + 81 + 256 = 1634             |");
            printf("\n\t\t|_________________________________________________________________|\n");
            printf("\n\t\t\t~~~~~~~~~~\n");
            printf("\t\t%d is an Armstrong (or) Narcissistic number",temp);
            printf("\n\t\t\t~~~~~~~~~~\n");
            }

            Sum=0,rem =0,n=temp;
            while(temp > 0)
            {
                Sum = Sum + temp%10;
                temp/=10;
            }
            if(n%Sum == 0)
            {
            printf("\n\t\t _________________________________________________________________");
            printf("\n\t\t| Harshad[Niven] number:-                                         |");
            printf("\n\t\t| ________________________________                                |");
            printf("\n\t\t| A number is said to be the Harshad number,                      |");
            printf("\n\t\t| if it is divisible by the sum of its digits.                    |");
            printf("\n\t\t|                                                                 |");
            printf("\n\t\t|Eg:- 18, 156, 1729                                               |");
            printf("\n\t\t| 1 + 5 + 6 = 12, and 156 is divisible by 12                      |");
            printf("\n\t\t| 1 + 8 = 9, and 18 is divisible by 9                             |");
            printf("\n\t\t|_________________________________________________________________|\n");
            printf("\n\t\t\t~~~~~~~~~~\n");
            printf("\t\t%d is a Harshad (or) Niven number", n);
            printf("\n\t\t\t~~~~~~~~~~\n");
            }
            while(n > 0)
            {
                sumOfDigits += n % 10;
                n/=10;
            }
            n = sumOfDigits;
            while(n > 0)
            {
                rev = rev*10 + n % 10;
                n = n / 10;
            }
            if(rev*sumOfDigits == N)
            {
            printf("\n\t\t _________________________________________________________________");
            printf("\n\t\t| Magic number:-                                                  |");
            printf("\n\t\t| _____________                                                   |");
            printf("\n\t\t| A number is said to be the Magic number,                        |");
            printf("\n\t\t| if it is equal to the product of sum of all digits of a number  |");
            printf("\n\t\t| and reverse of this sum.                                        |");
            printf("\n\t\t|                                                                 |");
            printf("\n\t\t|Eg:- 1729                                                        |");
            printf("\n\t\t| 1 + 7 + 2 + 9 = 19, so sum = 19, reverse of sum = 91            |");
            printf("\n\t\t| 19 * 91 = 1729                                                  |");
            printf("\n\t\t|_________________________________________________________________|\n");
            printf("\n\t\t\t~~~~~~~~~~\n");
            printf("\t\t%d is a Magic Number",N);
            printf("\n\t\t\t~~~~~~~~~~\n");
            }

            while (N != 1)
            {
            if (N % 5 == 0)N /= 5;
            else if (N % 3 == 0) N /= 3;
            else if (N % 2 == 0) N /= 2;
            else{
                x = 1;
                break;
            }}
            if (x==0)
            {
            printf("\n\t\t _________________________________________________________________");
            printf("\n\t\t| Ugly number:-                                                   |");
            printf("\n\t\t| _____________                                                   |");
            printf("\n\t\t| Ugly number is a number,                                        |");
            printf("\n\t\t| whose only prime factors are, 2, 3 or 5.                        |");
            printf("\n\t\t|                                                                 |");
            printf("\n\t\t|Eg:- 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, …                       |");
            printf("\n\t\t| 5 x 2 = 10                                                      |");
            printf("\n\t\t| 2 x 2 x 3 = 6                                                   |");
            printf("\n\t\t|_________________________________________________________________|\n");
            printf("\n\t\t\t~~~~~~~~~~\n");
            printf("\t\t%d is an Ugly number",t1);
            printf("\n\t\t\t~~~~~~~~~~\n");
            }
            extra_function(t1);
    }
    else if(b == 49)
    {
        input49:
            printf("\t\tEnter the number of rows:-\n\t\t");
            while(scanf("%d",&rows)!= 1)
            {
                printf("\n\t\t\tKindly, enter only positive integer inputs!");
                printf("\n\t\t\t____________\n");
                goto input49;
            }
        printf("\n");

        for(i=0; i<rows; i++)
        {
            for(space=1; space <= rows-i; space++)
                printf(" ");

            for(j=0; j <= i; j++)
            {
                if (j==0 || i==0) coef = 1;
                else  coef = coef*(i-j+1)/j;
                printf("%4d", coef);
            }
            printf("\n\n");
        }
    }
    else if(b == 50)
    {
        printf("\n\t               _____________________________________________________________________________________");
        printf("\n\t              /                                                                                    /|");
        printf("\n\t             /                                      HELP                                          / |");
        printf("\n\t            /____________________________________________________________________________________/  |");
        printf("\n\t           / 0) Off --> Switch Off the Calculator                                               /   |");
        printf("\n\t          / 1) Sum --> Summation(both addition and subtraction)[a + b -c]                      /    |");
        printf("\n\t         / 2) * --> Performs multiplication(both integer & float)                             /     |");
        printf("\n\t        / 3) / --> Performs Division[denominator should not be less than zero]               /      |");
        printf("\n\t       / 4) mod --> Returns the remainder[denominator should not be less than zero          /       |");
        printf("\n\t      / 5)  ^ -->  Returns the exponent of first number to second number                   /        |");
        printf("\n\t     / 6) abs --> Returns the Positive value of the number                                /         |");
        printf("\n\t    / 7) inv --> Let the number be n, this returns the value of 1/n                      /          |");
        printf("\n\t   / 8) hyp --> When opposite and adjacent sides are given, it returns the hypotenuse   /           |");
        printf("\n\t  / 9) ln --> Returns the natural Logarithm of the input                               /            |");
        printf("\n\t / 10) e --> Returns the exponentiation of the input                                  /             |");
        printf("\n\t/____________________________________________________________________________________/              |");
        printf("\n\t|              |_____________________________________________________________________|______________|");
        printf("\n\t|             /                                                                      |             /|");
        printf("\n\t|            /                                      HELP                             |            / |");
        printf("\n\t|           /________________________________________________________________________|___________/  |");
        printf("\n\t|          / 11) sin --> Returns the sine of the input                               |          /   |");
        printf("\n\t|         / 12) cos --> Returns the cosine of the input                              |         /    |");
        printf("\n\t|        / 13) tan --> Returns the tangent of the input                              |        /     |");
        printf("\n\t|       / 14) nPr --> Computes permutation and returns the value                     |       /      |");
        printf("\n\t|      / 15) nCr --> Computes combination and returns the value                      |      /       |");
        printf("\n\t|     / 16) LCM -->  Returns the Least Common Multiple for the given array of numbers|     /        |");
        printf("\n\t|    / 17) GCD --> Returns the Greatest Common Divisor for the given array of numbers|    /         |");
        printf("\n\t|   / 18) Factors --> Displays all the factors of the given number                   |   /          |");
        printf("\n\t|  / 19) SI --> Gets Principal,rate,No.o.years & displays Simple Interest            |  /           |");
        printf("\n\t| / 20) CI --> Gets Principal,rate,No.o.years & displays Compount Interest           | /            |");
        printf("\n\t|/___________________________________________________________________________________|/             |");
        printf("\n\t|              |_____________________________________________________________________|______________|");
        printf("\n\t|             /                                                                      |             /|");
        printf("\n\t|            /                                      HELP                             |            / |");
        printf("\n\t|           /________________________________________________________________________|___________/  |");
        printf("\n\t|          / 21) Percent --> Gets Whole value & Part Value & displays Percentage value          /   |");
        printf("\n\t|         / 22) ceil --> Returns the smallest integer that is bigger than or equal to a number /    |");
        printf("\n\t|        / 23) floor --> Returns the largest integer less than or equal to a given number     /     |");
        printf("\n\t|       / 24) sqrt --> Returns square root of given value                            |       /      |");
        printf("\n\t|      / 25) cbrt --> Returns cube root of given value                               |      /       |");
        printf("\n\t|     / 26) fact -->  Returns the factorial value of the number                      |     /        |");
        printf("\n\t|    / 27) log10 --> Returns the base 10 logarithm of the  number                    |    /         |");
        printf("\n\t|   / 28) sin^-1 --> Returns the inverse sine of the input                           |   /          |");
        printf("\n\t|  / 29) cos^-1 --> Returns the inverse cosine of the input                          |  /           |");
        printf("\n\t| / 30) tan^-1 --> Returns the inverse tangent of the input                          | /            |");
        printf("\n\t|/___________________________________________________________________________________|/             |");
        printf("\n\t|              |_____________________________________________________________________|______________|");
        printf("\n\t|             /                                                                      |             /|");
        printf("\n\t|            /                                      HELP                             |            / |");
        printf("\n\t|           /________________________________________________________________________|___________/  |");
        printf("\n\t|          / 31) sinh --> Returns the hyperbolic sine of the input                   |          /   |");
        printf("\n\t|         / 32) cosh --> Returns the hyperbolic cosine of the input                  |         /    |");
        printf("\n\t|        / 33) tanh --> Returns the hyperbolic tangent of the input                  |        /     |");
        printf("\n\t|       / 34) sinh^-1 --> Returns the inverse hyperbolic sine of the input           |       /      |");
        printf("\n\t|      / 35) cosh^-1 --> Returns the inverse hyperbolic cosine of the input          |      /       |");
        printf("\n\t|     / 36) tanh^-1 --> Returns the inverse hyperbolic tangent of the input          |     /        |");
        printf("\n\t|    / 37) Mat+ --> Performs Matrix Addition for two matrices A & B[A + B]           |    /         |");
        printf("\n\t|   / 38) Mat- --> Performs Matrix Difference for two matrices A & B[A-B or B-A]     |   /          |");
        printf("\n\t|  / 39) Mat* --> Performs Matrix Product for two matrices A & B[A*B]                |  /           |");
        printf("\n\t| / 40) Matinv --> Returns the inverse of the matrix, when determinant is not zero   | /            |");
        printf("\n\t|/___________________________________________________________________________________|/             |");
        printf("\n\t|             |______________________________________________________________________|______________|");
        printf("\n\t|             /                                                                      |              /");
        printf("\n\t|            /                                      HELP                             |             /");
        printf("\n\t|           /________________________________________________________________________|____________/");
        printf("\n\t|          / 41) Trans --> Returns the transpose of the given matrix                 |           /");
        printf("\n\t|         / 42) Det --> Returns the determinant of the given matrix                  |          /");
        printf("\n\t|        / 43) Sort --> Sorts the given array of elements in ascending or descending order     /");
        printf("\n\t|       / 44) Discount --> Gets the amount & discount percentage, returns discounted amount   /");
        printf("\n\t|      / 45) Leap_y --> Displays whether the given year is leap year or not          |       /");
        printf("\n\t|     / 46) Avg --> Returns the Average of the given list of numbers                 |      /");
        printf("\n\t|    / 47) Fibonacci Series --> Displays fibonacci series upto specified no.of.terms |     /");
        printf("\n\t|   / 48) Speciality Of a Number -->Displays how the number is special from other numbers /");
        printf("\n\t|  / 49)  Pascal Triangle --> Displays Pascal Triangle for given no.on.rows          |   /");
        printf("\n\t| /                                           ~~~~~                                  |  /");
        printf("\n\t|/___________________________________________________________________________________|_/");
    }
}

void extra_function(int num)
{
            int num1=num;
            int Sum=0;
            while(num>0)
            {
                int fact=1;
                for(i=1;i<=num%10;i++)
                    fact=fact*i;
                Sum=Sum+fact;
                num=num/10;
            }
            if(Sum==num1){
            printf("\n\t\t _________________________________________________________________");
            printf("\n\t\t| Special[Strong, Krishna Murthy] number:-                        |");
            printf("\n\t\t| _______________________________________                         |");
            printf("\n\t\t| Strong number is a special number, whose                        |");
            printf("\n\t\t| sum of factorial of digits is equal to the original number.     |");
            printf("\n\t\t|                                                                 |");
            printf("\n\t\t|Eg:- 1, 2, 145, 40585 .....                                      |");
            printf("\n\t\t| 1! + 4! + 5! = 1 + 24 + 120 = 145                               |");
            printf("\n\t\t| 4! + 0! + 5! + 8! + 5! = 24 + 1 + 120 + 40320 + 120 = 40585     |");
            printf("\n\t\t|_________________________________________________________________|\n");
            printf("\n\t\t\t~~~~~~~~~~\n");
            printf("\t\t%d is a Special (or) Krishna Murthy's Number (or) Strong Number",num1);
            printf("\n\t\t\t~~~~~~~~~~\n");
            }

            int square = 0;
            int sum_digits = 0;
            //Calculate square of given number
            square = (num1 * num1);
            while (square != 0)
            {
                sum_digits = (sum_digits + (square % 10));
                square = (square / 10);
            }
            if(sum_digits == num1){
            printf("\n\t\t _________________________________________________________________");
            printf("\n\t\t| Neon number:-                                                   |");
            printf("\n\t\t| _____________                                                   |");
            printf("\n\t\t| A neon number is a positive integer, which                      |");
            printf("\n\t\t| is equal to the sum of the digits of its square.                |");
            printf("\n\t\t|                                                                 |");
            printf("\n\t\t|Eg:-                                                             |");
            printf("\n\t\t| 9^2 = 81 , and 8 + 1 = 9                                        |");
            printf("\n\t\t|_________________________________________________________________|\n");
            printf("\n\t\t\t~~~~~~~~~~\n");
            printf("\t\t%d is a Neon Number",num1);
            printf("\n\t\t\t~~~~~~~~~~\n");
            }
            Sum=0;
            for(int i = 1; i <= num1/2; i++)
            {
                if (num1%i==0)
                    Sum = Sum + i;
            }
            if (Sum == num1){
            printf("\n\t\t _________________________________________________________________");
            printf("\n\t\t| Perfect number:-                                                |");
            printf("\n\t\t| ______________                                                  |");
            printf("\n\t\t| Perfect number,is  a positive integer that                      |");
            printf("\n\t\t| is equal to the sum of its proper divisors.                     |");
            printf("\n\t\t|                                                                 |");
            printf("\n\t\t|Eg:- 6, 28, 496, and 8,128                                       |");
            printf("\n\t\t| Divisors of  6 = 1, 2, 3 and 1 + 2 + 3 = 6                      |");
            printf("\n\t\t| Divisors of  28 = 1, 2, 4, 7, 14 and 1 + 2 + 4 + 7 + 14 = 28    |");
            printf("\n\t\t|_________________________________________________________________|\n");
            printf("\n\t\t\t~~~~~~~~~~\n");
            printf("\t\t%d is a Perfect Number",num1);
            printf("\n\t\t\t~~~~~~~~~~\n");
            }

            r1=Rev(num1 * num1);
            int sq=(int)sqroot(r1);
            r2=Rev(sq);
            if(num1==r2)
            {
            printf("\n\t\t _________________________________________________________________");
            printf("\n\t\t| Adam number:-                                                   |");
            printf("\n\t\t| ______________                                                  |");
            printf("\n\t\t| Adam number is a number when reversed, the square of the number |");
            printf("\n\t\t| and the square of the reversed number should be numbers         |");
            printf("\n\t\t| which are reverse of each other.                                |");
            printf("\n\t\t|                                                                 |");
            printf("\n\t\t|Eg:-0, 1, 2, 3, 11, 12, 13, 21, 22, 31, 101, 102, 103, 111,      |");
            printf("\n\t\t|  112 , 113, 121, 122, 201, 202, 211, 212, 221, 301, 311         |");
            printf("\n\t\t|                                                                 |");
            printf("\n\t\t| 12, Square of 12 = 144                                          |");
            printf("\n\t\t| Reverse of 12 = 21                                              |");
            printf("\n\t\t| Square of 21 = 441 which is the reverse of 12^2                 |");
            printf("\n\t\t|_________________________________________________________________|\n");
            printf("\n\t\t\t~~~~~~~~~~\n");
            printf("\t\t%d is an Adam Number",num1);
            printf("\n\t\t\t~~~~~~~~~~\n");

            }

            Sum=0;
            int num2 = num1;
            while(num2 != 0)
            {
                int b = num2%10;
                Sum = Sum+b;
                num2/=10;
            }
            if(Sum*Sum*Sum == num1){
            printf("\n\t\t _________________________________________________________________");
            printf("\n\t\t| Dudeney number:-                                                |");
            printf("\n\t\t| ______________                                                  |");
            printf("\n\t\t| A Dudeney number is a positive integer for which the sum of its |");
            printf("\n\t\t| decimal digits is equal to the cube root of the number.         |");
            printf("\n\t\t|                                                                 |");
            printf("\n\t\t|Eg:-                                                             |");
            printf("\n\t\t| 8^3 = 512 and 5 + 1 + 2 = 8                                     |");
            printf("\n\t\t| 27^3 = 19683 and 1 + 9 + 6 + 8 + 3 = 27                         |");
            printf("\n\t\t|_________________________________________________________________|\n");
            printf("\n\t\t\t~~~~~~~~~~\n");
            printf("\t\t%d is a Dudeney number ",num1);
            printf("\n\t\t\t~~~~~~~~~~\n");
            }

            if(num1 == Rev(num1)){
            printf("\n\t\t _________________________________________________________________");
            printf("\n\t\t| Palindromic numbers:-                                           |");
            printf("\n\t\t| __________________                                              |");
            printf("\n\t\t| Numbers that read the same backwards and forwards.              |");
            printf("\n\t\t|                                                                 |");
            printf("\n\t\t|Eg:-                                                             |");
            printf("\n\t\t| 1221 = reverse of 1221 = 1221                                   |");
            printf("\n\t\t|_________________________________________________________________|\n");
            printf("\n\t\t\t~~~~~~~~~~\n");
            printf("\t\t%d is a Palindromic Number",num1);
            printf("\n\t\t\t~~~~~~~~~~\n");
            }

            int flag =0;
            for(i=1;i<=num1;i++)
            {
                if(i*(i+1)==num1)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
            {
            printf("\n\t\t _________________________________________________________________");
            printf("\n\t\t| Pronic[Rectangular, Oblong, Heteromecic] numbers:-              |");
            printf("\n\t\t| ________________________________________________                |");
            printf("\n\t\t| A pronic number is a number which is represented by the product |");
            printf("\n\t\t| of two consecutive numbers , that is a number of the form       |");
            printf("\n\t\t| 'n x (n+1)' .                                                   |");
            printf("\n\t\t|                                                                 |");
            printf("\n\t\t| Eg:- 0, 2, 6, 12, 20, 30, 42, 56, 72, 90 etc.                   |");
            printf("\n\t\t| 72 = 8 x 9 = 8 x (8 + 1)                                        |");
            printf("\n\t\t| 12 = 3 x 4 = 3 x (3 + 1)                                        |");
            printf("\n\t\t|_________________________________________________________________|\n");
            printf("\n\t\t\t~~~~~~~~~~\n");
            printf("\t\t%d is a Pronic (or) Rectangular (or) Oblong Number",num1);
            printf("\n\t\t\t~~~~~~~~~~\n");
            }
}
int facto(int n)//*
{
    int h;
    if(n==0 || n==1)
         return 1;
    else
        return n*facto(n-1);
}
int gcdforlcm(int a,int b)//*
{
    if(b==0)
        return a;
    else
        return gcdforlcm(b,a%b);
}
int findlcm(int arr[], int n)//*
{
    int ans = arr[0];
    // ans contains LCM of arr[0], ..arr[i]
    // after i'th iteration,
    for (i  = 1; i < n; i++)
        ans = (((arr[i] * ans)) /(gcdforlcm(arr[i], ans)));

    return ans;
}
int gcdforgcd(int a, int b)//*
{
    if (a == 0)
        return b;
    return gcdforgcd(b % a, a);
}
int findGCD(int arr[], int n)//*
{
    int result = arr[0];
    for (i = 1; i < n; i++)
    {
        result = gcdforgcd(arr[i], result);

        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
float determinant(float a[5][5], float k)
{

  float s = 1, det = 0, b[5][5];

  int i, j, m, n, c;

  if (k == 1)

    {

     return (a[0][0]);

    }

  else

    {

     det = 0;

     for (c = 0; c < k; c++)

       {

        m = 0;

        n = 0;

        for (i = 0;i < k; i++)

          {

            for (j = 0 ;j < k; j++)

              {

                b[i][j] = 0;

                if (i != 0 && j != c)

                 {

                   b[m][n] = a[i][j];

                   if (n < (k - 2))

                    n++;

                   else

                    {

                     n = 0;

                     m++;

                     }

                   }

               }

             }

          det = det + s * (a[0][c] * determinant(b, k - 1));

          s = -1 * s;

          }

    }



    return (det);

}
void cofactor(float num[5][5], float f)
{

 float b[5][5], fac[5][5];

 int p, q, m, n, i, j;

 for (q = 0;q < f; q++)

 {

   for (p = 0;p < f; p++)

    {

     m = 0;

     n = 0;

     for (i = 0;i < f; i++)

     {

       for (j = 0;j < f; j++)

        {

          if (i != q && j != p)

          {

            b[m][n] = num[i][j];

            if (n < (f - 2))

             n++;

            else

             {

               n = 0;

               m++;

               }

            }

        }

      }

      fac[q][p] = pow(-1, q + p) * determinant(b, f - 1);

    }

  }

  transpose(num, fac, f);

}
void transpose(float num[5][5], float fac[5][5], float r)
{

  int i, j;

  float b[5][5], inverse[5][5], d;



  for (i = 0;i < r; i++)

    {

     for (j = 0;j < r; j++)

       {

         b[i][j] = fac[j][i];

        }

    }

  d = determinant(num, r);

  for (i = 0;i < r; i++)

    {

     for (j = 0;j < r; j++)

       {

        inverse[i][j] = b[i][j] / d;

        }

    }

   printf("\n\n\nThe inverse of matrix is : \n");



   for (i = 0;i < r; i++)

    {

     for (j = 0;j < r; j++)

       {

         printf("\t%f", inverse[i][j]);

        }

    printf("\n");

     }

}
void sort(int arr[10],int n)
{
    printf("\n\t\t\tPress 1 for Ascending Order\n\t\t\tPress 2 for Descending Order\n");
    printf("\t\t\t____________\n");
    scanf("%d",&r);
    if(r == 1){
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                r1 = arr[i];
                arr[i] = arr[j];
                arr[j] = r1;
            }
        }
    }
    }
    else if(r == 2)
    {
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] < arr[j])
            {
                r1 = arr[i];
                arr[i] = arr[j];
                arr[j] = r1;
            }
        }
    }
    }
    printf("\n\t\t\tSorted Array\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
int fib(int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else
     return fib(n-1) + fib(n-2);
}
int ishappy(num)
{
    int result = num;
    while(result != 1 && result != 4)
        result = happy(result);
            //Happy number always ends with 1
    if(result == 1)
    {
            printf("\n\t\t ________________________________________________________");
            printf("\n\t\t| Happy number:-                                         |");
            printf("\n\t\t| ______________                                         |");
            printf("\n\t\t| The happy number can be defined as a number            |");
            printf("\n\t\t| which will yield ( 1 ) when it is replaced             |");
            printf("\n\t\t| by the sum of the square of its digits repeatedly.     |");
            printf("\n\t\t|                                                        |");
            printf("\n\t\t| Eg: 7, 28, 32, 100, 320,.....                          |");
            printf("\n\t\t|                                                        |");
            printf("\n\t\t| 32 is a Happy Number-->                                |");
            printf("\n\t\t| 3^2 + 2^2 = 13                                         |");
            printf("\n\t\t| 1^2 + 3^2 = 10                                         |");
            printf("\n\t\t| 1^2 + 0^2 = ( 1 )                                      |");
            printf("\n\t\t|________________________________________________________|\n");
            printf("\n\t\t\t~~~~~~~~~~");
            printf("\n\t\t--> %d is a happy number", num);
            printf("\n\t\t\t~~~~~~~~~~");
    }
}
int happy(num)
{
     int rem = 0, sum = 0;
     //Calculates the sum of squares of digits
     while(num > 0)
     {
        rem = num%10;
        sum = sum + (rem*rem);
        num = num/10;
     }
     return sum;
}
void goldbach(int g)
{
    int i = 2;

    for (int j = g-i; j > 2; j--)
    {
        if(is_prime(i) == 1 && is_prime(j) == 1)
        {
            printf("\n\t\t _________________________________________________________________");
            printf("\n\t\t| Goldbach number:-                                               |");
            printf("\n\t\t| ________________                                                |");
            printf("\n\t\t| A Goldbach number is a positive even integer                    |");
            printf("\n\t\t| that can be expressed as the sum of two odd primes.             |");
            printf("\n\t\t| All even integer numbers greater than 2 are Goldbach numbers.   |");
            printf("\n\t\t|                                                                 |");
            printf("\n\t\t|Eg:-                                                             |");
            printf("\n\t\t| 6 = 3 + 3                                                       |");
            printf("\n\t\t| 10 = 3 + 7                                                      |");
            printf("\n\t\t| 10 = 5 + 5                                                      |");
            printf("\n\t\t|_________________________________________________________________|\n");
            printf("\n\t\t\t~~~~~~~~~~\n");
            printf("\t\t%d is a GoldBach Number",g);
            printf("\n\t\t-->%d = %d + %d",g,i,j);
            printf("\n\t\t\t~~~~~~~~~~\n");
            break;
        }
        i++;
    }
}
int is_prime(int n)
{
    int flag = 1;
    for (int j = 2; j < n/2; j++)
    {
        if((n%j) == 0){
            return flag-1;
        }
    }
    return flag;
}
int checkAutomorphic(int num)
{
    int square = num * num;

    while (num > 0)
    {
        if (num % 10 != square % 10)
            return 0;

        // Reduce N and square
        num = num / 10;
        square = square / 10;
    }
    return 1;
}
int Rev(int n)
{
      int temp=0,r=0,t=0;
      temp=n;
      while(temp>0)
      {
            r=temp%10;
            t=t*10+r;
            temp=temp/10;
      }
      return t;
}
int sqroot(int n)
{
      int sq=0;
      sq=(int)sqrt(n);
      return sq;
}
