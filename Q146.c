#include <stdio.h>
#include <string.h>

// Q146: Employee struct with nested Date

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining;
};

int main(void) {
    struct Employee e;

    printf("Enter employee name: ");
    fgets(e.name, sizeof(e.name), stdin);
    size_t len = strlen(e.name);
    if (len > 0 && e.name[len-1] == '\n') e.name[len-1] = '\0';

    printf("Enter employee id: ");
    scanf("%d", &e.id);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joining.day, &e.joining.month, &e.joining.year);

    printf("\nEmployee Details\n");
    printf("Name   : %s\n", e.name);
    printf("ID     : %d\n", e.id);
    printf("Joining: %02d-%02d-%04d\n", e.joining.day, e.joining.month, e.joining.year);

    return 0;
}
