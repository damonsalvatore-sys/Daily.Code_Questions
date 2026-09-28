#include <stdio.h>
#include <string.h>

/*
Question: Secure Password

Write a program to check whether a password is secure.

A secure password must:
1. Contain at least one lowercase letter.
2. Contain at least one uppercase letter strictly inside
   the password (not first or last character).
3. Contain at least one digit strictly inside.
4. Contain at least one special character from @, #, %, &, ?
   strictly inside.
5. Have at least 10 characters.

Print YES if the password is secure, otherwise print NO.
*/

int main()
{
    char password[100];
    int lower = 0, upper = 0, digit = 0, special = 0;

    printf("Enter password: ");
    scanf("%s", password);

    int n = strlen(password);

    for (int i = 0; i < n; i++)
    {
        if (password[i] >= 'a' && password[i] <= 'z')
            lower = 1;

        if (i > 0 && i < n - 1)
        {
            if (password[i] >= 'A' && password[i] <= 'Z')
                upper = 1;

            if (password[i] >= '0' && password[i] <= '9')
                digit = 1;

            if (password[i] == '@' || password[i] == '#' ||
                password[i] == '%' || password[i] == '&' ||
                password[i] == '?')
                special = 1;
        }
    }

    if (n >= 10 && lower && upper && digit && special)
        printf("YES");
    else
        printf("NO");

    return 0;
}
