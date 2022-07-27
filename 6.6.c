int main()
{
    int n,fact,i;
    printf("Enter value of n = ");
    scanf("%d",&n);
    for(i=1,fact=1;i<=n;i++)
        fact=fact*i;
    printf("fact is=%d",fact);
    getch();
    return(0);
}

