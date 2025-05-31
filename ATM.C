#include <stdio.h>

int main() {
    int choice, age, price;
    char gender;
    char continueBooking;

    printf("Menu:\n");
    printf("1 -> Yavatmal to Kalamb\n");
    printf("2 -> Yavatmal to Deoli\n");
    printf("3 -> Yavatmal to Wardha\n");
    printf("4 -> Yavatmal to Nagpur\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
        case 2:
        case 3:
        case 4:
            do {
                printf("Male = M, Female = F, Child = C\n");
                printf("Enter Gender: ");
                scanf(" %c", &gender);  // space before %c to handle newline

                printf("Enter your age: ");
                scanf("%d", &age);

                printf("Enter price of ticket: ");
                scanf("%d", &price);

                if (gender == 'M' && (age < 50 && age > 14)) {
                    printf("Ticket: %d\n", price);
                }
                else if (gender == 'M' && (age >= 50 && age < 75)) {
                    int price1 = price / 2;
                    printf("Ticket: %d\n", price1);
                }
                else if (gender == 'F') {
                    int price2 = price / 2;
                    printf("Ticket: %d\n", price2);
                }
                else if (gender == 'C' && (age >= 5 && age <= 15)) {
                    int price3 = price / 4;
                    printf("Ticket: %d\n", price3);
                }
                else {
                    int price4 = 0;
                    printf("Ticket: %d\n", price4);
                }

                printf("Do you want to book another ticket for the same destination? (Y/N): ");
                scanf(" %c", &continueBooking);
            } while (continueBooking == 'Y' || continueBooking == 'y');
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
