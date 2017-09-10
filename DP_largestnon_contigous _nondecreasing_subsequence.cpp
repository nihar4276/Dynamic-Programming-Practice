#include<bits/stdc++.h>
/* apne dimaaag mein he aaya ye solution */

/* coun[i] defines the length of the seq at that pos */

using namespace std;
int largestsubseq(int a[],int n)
{
    int coun[n+1]={0};

    coun[1]=1;

    for(int i=2;i<=n;i++)
    {
        if(a[i]>=a[i-1])
            coun[i]=coun[i-1]+1;
        else
        coun[i]=coun[i-1];




    }




return coun[n];






}



int main()
{



int n;
cin>>n;

int a[n+1];

for(int i=1;i<=n;i++)
    cin>>a[i];

cout<<largestsubseq(a,n);







return 0;
}
