#include <stdio.h>

int main(){
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
   if(year/4==0){
    printf("The year is leap year\n");
   }
   else{
    printf("The year is not a leap year\n");
   }
    
    return 0;
}
