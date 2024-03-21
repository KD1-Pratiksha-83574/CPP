#include<stdio.h>

typedef struct Date {
    int day;
    int month;
    int year;
}date_t;

    void printDateOnConsole(struct Date* ptrDate)
    {
        printf("the day is %d \n",ptrDate->day);
        printf("the month is %d \n",ptrDate->month);
        printf("the year is %d \n",ptrDate->year);
    }

    void acceptDateFromConsole(struct Date *ptrDate)
   
    {
        printf("Enter the day \n");
        scanf("%d",&ptrDate->day);

        printf("Enter the month \n");
        scanf("%d",&ptrDate->month);

        printf("Enter the year \n");
        scanf("%d",&ptrDate->year);
    }


int main(){
    date_t d;
    int n;

  do
    {
        printf("0. EXIT \n");
        printf("1.Accept Date \n");
        printf("2.Display Date \n");
        printf("Enter your choice !!!\n");
        scanf("%d",&n);

        switch (n)
        {
        case 0:
            printf("Exit/n");
            break;
        case 1:
            acceptDateFromConsole(&d);
            break;
        case 2:
            printDateOnConsole(&d);
            break;
        default:
            printf("wrong choice !!!");
            break;
        }
    } while (n!= 0);
    return 0;
}
