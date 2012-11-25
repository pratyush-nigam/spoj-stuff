class Solution {
public:
    char *strStr(char *haystack, char *needle) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(*needle=='\0')
            return haystack;
        char *i,*j;
        i = haystack;
        j = needle;
        while(*i != '\0')
        {
            if(*i==*j)
            {
                char *t,*k;
                t = i;
                k = j;
                while(*k!='\0' && *t!='\0' && *t==*k)
                {
                    t++;
                    k++;
                }
                if(*k=='\0')
                    return i;
                else if(*t=='\0')
                    return NULL;
                else
                    i++;
            }
            else
                i++;
        }
        return NULL;
    }
};
