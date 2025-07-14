#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Structure to represent a book
struct Book {
    char title[100];
    char author[100];
    int year;
    struct Book* next;
};
// Function to create a new book
struct Book* createBook(const char* title, const char* author, int year)
{
    struct Book* newBook = (struct Book*)malloc(sizeof(struct Book));
    if (newBook) {
        strcpy(newBook->title, title);
        strcpy(newBook->author, author);
        newBook->year = year;
        newBook->next = NULL;
    }
    return newBook;
}
// Function to add a book to the library
void addBook(struct Book** library, const char* title, const char* author, int year) {
    struct Book* newBook = createBook(title, author, year);
    if (newBook) {
        newBook->next = *library;
        *library = newBook;
        printf("Book added successfully!\n");
    } else {
        printf("Failed to add the book. Memory allocation error.\n");
    }
}

// Function to display the list of books in the library
void displayLibrary(const struct Book* library) {
    if (!library) {
        printf("The library is empty.\n");
        return;
    }

    printf("Library Books:\n");
    while (library) {
        printf("Title: %s\nAuthor: %s\nYear: %d\n\n", library->title, library->author, library->year);
        library = library->next;
    }
}

// Function to search for a book by title
void searchBook(const struct Book* library, const char* title) {
    while (library) {
        if (strcmp(library->title, title) == 0) {
            printf("Book found:\nTitle: %s\nAuthor: %s\nYear: %d\n", library->title, library->author, library->year);
            return;
        }
        library = library->next;
    }
    printf("Book not found in the library.\n");
}

// Function to free the memory allocated for the library
void freeLibrary(struct Book* library) {
    while (library) {
        struct Book* temp = library;
        library = library->next;
        free(temp);
    }
}

int main() {
    struct Book* library = NULL;

    int choice;
    char title[100], author[100];
    int year;

    do {
        printf("\nLibrary Management System\n");
        printf("1. Add a book\n");
        printf("2. Display library\n");
        printf("3. Search for a book by title\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter book title: ");
                scanf("%s", title);
                printf("Enter author: ");
                scanf("%s", author);
                printf("Enter year of publication: ");
                scanf("%d", &year);
                addBook(&library, title, author, year);
                break;
            case 2:
                displayLibrary(library);
                break;
            case 3:
                printf("Enter book title to search: ");
                scanf("%s", title);
                searchBook(library, title);
                break;
            case 4:
                // Free memory before exiting
                freeLibrary(library);
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

