#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remove_vowels(char *ptr)
{
    char *rv = (char *)malloc(strlen(ptr) * sizeof(char));
    int counter = 0;
    for (int i = 0; i < strlen(ptr); i++)
    {
        if (ptr[i] == 'A' || ptr[i] == 'E' || ptr[i] == 'I' || ptr[i] == 'O' || ptr[i] == 'U' || ptr[i] == 'u' || ptr[i] == 'a' || ptr[i] == 'e' || ptr[i] == 'i' || ptr[i] == 'o')
            continue;
        else
            rv[counter++] = ptr[i];
    }
    strcpy(ptr, rv);
}
int main()
{
    int n;
    printf("Enter how many words you want to enter\n");
    scanf("%d", &n);
    char **arr = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++)
    {
        int size;
        printf("Enter the size of %d word\n", i + 1);
        scanf("%d", &size);
        printf("Enter word number %d\n", i + 1);
        arr[i] = (char *)malloc(size * sizeof(char));
        scanf("%s", arr[i]);
    }

    printf("Words before the removal of the vowel is\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\nWords after the removal of the vowel is\n");
    for (int i = 0; i < n; i++)
    {
        remove_vowels(arr[i]);
        printf("%s\n", arr[i]);
    }
    return 0;
}