#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
struct book {
    char name[30];
    char author[30];
    int id;
    struct book *next;
};

struct student {
    char name[30];
    char email[20];
    char book[20];
    char a[30];
    int id;
    struct student *next;
};

struct book *start_lib = NULL;
struct student *start = NULL;

struct book *initialize_lib(struct book *);
struct student *book_issue(struct student *);
struct student *book_return(struct student *);
void display(struct student *);
void greetings();
void main_menu();

int main() {
    start_lib = initialize_lib(start_lib);
    main_menu();
    return 0;
}

void main_menu() {
    int choice;
    do {

        printf("\n\t\t\t\t MAIN MENU: ");
        printf("\n\t\t\t\t 1.ISSUE OF BOOKS ");
        printf("\n\t\t\t\t 2.RETURN OF BOOKS ");
        printf("\n\t\t\t\t 3.DISPLAY STUDENT DETAILS ");
        printf("\n\t\t\t\t 4.EXIT\n ");

        printf("\n\t\t\t\tEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                start = book_issue(start);
                break;
            }
            case 2: {
                start = book_return(start);
                break;
            }
            case 3: {
                display(start);
                break;
            }
            case 4: {
                exit(1);
            }
            default: {
                printf("\n\t\t\t\t...Invalid Option!...\n");
                printf("\n\t\t\t\tPress any key to try again: ");

            }
        }
    } while (choice != 4);
}

struct book *initialize_lib(struct book *start) {
    struct book *ptr, *new_book1, *new_book2, *new_book3, *new_book4, *new_book5;

    new_book1 = (struct book *)malloc(sizeof(struct book));
    new_book1->next = NULL;
    start_lib = new_book1;
    strcpy(new_book1->name, "Let us C");
    strcpy(new_book1->author, "Yashwant Kanetkar");
    new_book1->id = 101;
    ptr = new_book1;

    new_book2 = (struct book *)malloc(sizeof(struct book));
    new_book2->next = NULL;
    strcpy(new_book2->name, "Introductory Statistics");
    strcpy(new_book2->author, "Prem S Mann");
    new_book2->id = 102;
    ptr->next = new_book2;
    ptr = new_book2;

    new_book3 = (struct book *)malloc(sizeof(struct book));
    new_book3->next = NULL;
    strcpy(new_book3->name, "Fundamentals of Electronics");
    strcpy(new_book3->author, "Floyd");
    new_book3->id = 103;
    ptr->next = new_book3;
    ptr = new_book3;

    new_book4 = (struct book *)malloc(sizeof(struct book));
    new_book4->next = NULL;
    strcpy(new_book4->name, "Discrete Mathematics and its applications");
    strcpy(new_book4->author, "Kenneth H Rosen");
    new_book4->id = 104;
    ptr->next = new_book4;
    ptr = new_book4;

    new_book5 = (struct book *)malloc(sizeof(struct book));
    new_book5->next = NULL;
    strcpy(new_book5->name, "Demystifying Computers");
    strcpy(new_book5->author, "Achyut Godbole");
    new_book5->id = 105;
    ptr->next = new_book5;

    return start_lib;
}

struct student *book_issue(struct student *start) {
    struct book *ptr;
    struct student *ptr2, *new_student;
    int i = 1, id, flag = 0;
    if (start_lib == NULL) {
        printf(" No books left in the library!\n\t");
    } else {

        ptr = start_lib;
        printf("\n\tBooks Available:");
        while (ptr != NULL) {
            printf("\n\t Book %d", i);
            printf("\n\t Book Title: %s", ptr->name);
            printf("\n\t Name of Author: %s", ptr->author);
            printf("\n\t Book ID: %d", ptr->id);
            ptr = ptr->next;
            i++;
        }
        printf("\n\n\t Enter the Book ID: ");
        scanf("%d", &id);
        ptr = start_lib;
        while (ptr != NULL) {
            if (ptr->id == id) {
                flag = 1;
                break;
            }
            ptr = ptr->next;
        }
        if (flag == 1) {
            ptr = start_lib;
            while (ptr->id != id) {
                ptr = ptr->next;
            }
            new_student = (struct student *)malloc(sizeof(struct student));
            printf("\n\t Enter Student Details:\n ");
            printf("\n\t Enter your Name: ");
            scanf("%s", new_student->name);
            printf("\n\t Enter your Email: ");
            scanf("%s", new_student->email);
            strcpy(new_student->book, ptr->name);
            strcpy(new_student->a, ptr->author);
            new_student->id = ptr->id;
            new_student->next = NULL;
            printf("\n\t Issue of Book ID %d done successfully!\n", new_student->id);
            if (start == NULL) {
                start = new_student;
            } else {
                ptr2 = start;
                while (ptr2->next != NULL) {
                    ptr2 = ptr2->next;
                }
                ptr2->next = new_student;
            }
            printf("\n\n\t Press any key to go to the main menu: ");
        } else {
            printf("\n\t\tInvalid Option!");
            printf("\n\tPress any key to try again: ");
            
        }
    }
    return start;
}

struct student *book_return(struct student *start) {
    struct student *ptr, *preptr;
    char bookname[30], authorname[30];
    int flag = 0, id, identity, c = 0, d = 1;
    printf(" Books Submission:\n\t");
    printf("\n\n\t Enter your Book ID: ");
    scanf("%d", &identity);
    ptr = start;
    while (ptr != NULL) {
        if (ptr->id == identity) {
            flag = 1;
            break;
        }
        ptr = ptr->next;
    }
    if (flag == 1) {
        ptr = start;
        while (ptr != NULL) {
            c++;
            ptr = ptr->next;
        }
        ptr = start;
        while (ptr->id != identity) {
            d++;
            ptr = ptr->next;
        }
        ptr = start;
        if (d == 1) {
            printf("\n\t Student Name: %s", start->name);
            printf("\n\t Student Email: %s", start->email);
            printf("\n\t Name of Book Issued: %s", start->book);
            printf("\n\n\t Return of Book ID %d done successfully!\n", identity);
            strcpy(bookname, start->book);
            strcpy(authorname, start->a);
            id = start->id;
            start = start->next;
            // free(ptr);
        } else {
            ptr = start;
            while (ptr->id != identity) {
                preptr = ptr;
                ptr = ptr->next;
            }
            printf("\n\t Student Name: %s", ptr->name);
            printf("\n\t Student Email: %s", ptr->email);
            printf("\n\t Name of Book Issued: %s", ptr->book);
            printf("\n\t Book ID: %d", ptr->id);
            strcpy(bookname, ptr->book);
            strcpy(authorname, ptr->a);
            id = ptr->id;
            preptr->next = ptr->next;
            // free(ptr);
        }
        printf("\n\t Thank you! \n\t Do visit again! ");
        printf("\n\n\t Press any key to go to the main menu: ");
    } else {
        printf("\n\tSorry the book doesn't exist!");
        printf("\n\t\t\t\tPress any key to try again: ");
    }
    return start;
}

void display(struct student *start) {
    struct student *ptr;
    ptr = start;
    while (ptr != NULL) {
        printf("\n\t\t Student Name: %s", ptr->name);
        printf("\n\t\t Student Email: %s", ptr->email);
        printf("\n\t\t Name of Book Issued: %s", ptr->book);
        printf("\n\t\t Book ID: %d", ptr->id);
        ptr = ptr->next;
    }
    printf("\n\n\t Press any key to go to the main menu: ");
}
