void reverse_rotate_a(int *a, int *i)
{
    if (*i > 0)
    {
        int temp;
        int k;

        temp = a[*i - 1];
        k = *i - 1;
        while (k > 0)
        {
            a[k] = a[k - 1];
            k--;
        }
        a[0] = temp;
    }
}

void reverse_rotate_b(int *b, int *j)
{
    if (*j > 0)
    {
        int temp;
        int k;

        temp = b[*j - 1];
        k = *j - 1;
        while (k > 0)
        {
            b[k] = b[k - 1];
            k--;
        }
        b[0] = temp;
    }
}

void reverse_rotate_both(int *a, int *i, int *b, int *j)
{
    reverse_rotate_a(a, i);
    reverse_rotate_b(b, j);
}