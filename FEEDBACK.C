x#include<stdio.h>
int main()
{
char ch;
FILE*fp;
fp=fopen("feedback.txt","w");
if(fp==NULL)
{
printf("file opening failed\n");
return 0;
}
fprintf(fp,"feedback about the c program\n");
fprintf(fp,"1.>c is little hard to learn\n");
fprintf(fp,"2.>c is the fundamental to learn any programing language\n");
fprintf(fp,"3.>c progarming language is very usefull\n");
fprintf(fp,"4.>c helpfull to improve logic sense\n");
fclose(fp);
fp=fopen("feedback.txt","a");
if(fp==NULL)
{
printf("file opening is failed\n");
return 0;
}
fprintf(fp,"feedback about the c-sir");
fprintf(fp,"1.>c sir is very supportive\n");
fprintf(fp,"2.>c sir explains in funny way\n");
fclose(fp);
fp=fopen("feedback.txt","r");
if(fp==NULL)
{
printf("file opening is failed\n");
return 0;
}
while((ch=fget(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
return 0;
}