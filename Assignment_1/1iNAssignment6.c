

//6. WAP to print the name of the user in double quotes.
  // Expected output format – “Hello , Amit Kumar”

  #include<stdio.h>
int main()
{
    char s[20];
    printf("Enter your name ");
    gets(s);
    printf("\"Hello,%s\"",s);
    return 0;
}
