#include<iostream>
#include<array>
using namespace std;
int main()
{
    char s1[]="babbab";
    char s2[]="abaaba";
    char s4[]="abaaba";
    char s5[]="babbab";
    char s6[10];
    char s3[10];
    int j=0,k=0,l=0,m=0;
    for(int i=0;i<6;i++)
    {
        if(s2[j]==s1[i] && s5[l]==s4[i])
        {
            s3[k]=s2[j];
            j++;
            k++;
            s6[m]=s5[l];
            l++;
            m++;
        }
        else
        {
            k=0;
            m=0;
        }
    }
    cout<<s3<<endl;
    cout<<s6;
}
