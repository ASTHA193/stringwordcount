#include<stdio.h>
void main()
{
    char ch[20];
    int i,word;
    printf("enter the string \n");
    gets(ch);
    i=0;
    word=1;
    while(ch[i] != '\0')
    {
        if(ch[i]==' '|| ch[i]=='\n'|| ch[i]=='\t')
        {
          word++;
        }
        i++;
    }
    printf("total no of words=%d",word);
}
