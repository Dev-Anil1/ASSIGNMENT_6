int main()
{
    int i,n,flag;
    printf("Enter a number to check prime or not = ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
            printf("Not prime");
        else
            printf("Prime");
    getch();
    return(0);
}
