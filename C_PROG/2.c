#include <stdio.h>
#include<string.h>
int main()
{
    FILE *in_file;
    FILE *out_file = fopen("output.txt", "w");
    char word[50];
    in_file = fopen("input.txt", "r");

    if (in_file == NULL)
        printf("File is Empty.\n");
    else
    {
        while (fscanf(in_file, "%s", word) != EOF)
        {
        	fprintf(out_file, "%d : %s\n",strlen(word), word);
        }
        fclose(in_file);
    }
    return 0;
}
