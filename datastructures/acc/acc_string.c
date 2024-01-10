 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
	

    // Length of string
    int acc_strlen(char string[])
{
    int i = 0;
    while (string[i] != '\0')
    {
        i++;
    }
    return i;
}

// low2up

char acc_low2up (char *str) {
    char str[100], upper_str[100];
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            upper_str[i] = str[i] - 32;
        else
            upper_str[i] = str[i];
        i++;
    }
    upper_str[i] = '\0';
    return upper_str;
}
// strcat

char acc_strcat(char initial[], char append[])
{
    char output_string [128] = "";
    for (int i = 0; initial[i] != '\0'; i++)
    {
        output_string[i] = initial[i];
    }
    for (int c = 0; append[c] != '\0'; c++)
    {
        output_string[c + acc_strlen(initial)] = append[c];
    }

    return output_string;
}

// strcmp

int acc_strcmp (char j_1[], char j_2 [])
{
    int i = 0;
     while ((j_1[i] != '\0') || (j_2[i] != '\0'))
    {
        if (j_1[i] != j_2[i])
        {
            if (j_1[i] - j_2[i] > 0)
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
    }
}

// strrev

char acc_strrev(char input_string[])
{
    int array_length = sizeof(input_string) / sizeof(input_string[0]);
    char output_string[64] = "";
    int i = 0;
    while (i < array_length - 1)
    {
        output_string[array_length-i] = input_string[i]; 
    }
    return output_string;
}

char* acc_strextr(const char *str, int i, int j, int m, int n) {
    char substr[100];
    i = m;
    while (str[i] != '\0' && n > 0) {
        substr[j] = str[i];
        i++;
        j++;
        n--;


    }
    substr[j] = '\0';
    return substr;
}


// Return string made from inserting ins_str . 
int acc_strinsrt(char* text, char* ins_str, char* merge_str, int pos) {
    int i = 0, j = 0, k = 0;

    while (text[i] != '\0') {
        if (i == pos) {
            while (ins_str[k] != '\0') {
                merge_str[j++] = ins_str[k++];
            }
        }
        merge_str[j++] = text[i++];
    }
    merge_str[j] = '\0';

    return 0; 
}
