#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double func (double,double,double);
void season (int);
void revrse();

int main  ()
{
        int choice,i,a,b,c;

        printf("\t\tMy First C project");

do {

        printf("\n\n");
        printf("\t0. Exit\n");
        printf("\t1. Solving the mathematical equation\n");
        printf("\t2. Seasons and day counts according to month number\n");
        printf("\t3. Printing keybord inputs in reverse\n");
        printf("\t4. About me\n");

        printf("\nEnter your selection : ");
        scanf("%d",&choice);


        switch (choice) {

            case 0:
                    printf("\aAre you Sure? Y/N ? = ");
                        char s;
                            scanf("%s",&s);

                        if( s == 'y' || s == 'Y') { //user should enter Yes for the exit.
                            break;
                            }
                        else  //otherwise program will continiue.
                            choice=1;
                    break;

            case 1:
                    printf("\n1-Solving the mathematical equation");
                    printf("\nEnter three positive number ordinally (R - S - N) : ");
                    scanf("%d%d%d",&a,&b,&c);


                        while (a<1 || b<1 || c<1) {
                            printf("\aInvalid number,Enter again : ");
                            scanf("%d%d%d",&a,&b,&c);
                        }
                            printf("Result is:%lf",func(a,b,c));
                    break;

            case 2:
                    printf("\n2-Seasons and day counts according to month number");
                        printf("\nEnter a month number between [1-12] : ");
                            scanf("%d",&i);

                                while (i<=0 || i>12) {

                                    printf("\aInvalid number,Enter again : ");
                                    scanf("%d",&i);
                                }
                                    season(i);
                    break;

            case 3:
                    printf("\nPrinting keybord inputs in reverse : ");
                    revrse(getchar());
                    break;

            case 4:
                    printf("\nProduct by Muhammed Emin Cevikol - 120315013\n");
                    break;

            default:
                    printf("\aInvalid number !!!");
                    break;
            }
    } while (choice != 0);
}

double func (double r, double s, double n){
    double mult=1, sum=0,   k,j;

                for(k=1; k<=r; k++) {
                    mult *= (3*k*k*k + 5)/(k*k);
                }
                for(j=1; j<=s; j++) {
                    sum +=sqrt(3*j*j*j +j+2)/(2*j);
                }
                return n*mult/sum; // N times
        }

void season (int i) {
        int j=31;   // j is the day count

        if(i==4 || i==9 || i==11) // i is month number
            j==30;

        if (i==12 || i==1)
            printf("The season is Winter day count is %d \n",j);
        else if (i==3 || i==4 || i==5)
            printf("The season is Spring day count is %d \n",j);
        else if (i==6 || i==7 || i==8)
            printf("The season is Summer day count is %d \n",j);
        else if(i==9 || i==10 || i==11)
            printf("The season is Autumn day count is %d \n",j);

        else if (i==2) {
            printf("\aThe February is a leap year. You should enter a year for day count=");
            scanf("%d",&j);
                    while (j<0) {
                        printf("\aInvalid number,Enter again : ");
                        scanf("%d",&j);
                    }
            if(j%4==0)
                printf("The season is Winter day count is 29 \n");
            else
                printf("The season is Winter day count is 28 \n");
        }
}

void revrse()
{
    char c=getchar();
        if(c != '\n') {
            revrse();
        }
	printf("%c",c);
}
