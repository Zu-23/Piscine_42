#include<unistd.h>
#include<stdio.h>

int ft_strcspn(char *str1, char *str2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (str1[i])
    {
        while (str1[i] != str2[j] && str2[j])
            j++;
        if (str1[i] == str2[j])
            return i;
        j = 0;
        i++;
    }
    return i;
}
