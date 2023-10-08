#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int case_num;
    for (case_num = 1; case_num <= T; case_num++) {
        int salaries[3];
        int i;

        for (i = 0; i < 3; i++) {
            scanf("%d", &salaries[i]);
        }

        int max_salary = salaries[0], min_salary = salaries[0], total_salary = 0;
        for (i = 0; i < 3; i++) {
            total_salary += salaries[i];
            if (salaries[i] > max_salary) {
                max_salary = salaries[i];
            }
            if (salaries[i] < min_salary) {
                min_salary = salaries[i];
            }
        }

        int survivor_salary = total_salary - max_salary - min_salary;

        printf("Case %d: %d\n", case_num, survivor_salary);
    }

    return 0;
}

