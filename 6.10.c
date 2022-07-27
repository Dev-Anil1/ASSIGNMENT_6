int main()
{
    int i,n,a,b,z;
    printf("Enter a number to reverse = ");
    scanf("%d",&n);
    for(i=1;n!=0;i++)
    {
        a=n;
        n=n/10;
        b=n*10;
        z=a-b;
        printf("%d",z);
    }
    getch();
    return(0);
}

