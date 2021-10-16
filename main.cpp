#include <string.h>
#include <assert.h>
void Myputs(char* pa);
char* Mystrchr( const char * string, int symbol);
int Mystrlen(const char * string);
void Mystrcpy (char *str2, const char* str1);
void Mystrncpy( char * str2, const char * str1, int num );
void Mystrcat(char *str1, const char *str2);
void Mystrncat( char * destptr, char * srcptr, int num );
char * Myfgets(char *dst, int max, FILE *fp);
char * Mystrdup(const char *s);
char * Mygetline();
int main()
{
    char s[] = "00123456789abcdef";
    //Myputs(s);
    //printf("%p", Mystrchr(s, '6') - s );
    return 0;

}
void Myputs(char* pa){
    assert(pa != NULL);
    int i = 0;
    while (*(pa + i) != '\0')
    {
        putchar(*(pa+i));
        i++;
    }
}

char* Mystrchr(const char * string, int symbol)
{
    assert(string != NULL);
    int i = 0;
    while (*(string+i) != symbol )
    {
        i++;
    }
    return (char*)(string+i);
}

int Mystrlen(const char * string)
{
    assert(string != NULL);
    int len = 0;
    while (*(string+len) != '\n')
        len++;
    return len;
}
void Mystrcpy (char *str2, const char* str1)
{
    assert(str1 != NULL);
    int len = 0;
    while (*(str1+len) != '\0' && strlen(str2) > len)
    {
        *(str2+len) = *(str1 + len);
        len++;
    }
}

void Mystrncpy( char * str2, const char * str1, int num )
{
    assert(str1 != NULL);
    int len = 0;
    while (*(str1+len) != '\0' && strlen(str2)> len && len <= num)
    {
        *(str2+len) = *(str1 + len);
        len++;
    }
}
void Mystrcat(char *str1, const char *str2)
{
    assert(str1 != NULL && str2 != NULL);
    int len = 0;
    while (*(str2 + len) != '\0')
    {
        *(str1 + Mystrlen(str1) + len) = *(str2 + len);
        len++;
    }
}

void Mystrncat( char * destptr, char * srcptr, int num)
{
    assert(str1 != NULL && str2 != NULL);
    int len = 0;
    while (*(str2 + len) !='\0' && len < num)
    {
        *(str1 + strlen(str1) + len) = *(str2 + len);
        len++;
    }
}

char * Myfgets(char *dst, int max, FILE *fp)
{
    int c;
    char *p;

    for (p = dst, max--; max > 0; max--) {
        if ((c = fgetc (fp)) == EOF)
            break;
        *p++ = c;
        if (c == '\n')
            break;
    }
    *p = 0;
    if (p == dst || c == EOF)
        return NULL;
    return (p);
}

char * Mystrdup(const char *s)
{
  int len = strlen (s) + 1; 
  char *result = (char*) malloc (len);
  if (result == (char*) 0)   
    return (char*) 0;
  return (char*) memcpy (result, s, len); 
}

char * Mygetline()
{
    char *m = new char[1];
    char c;
    cin >> c;
    int i = 1;
 
    while ((c != '\n') && (c != '\0')) {
        m = new char[i];
        m[i-1] = c;
        i++;
    }
    
    m[i] = '\0';
 
    return m;
    
}
