#include <stdio.h>
#include <wchar.h>



wchar_t *my_wstrchr(wchar_t *ws, wchar_t wc)

size_t my_wc_strlen(const wchar_t *s)
size_t my_strlen(const char *s)
{
   const char *p = s;

   while (*p)
      ++p;
}

char *my_strcpy(char *t, char *s)
{
   char *p = t;   
   while (*t++ = *s++);
   return p;
 
}


int main(void)
{
   int i;
   char p1[32];
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
	printf("%s\n", my_strcpy(p1, "Hello, World !!!"));
   return 0;
}
