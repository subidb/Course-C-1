#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[100];
    char s2[100];

    fgets(s1, sizeof(s1), stdin);
    //s1[strcspn(s1, "\n")] = '\0';
    s1[strlen(s1)-1] = '\0';

    fgets(s2, sizeof(s2), stdin);
    s2[strlen(s2)] = '\0';
    //s1[strcspn(s2, "\n")] = '\0';

    char * s;
    int n = strlen(s1)+strlen(s2);
    s = (char*)malloc(sizeof(char)* n);

    // int i=0;
    // for(; i<(strlen(s1)-1); i++)
    // {
    //     s[i] = s1[i];
    // }
    strcpy(s,s1);

    // for(int j=i; (j-i)<strlen(s2)-1; j++)
    // {
    //     s[j] = s2[j-i];
    // }
    strcat(s,s2);

    printf("Result of concatenation: %s\n",s);

    free(s);
}
