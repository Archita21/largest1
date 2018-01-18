 #include<stdio.h>
int main()
{
    int a,b,c;
  
 printf("enter three no");
 scanf("%d%d%d",&a,&b,&c);
 
 if(a>b && a>c)
 {
  printf("largest no",a);
}
 else if(b>a && b>c)
{
 printf("largest no",b);
}
 else 
{
 printf("largest no",c);
}
return 0;
}              