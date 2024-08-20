///Clock project

#include<stdio.h>
#include<windows.h>
int main()
{
    int hour, min,sec;
    int d=1000;
    printf("Set Time: \n");
    scanf("%d %d %d",&hour,&min,&sec);

    if(hour>12 || min >60 || sec>60)
    {
        printf("ERROR !! \n");
        exit(0);   ///exit function

    }

    while(1)  /// infinite loop
    {
        system("cls");
        sec++;
        if(sec>59)
        {
            min++;
            sec=0;
        }
        if(min>59)
        {
            hour++;
            min=0;
        }

        if(hour>12)
        {
            hour=1;
        }

        printf("Clock:\n");
        printf("%.02d:%.02d:%.02d",hour,min,sec);
        Sleep(d);     /// this function used for slows down the loop
      /// this funstion used for clear the screen

/// thank you....!!
    }

}
