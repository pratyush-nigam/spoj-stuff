#include <iostream>
#include <string>
#include <cctype>
#include <cassert>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
string convert(string a)
{
    int l = a.length();
    for(int i = 0 ; i<l ;i++)
    {
        if(a[i] == 'A')
            a[i] = 'U';
        else if(a[i] == 'T')
            a[i] = 'A';
        else if(a[i] == 'G')
            a[i] = 'C';
        else if(a[i] == 'C')
            a[i] = 'G';
    }
    return a;
}
string convertTU(string a)
{
    int l = a.length();
    for(int i = 0 ; i<l ; i++)
    {
        if(a[i]=='T')
            a[i] = 'U';
    }
    return a;
}
int start(string a,int l)
{
    for(int i = 0 ; i<l ;i++)
    {
        if(a.substr(i,3) == "AUG")
            return i;
    }
    return -1;
}
int end(string a,int l,int temp1)
{
    for(int i = temp1 ; i<l ;i=i+3)
    {
        string x = a.substr(i,3);
        if(x == "UAA" || x == "UAG" || x == "UGA")
            return i;
    }
    return -1;
}
string Check_for_U(string a,int temp1)
{
    if(a[temp1+2] == 'U')
    {
        if(a[temp1+1] == 'U')
        {
            return "Phe";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Ser";
        }
        else if(a[temp1+1] == 'A')
        {
            return "Tyr";
        }
        else if(a[temp1+1] == 'G')
        {
            return "Cys";
        }
        else
            return "-1";
    }
    else if(a[temp1+2] == 'C')
    {
        if(a[temp1+1] == 'U')
        {
            return "Phe";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Ser";
        }
        else if(a[temp1+1] == 'A')
        {
            return "Tyr";
        }
        else if(a[temp1+1] == 'G')
        {
            return "Cys";
        }
        else
            return "-1";
    }
    else if(a[temp1+2] == 'A')
    {
        if(a[temp1+1] == 'U')
        {
            return "Leu";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Ser";
        }
        else if(a[temp1+1] == 'A')
        {
            return "-1";
        }
        else if(a[temp1+1] == 'G')
        {
            return "-1";
        }
        else
            return "-1";
    }
    else if(a[temp1+2] == 'G')
    {
        if(a[temp1+1] == 'U')
        {
            return "Leu";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Ser";
        }
        else if(a[temp1+1] == 'A')
        {
            return "-1";
        }
        else if(a[temp1+1] == 'G')
        {
            return "Trp";
        }
        else
            return "-1";
    }
    else
        return "-1";
}
string Check_for_C(string a,int temp1)
{
    if(a[temp1+2] == 'U')
    {
        if(a[temp1+1] == 'U')
        {
            return "Leu";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Pro";
        }
        else if(a[temp1+1] == 'A')
        {
            return "His";
        }
        else if(a[temp1+1] == 'G')
        {
            return "Arg";
        }
        else
            return "-1";

    }
    else if(a[temp1+2] == 'C')
    {
        if(a[temp1+1] == 'U')
        {
            return "Leu";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Pro";
        }
        else if(a[temp1+1] == 'A')
        {
            return "His";
        }
        else if(a[temp1+1] == 'G')
        {
            return "Arg";
        }
        else
            return "-1";
    }
    else if(a[temp1+2] == 'A')
    {
        if(a[temp1+1] == 'U')
        {
            return "Leu";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Pro";
        }
        else if(a[temp1+1] == 'A')
        {
            return "Gln";
        }
        else if(a[temp1+1] == 'G')
        {
            return "Arg";
        }
        else
            return "-1";
    }
    else if(a[temp1+2] == 'G')
    {
        if(a[temp1+1] == 'U')
        {
            return "Leu";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Pro";
        }
        else if(a[temp1+1] == 'A')
        {
            return "Gln";
        }
        else if(a[temp1+1] == 'G')
        {
            return "Arg";
        }
        else
            return "-1";
    }
    else
        return "-1";
}
string Check_for_A(string a,int temp1)
{
    if(a[temp1+2] == 'U')
    {
        if(a[temp1+1] == 'U')
        {
            return "Ile";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Thr";
        }
        else if(a[temp1+1] == 'A')
        {
            return "Asn";
        }
        else if(a[temp1+1] == 'G')
        {
            return "Ser";
        }
        else
            return "-1";

    }
    else if(a[temp1+2] == 'C')
    {
        if(a[temp1+1] == 'U')
        {
            return "Ile";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Thr";
        }
        else if(a[temp1+1] == 'A')
        {
            return "Asn";
        }
        else if(a[temp1+1] == 'G')
        {
            return "Ser";
        }
        else
            return "-1";
    }
    else if(a[temp1+2] == 'A')
    {
        if(a[temp1+1] == 'U')
        {
            return "Ile";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Thr";
        }
        else if(a[temp1+1] == 'A')
        {
            return "Lys";
        }
        else if(a[temp1+1] == 'G')
        {
            return "Arg";
        }
        else
            return "-1";

    }
    else if(a[temp1+2] == 'G')
    {
        if(a[temp1+1] == 'U')
        {
            return "Met";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Thr";
        }
        else if(a[temp1+1] == 'A')
        {
            return "Lys";
        }
        else if(a[temp1+1] == 'G')
        {
            return "Arg";
        }
        else
            return "-1";
    }
    else
        return "-1";
}
string Check_for_G(string a,int temp1)
{
    if(a[temp1+2] == 'U')
    {
        if(a[temp1+1] == 'U')
        {
            return "Val";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Ala";
        }
        else if(a[temp1+1] == 'A')
        {
            return "Asp";
        }
        else if(a[temp1+1] == 'G')
        {
            return "Gly";
        }
        else
            return "-1";
    }
    else if(a[temp1+2] == 'C')
    {
        if(a[temp1+1] == 'U')
        {
            return "Val";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Ala";
        }
        else if(a[temp1+1] == 'A')
        {
            return "Asp";
        }
        else if(a[temp1+1] == 'G')
        {
            return "Gly";
        }
        else
            return "-1";
    }
    else if(a[temp1+2] == 'A')
    {
        if(a[temp1+1] == 'U')
        {
            return "Val";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Ala";
        }
        else if(a[temp1+1] == 'A')
        {
            return "Glu";
        }
        else if(a[temp1+1] == 'G')
        {
            return "Gly";
        }
        else
            return "-1";

    }
    else if(a[temp1+2] == 'G')
    {
        if(a[temp1+1] == 'U')
        {
            return "Val";
        }
        else if(a[temp1+1] == 'C')
        {
            return "Ala";
        }
        else if(a[temp1+1] == 'A')
        {
            return "Glu";
        }
        else if(a[temp1+1] == 'G')
        {
            return "Gly";
        }
        else
            return "-1";
    }
    else
        return "-1";
}
int dummy1,dummy2;
int checkforasequence(string a)
{
    int flag=0,l;
    l = a.length();
    int temp1,temp2,x;
    temp1 = start(a,l);
    flag = 0;
    if(temp1 == -1)
    {
        flag = 1;
        return 0;
    }
    temp1 += 3;
    temp2 = end(a,l,temp1);
    if(temp2 == -1 )
    {
        flag = 1;
        return 0;
    }
    //cout << "temp1 " << temp1 << " temp2 " << temp2 << endl;
    x = temp2 - temp1;
    if(x==0 || (x%3 !=0) )
    {
        flag = 1;
        return 0;
    }
    if(flag==0)
    {
        dummy1 =temp1;
        dummy2 = temp2;
        return 1;
    }
    else
        return 0;
}
string reverse(string a)
{
    int l = a.length();
    char xyz[1000];
    for(int i=l-1;i>=0;i--)
        xyz[l-1-i] = a[i];
    xyz[l] = '\0';
    a = xyz;
    return a;
}
string checkforall(string a)
{
    string xyz = a;
    a = convertTU(a);
    if(checkforasequence(a))
    {
        return a;
    }
    a = reverse(a);
    if(checkforasequence(a))
        return a;
    a = xyz;
    a = convert(a);
    a = reverse(a);
    if(checkforasequence(a))
        return a;
    a = reverse(a);
    if(checkforasequence(a))
        return a;
    return "-1";
}
int main()
{
    while(1)
    {
        string a;
        cin >> a;
        if(a == "*")
            break;
        int temp1,temp2,x;
        a = checkforall(a);
        if(a == "-1")
        {
            printf("*** No translatable DNA found ***\n");
            continue;
        }
        temp1 = dummy1;
        temp2 = dummy2;
        x = temp2 - temp1;
        x = x/3;
        string ans[x] , y;                                            // Stroring the answer in it.

        int count = 0;
        int flag = 0;
        for(int i = temp1 ; i<temp2 ; i=i+3)
        {
            if(a[i] == 'U')
            {
                y = Check_for_U(a,i);
                if( y == "-1")
                {
                    printf("*** No translatable DNA found ***\n");
                    flag = 1;
                    break;
                }
                ans[count++] = y;
            }
            else if(a[i] == 'C')
            {
                y = Check_for_C(a,i);
                if( y == "-1")
                {
                    printf("*** No translatable DNA found ***\n");
                    flag = 1;
                    break;
                }
                ans[count++] = y;
            }
            else if(a[i] == 'A')
            {
                y = Check_for_A(a,i);
                if( y == "-1")
                {
                    printf("*** No translatable DNA found ***\n");
                    flag = 1;
                    break;
                }
                ans[count++] = y;
            }
            else if(a[i] == 'G')
            {
                y = Check_for_G(a,i);
                if( y == "-1")
                {
                    printf("*** No translatable DNA found ***\n");
                    flag = 1;
                    break;
                }
                ans[count++] = y;
            }
            else
            {
                printf("*** No translatable DNA found ***\n");
                    flag = 1;
                    break;
            }
        }
        if(flag == 1)
            continue;
        for(int i = 0 ; i<x;i++)
        {
            if(i == 0)
                cout << ans[i];
            else
                cout << "-" << ans[i];
        }
        cout << endl;
    }
    return 0;
}
