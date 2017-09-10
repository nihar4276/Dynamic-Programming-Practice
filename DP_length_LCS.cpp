#include<bits/stdc++.h>

using namespace std;

int findLCS(string p,string s)
{
    int m,n;

    m=s.length();
    n=p.length();

  int a[m+1][n+1];

  int i,j;

  for(int i=n;i>=0;i--)
    for(int j=m;j>=0;j--)
    {
       if(j==m || i==n)
        {
            a[i][j]=0;

        }
        else if(p[i]==s[j])
        {

            a[i][j]=a[i+1][j+1]+1;



        }
        else
        {

        a[i][j]=max(a[i+1][j],a[i][j+1]);




        }









    }







return a[0][0];


}



int main()
{

string p,s;
cin>>p>>s;


cout<<findLCS(p,s);








return 0;
}
