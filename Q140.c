#include <stdio.h>
#include <string.h>

// Q140: Define a struct with enum Gender and print person's gender

enum Gender { MALE = 0, FEMALE = 1, OTHER = 2 };

struct Person {
    char name[50];
    enum Gender gender;
};

const char* genderToString(enum Gender g) {
    if (g == MALE) return "Male";
    if (g == FEMALE) return "Female";
    return "Other";
}

int main(void) {
    struct Person p; // create a person
    int gInput;      // will store gender as an integer

    // --- Input ---
    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);
    // remove trailing newline (beginner-friendly way)
    size_t len = strlen(p.name);
    if (len > 0 && p.name[len-1] == '\n') {
        p.name[len-1] = '\0';
    }

    printf("Enter gender (0=Male, 1=Female, 2=Other): ");
    if (scanf("%d", &gInput) != 1) {
        printf("Invalid input!\n");
        return 0;
    }
    if (gInput < 0 || gInput > 2) {
        gInput = 2; // default to OTHER if out of range
    }
    p.gender = (enum Gender)gInput;

    // --- Output ---
    printf("\nPerson Details\n");
    printf("Name   : %s\n", p.name);
    printf("Gender : %s\n", genderToString(p.gender));

    return 0;
}
