#include<iostream>
#include<math.h>
using namespace std;
int isArmstrong(int i)
{
    int rem=0, cnt=0,copy ,num=0;
    copy=i;
    while(copy!=0)
    {
        copy=copy/10;
        cnt++;
    }
    copy=i;
    while(copy!=0)
    {
        rem=copy%10;
        num+= pow(rem,cnt);
        copy=copy/10;
    }
    if(num==i)
        return 1;
    else
        return 0;
}
int main()
{
    for(int i=1;i<=500;i++)
    {
        if(isArmstrong(i))
            cout<<i<<"\t";
    }
    return 0;
}