#include<stdio.h>
#include<string.h>
int main()
{
 char a[25],b[21],c[25];
 int l,i,p,m,j,k;
 //while(scanf("%s",a)==1)
 while(gets(a))
 {
  l=strlen(a);
  k=0,i=l-1;
  while(k<l&&i>=0)
  {
   b[k]=a[i];
   k=k+1;
   i=i-1;
  }
  b[k]='\0';
  for(j=0;j<l;j++)
  {
   if(a[j]=='3')
   {
    c[j]='E';
    continue;
   }
   else if(a[j]=='E')
   {
    c[j]='3';
    continue;
   }
   else if(a[j]=='J')
   {
    c[j]='L';
    continue;
   }
   else if(a[j]=='L')
   {
    c[j]='J';
    continue;
   }
   else if(a[j]=='Z')
   {
    c[j]='5';
    continue;
   }
   else if(a[j]=='2')
   {
    c[j]='S';
    continue;
   }
   else if(a[j]=='5')
   {
    c[j]='Z';
    continue;
   }
   else if(a[j]=='S')
   {
    c[j]='2';
    continue;
   }
   else
   {
    c[j]=a[j];
    continue;
   }
  }
  c[j]='\0';
  p=strcmp(b,a);
  m=strcmp(c,b);
  if(p!=0&&m!=0)
  {
   printf("%s -- is not a palindrome.\n\n",a);
  }
  else if(p==0&&m!=0)
  {
   printf("%s -- is a regular palindrome.\n\n",a);
  }
  else if(p==0&&m==0)
  {
   printf("%s -- is a mirrored palindrome.\n\n",a);
  }
  else if(m==0&&p!=0)
  {
   printf("%s -- is a mirrored string.\n\n",a);
  }

 }
 return 0;
}
