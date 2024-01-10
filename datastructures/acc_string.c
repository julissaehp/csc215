 
	/*acc_strlen
	acc_low2up	
    acc_strcat
    acc_strcmp 
    acc_strrev 
    acc_strextr
	acc_strinsrt
	acc_delsub
	acc_strrplc*/

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

char acc_low2up(char string[])
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        if ('a' <= string[i] <= 'z')
        {
            string[i] = string[i] - ('a' - 'A');
        }
    }
    return string;
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