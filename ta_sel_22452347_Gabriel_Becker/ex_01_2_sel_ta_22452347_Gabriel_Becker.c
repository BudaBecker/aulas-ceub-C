#include <stdio.h>
#include <time.h>

int main(void) {
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    int today_day = tm.tm_mday;
    int today_month = tm.tm_mon + 1;
    int today_year = tm.tm_year + 1900;
    int birth_day, birth_month, birth_year, age;
    
    printf("Em qual ano vc nasceu? ");
    scanf("%d",&birth_year);
    printf("Em qual mes vc nasceu? ");
    scanf("%d",&birth_month);
    
    if (birth_month < today_month){
        age = today_year - birth_year;
    }
    else if(birth_month > today_month){
        age = today_year - birth_year - 1;
    }
    else if(birth_month == today_month){
        printf("Em qual dia vc nasceu? ");
        scanf("%d",&birth_day);
        if(birth_day < today_day || birth_day == today_day){
            age = today_year - birth_year;
        }
        else{
            age = today_year - birth_year - 1;
        }
    }

    if(age >= 16){
        printf("Vc tem %d anos, pode votar!",age);
    }
    else{
        printf("Vc tem %d anos, nao pode votar!",age);
    }
}