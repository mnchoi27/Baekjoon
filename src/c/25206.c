#include <stdio.h>

int main(void) {
    char subject_name[50], grade[3];
    double total_grade = 0, total_credit = 0;
    double credit, grade_value;

    for(int i = 0; i < 20; i++) {
        scanf("%s %lf %s", subject_name, &credit, grade);
        // cal total grade from grade
        switch(grade[0]) {
            case 'A': grade_value = 4.0; break;
            case 'B': grade_value = 3.0; break;
            case 'C': grade_value = 2.0; break;
            case 'D': grade_value = 1.0; break;
            case 'F': grade_value = 0.0; break;
            // except for P grade in total credit
            default: continue;
        }
        // add 0.5 point for grades with +
        if(grade[1] == '+')
            grade_value += 0.5;
        // update total grade and total credit
        total_grade += credit * grade_value;
        total_credit += credit;
    }
    printf("%lf", total_grade / total_credit);

    return 0;
}