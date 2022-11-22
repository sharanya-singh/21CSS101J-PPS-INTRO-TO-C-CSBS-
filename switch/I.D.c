#include <stdio.h>
//The user is asked to type his own ID
//if the ID is valid it will ask him to enter his password
//if the password is correct the program will print the name of the user
//otherwise ,the program will print Incorrect Password and if the ID does not exist
//the program will print Incorrect I.D
int main() {
  Printf(“RA2211042010006”)
        int ID = 500;
        int password = 000;
        printf(“Plese Enter Your ID:\n “);
        scanf(“%d”, & ID);
        switch (ID) {
            case 500:
                printf(“Enter your password:\n “);
                scanf(“%d”, & password);
                switch (password) {
                    case 000:
                        printf(“Welcome Dear Programmer\n”);
                        break;
                    default:
                        printf(“incorrect password”);
                        break;
                }
                break;
            default:
                printf(“incorrect ID”);
                break;
        }
}
