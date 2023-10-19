#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 64
// Contact struct definition
struct Contact {
    char name[MAX_STR];
    char address[MAX_STR];
    char phone[MAX_STR];
};

int string_length(char *);

int main()
{
    int number = 0;
    // Ask how many contacts (N)
    printf("How many contacts ? ");
    scanf("%d", &number);
    getchar(); // receive \n after scanf

    // Create pointer with N of Contacts
    struct Contact *contacts = calloc(number, sizeof(struct Contact));
    // Loop for N to get the Input (Contacts)
    for(int i=0;i < number; i++)
    {
        printf("Input Name: ");
        gets(contacts[i].name);
        printf("Input address: ");
        gets(contacts[i].address);
        printf("Phone: ");
        gets(contacts[i].phone);
        printf("\n");
    }

    // Create File and save each contacts
    // using Loop
    FILE *fp = fopen("contacts", "w");
    if (fp)
    {
        fprintf(fp, "%d\n", number);
        for(int i=0;i < number; i++)
        {
            fprintf(fp, "%s\n", contacts[i].name);
            fprintf(fp, "%s\n", contacts[i].address);
            fprintf(fp, "%s\n", contacts[i].phone);
        }
        fclose(fp);
    }

    printf("==> Test Load File\n");
    fp = fopen("contacts", "r");
    if (fp)
    {
        char str_number[10] = {0};
        int length = 0;
        fgets(str_number, 9, fp);
        number = atoi(str_number); // string to int
        for (int i=0; i < number; ++i)
        {
            fgets(contacts[i].name, MAX_STR-1, fp);
            // fgets from file, will have '\n'
            // at the end of the string
            // so, we reset the last character from '\n' to '\0'
            length = string_length(contacts[i].name);
            contacts[i].name[length-1] = '\0';

            fgets(contacts[i].address, MAX_STR-1, fp);
            length = string_length(contacts[i].address);
            contacts[i].address[length-1] = '\0';

            fgets(contacts[i].phone, MAX_STR-1, fp);
            length = string_length(contacts[i].phone);
            contacts[i].phone[length-1] = '\0';

        }
        printf("Read from file contents:\n");
        for (int i=0; i < number; ++i)
        {
            printf("%s\n", contacts[i].name);
            printf("%s\n", contacts[i].address);
            printf("%s\n", contacts[i].phone);
        }        
        fclose(fp);
    }
        

    return 0;
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
