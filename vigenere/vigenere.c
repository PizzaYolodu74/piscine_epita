int len(char *s)
{
    int i = 0;
    for (; s[i]; i++)
    {
    }
    return i;
}

char* right_size(char *c, int size_c, int size_m) //je passe la clé, sa taille, et la taille du mot à traduire
{
    char n[size_m];
    int j = 0;

    for (int i = 0; i < size_m; i++, j++)
    {
        if (i != size_c)
        {
            n[i] = c[j];
            j++;
        }
        else
        {
            j = 0;
            i--;
        }
    }
    return n;
}

char* upper_case(char *s)
{   
    int l = len(s);
    char *t  = *s;
    for (int i = 0; i < l; i++)
    {
        if ((s[i] >= 'a') && (s[i] <= 'z'))
        {
            t[i] = s[i] + 'A' - 'a';
        }
        else
        {
            t[i] = s[i];
        }
    }
    return t;
}


void cipher(const char *key, const char *msg, char *res)
{
    int lk = len(key);
    int lm = len(msg);

    if (lk < lm)
    {
        char new_key[] = right_size(key, lk, lm);
    }
    char new_key[] = upper_case(key);
    char m[] = upper_case(msg);
    
    for (int i = 0; i < lm; i++)
    {
        res[i] = (m[i] + new_key[i]) % 26;
    }
}
