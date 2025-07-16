#include <stdio.h>
#include <string.h>

int main()
{

    char name[20];
    char plaindrome=1;
    printf("Enter Name : ");
    scanf("%s", name);
    int length = strlen(name);

    for (int i = 0; i < length / 2; i++)
    {
        if (name[i] != name[length - i - 1])
        {
            plaindrome = 0;
        }
    }
    if (plaindrome)
    {
        printf("Yes It is plaindrome !!");
    }
    else
    {
        printf("Plz Enter Another String");
    }
    
    

    return 0;
}