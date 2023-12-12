// Declaration of the function
char fun();

// Defining a function
char fun()
{
    char c;
    printf("Enter the character\n");
    scanf("%c", &c);
    return 'c';

}
// Calling the function
void main()
{
    char ch;
    ch = fun();
    printf("ch=%c", ch);


}