


//5. WAP to calculate the length of String

#include<stdio.h>
int main()
{
    int l=0;
    char s[20];
    printf("Enter the String -");
    gets(s);                                       //printf("%s%n",s,&l);
    l=strlen(s);
    printf("Length of String is %d",l);
    return 0;

}

// Here we use strlen() function to calculate length of string
