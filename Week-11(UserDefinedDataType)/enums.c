#include<stdio.h>

enum WeekDays {
    SUNDAY,
    MONDAY,
    WEDNESDAY,
    THURSDAY,
    TUESDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum WeekDays d1, d2;
    d1 = WEDNESDAY;
    d2 = SATURDAY;
    printf("%d %d", d1, d2);
}