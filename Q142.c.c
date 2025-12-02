#include <stdio.h>
#include <string.h>

// Q142: Array of 5 students and print all

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main(void) {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for student %d\n", i+1);
        printf("Name: ");
        getchar(); // consume leftover newline from previous input
        fgets(s[i].name, sizeof(s[i].name), stdin);
        size_t len = strlen(s[i].name);
        if (len > 0 && s[i].name[len-1] == '\n') s[i].name[len-1] = '\0';

        printf("Roll: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nAll Students\n");
    for (int i = 0; i < 5; i++) {
        printf("%2d) Name: %-20s Roll: %4d Marks: %6.2f\n", i+1, s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
