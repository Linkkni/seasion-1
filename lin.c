 #include <stdio.h>
 #include<string.h>
  int main()
  { 
     int a;    
   char s[16];   
    scanf("%d",&a); 
   if(a>=0&&a<=10)
   {
    a=a*2;
   gets(s,sizeof(s),stdin);;
   }
   scanf("%s",s);
   if(strlen(s)<=15)
   {
     printf("%s",s);
  }
 return 0;
  }