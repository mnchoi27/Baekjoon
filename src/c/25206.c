#include <stdio.h>

int main(void) {
    char subject_name[50], grade[3];
    double total_grade = 0, total_credit = 0;
    double credit;

    for(int i = 0; i < 20; i++) {
        scanf("%s %lf %s", subject_name, &credit, grade);
        // cal total grade from grade
        if(grade[0] == 'A' && grade[1] == '+')
            total_grade += credit * 4.5;
        else if(grade[0] == 'A' && grade[1] == '0')
            total_grade += credit * 4.0;
        else if(grade[0] == 'B' && grade[1] == '+')
            total_grade += credit * 3.5;
        else if(grade[0] == 'B' && grade[1] == '0')
            total_grade += credit * 3.0;
        else if(grade[0] == 'C' && grade[1] == '+')
            total_grade += credit * 2.5;
        else if(grade[0] == 'C' && grade[1] == '0')
            total_grade += credit * 2.0;
        else if(grade[0] == 'D' && grade[1] == '+')
            total_grade += credit * 1.5;
        else if(grade[0] == 'D' && grade[1] == '0')
            total_grade += credit * 1.0;
        // except for P grade in total credit
        total_credit += credit;
        if(grade[0] == 'P')
            total_credit -= credit;
    }
    printf("%lf", total_grade / total_credit);

    return 0;
}