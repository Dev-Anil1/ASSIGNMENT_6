int main()
{
    int a,b,i;
    printf("Enter two number here = ");
    scanf("%d %d",&a,&b);
    for(i=1;i<a*b;i++)
    {
        if(i%a==0 && i%b==0)
            break;
    }
    printf("Lcm is %d",i);
    getch();
    return 0;
}
