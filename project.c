// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #include <stdlib.h>
// #include <time.h>

// void randomPassword() {
//     char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     char lower[] = "abcdefghijklmnopqrstuvwxyz";
//     char digits[] = "0123456789";
//     char special[] = "@#$||&*!";
//     char strong[12];

//     srand(time(NULL));

//     strong[0] = upper[rand() % 26];
//     strong[1] = lower[rand() % 26];
//     strong[2] = digits[rand() % 10];
//     strong[3] = special[rand() % 7];

//     for(int i = 4; i < 7; i++) {
//         strong[i] = upper[rand() % 26];
//     }
//     for(int i = 7; i < 10; i++) {
//         strong[i] = lower[rand() % 26];
//     }

//     strong[10] = '\0';

//     printf("\nRandom Strong Password: %s\n", strong);
// }

// void customPassword() {
//     char name[20], color[20], word[20];
//     int number;
//     char password[100];
//     char upper,lower;
//     printf("Enter your name: ");
//     scanf("%s", name);

//     printf("Enter your favourite color: ");
//     scanf("%s", color);

//     printf("Enter your favourite word: ");
//     scanf("%s", word);

//     printf("Enter your favourite number: ");
//     scanf("%d", &number);

//     srand(time(NULL));

//     // Create password using inputs
//     sprintf(password, "%s@%s%d%c%c",
//             name,
//             word,
//             number,
//           'A'+ rand()%26,
//             'a'+ rand()%26);

//     printf("\nPersonalized Password: %s\n", password);

// }

// void suggestPassword() {
//     int option;

//     printf("\nChoose Password Suggestion Type:\n");
//     printf("1. Random Strong Password\n");
//     printf("2. Personalized Password\n");
//     printf("Enter your choice (1 or 2): ");
//     scanf("%d", &option);

//     if(option == 1)
//         randomPassword();
//     else if(option == 2)
//         customPassword();
//     else
//         printf("Invalid choice.\n");
// }

// void checkStrength(char password[]) {
//     int length = strlen(password);
//     int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

//     for(int i = 0; password[i] != '\0'; i++) {

//         if(isupper(password[i]))
//             hasUpper = 1;
//         else if(islower(password[i]))
//             hasLower = 1;
//         else if(isdigit(password[i]))
//             hasDigit = 1;
//         else
//             hasSpecial = 1;
//     }

//     printf("\nPassword Analysis:\n");

//     int score = hasUpper + hasLower + hasDigit + hasSpecial;

//     if(length >= 8 && score == 4) {
//         printf("Strength: STRONG \n");
//     }
//     else {
//         printf("Strength: WEAK \n");

//         char choice;
//         printf("Do you want a password suggestion? (y/n): ");
//         scanf(" %c", &choice);

//         if(choice == 'y' || choice == 'Y')
//             suggestPassword();
//         else
//             printf("No suggestion shown.\n");
//     }
// }

// int main() {
//     char password[100];

//     printf("Enter your password: ");
//     scanf("%s", password);

//     checkStrength(password);

//     return 0;
// }