#include <stdio.h>
#include <string.h>
#include <assert.h>
void Myputs(char* pa);
char* Mystrchr( const char * string, int symbol);
int Mystrlen(const char * string);
void Mystrcpy (char *str2, const char* str1);
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
    while (*str1 != '\0' && strlen(str2) <= len)
    {
        *(str2+len) = *(str1 + len);
    }

}
