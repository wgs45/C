#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR 64
#define FILENAME "contacts"

// Contact struct definition
struct Contact {
    char name[MAX_STR];
    char address[MAX_STR];
    char phone[MAX_STR];
    struct Contact *next;
};

struct Contact *read_contacts;
struct Contact *add_contacts;
int read_number = 0;
int add_number = 0;


// strcmp(string1, string2)
// return: 0 => string1 = string2
//         1 => string1 > string2
//        -1 => string1 < string2
// "abc" < "def"

// 1. Add Contact
// 2. Search Contact
// 3. View all Contact
// 4. Quit
// Select menu [1-4]: 
void print_menu();
// Read contacts from file
int read_file();
// Save all contacts into file
void save_file();
int string_length(char *);
void print_contact(char *);
void print_all_contact();
int add_new_contacts();

int main()
{
    int choice = 0;
    // read from file and save how many
    // contacts we got from the file
    read_number = read_file();

    // While choice is not 4, then loop
    while( choice != 4)
    {
        print_menu();
        printf("Select menu [1-4]: ");
        scanf("%d", &choice);
        getchar(); // accept enter to prevent becomes next input data
        
        // Add contact
        if (choice == 1)
        {
            add_new_contacts();
        }
        // Search contact
        else if (choice == 2)
        {
            char name[MAX_STR] = {0};
            printf("Input name = ");
            gets(name);
            print_contact(name);
        }
        // Print all contacts
        else if (choice == 3)
        {
            print_all_contact();
        }
    }
    // Save all changes to the file
    save_file();
    // Free the memory
    if (read_contacts)
        free(read_contacts);
    return 0;
}

void print_menu()
{
    printf("\n1. Add Contact\n");
    printf("2. Search Contact\n");
    printf("3. View All Contacts\n");
    printf("4. Quit\n");
}

int read_file()
{
    int number = 0;
    FILE *fp = fopen(FILENAME, "r");
    if (fp)
    {
        char str_number[10] = {0};
        int length = 0;        
        fgets(str_number, 9, fp);
        number = atoi(str_number); // string to int
        // Create contact pointer allocation
        read_contacts = calloc(number, sizeof(struct Contact));
        for (int i=0; i < number; ++i)
        {
            fgets(read_contacts[i].name, MAX_STR-1, fp);
            // fgets from file, will have '\n'
            // at the end of the string
            // so, we reset the last character from '\n' to '\0'
            length = string_length(read_contacts[i].name);
            read_contacts[i].name[length-1] = '\0';

            fgets(read_contacts[i].address, MAX_STR-1, fp);
            length = string_length(read_contacts[i].address);
            read_contacts[i].address[length-1] = '\0';

            fgets(read_contacts[i].phone, MAX_STR-1, fp);
            length = string_length(read_contacts[i].phone);
            read_contacts[i].phone[length-1] = '\0';

        }
        printf("Read from file contents:\n");
        for (int i=0; i < number; ++i)
        {
            printf("%s\n", read_contacts[i].name);
            printf("%s\n", read_contacts[i].address);
            printf("%s\n", read_contacts[i].phone);
        }        
        fclose(fp);
    }
    return number;
}

void save_file()
{
    FILE *fp = fopen(FILENAME, "w");
    if (fp)
    {
        // File on the first line
        // we save the number of contacts
        fprintf(fp, "%d\n", read_number);
        for(int i=0;i < read_number; i++)
        {
            fprintf(fp, "%s\n", read_contacts[i].name);
            fprintf(fp, "%s\n", read_contacts[i].address);
            fprintf(fp, "%s\n", read_contacts[i].phone);
        }
        fclose(fp);
    }
}

int string_length(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        ptr++;
    }
    return (ptr-str);
}

void print_contact(char *name)
{
    for (int i=0; i < read_number; ++i)
    {
        if (strcmp(read_contacts[i].name, name) == 0)
        {
            printf("%s\n", read_contacts[i].name);
            printf("%s\n", read_contacts[i].address);
            printf("%s\n", read_contacts[i].phone);
            break; // because we have found it, just terminate
        }
    }
}

void print_all_contact()
{
    for (int i=0; i < read_number; ++i)
    {
        printf("\nContact-%d:\n", i+1);
        printf("%s\n", read_contacts[i].name);
        printf("%s\n", read_contacts[i].address);
        printf("%s\n", read_contacts[i].phone);
    }
}

int add_new_contacts()
{
    int number = 0;
    printf("How many contacts ? ");
    scanf("%d", &number);
    getchar(); // receive \n after scanf

    // Create pointer with N of Contacts
    // the total number = read_number + number
    int total_number = number + read_number;
    struct Contact *contacts = 
        calloc(total_number, sizeof(struct Contact));

    // copy first read_number of contacts from read_contacts
    for (int i=0; i < read_number; ++i)
    {
        // memory copy
        memcpy(&contacts[i], &read_contacts[i], sizeof(struct Contact));
    }
    // Loop for N to get the Input (Contacts)
    for(int i=read_number;i < total_number; i++)
    {
        printf("Input Name: ");
        gets(contacts[i].name);
        printf("Input address: ");
        gets(contacts[i].address);
        printf("Phone: ");
        gets(contacts[i].phone);
        printf("\n");
    }
    // clear previous read_contacts memory
    free(read_contacts);
    // assign read_contacts pointer to this new created contacts
    read_contacts = contacts;
    read_number = total_number;
}
