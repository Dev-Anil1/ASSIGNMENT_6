int main()
{
    int i,n,count;
    printf("Enter a number to count its digit = ");
    scanf("%d",&n);
    for(i=1,count=0;n!=0;i++)
    {
        n=n/10;
        count++;
    }
    printf("%d",count);
    getch();
    return(0);
}
