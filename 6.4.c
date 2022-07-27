int main()
{
    int n,sum,i;
    printf("Enter value of n = ");
    scanf("%d",&n);
    for(i=1,sum=0;i<=n;i++)
        sum=sum+i*i;
    printf("sum is=%d",sum);
    getch();
    return(0);
}

