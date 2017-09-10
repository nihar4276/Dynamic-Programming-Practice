#include<bits/stdc++.h>

using namespace std;


int editDistance(string s,string p)
{
    int m=s.length();
    int n=p.length();
    int a,b,c;

    int DP[m+1][n+1];

   for(int i=0;i<=m;i++)
        for(int j=0;j<=n;j++)
        {

            if(i==0)
            DP[i][j]=j;
           else  if(j==0)
            DP[i][j]=i;

           else if(s[i]==p[j])
                DP[i][j]=DP[i-1][j-1];

            else
            {

            a=DP[i-1][j-1];
            b=DP[i-1][j];
            c=DP[i][j-1];

            DP[i][j]=1+(a>b)?(a>c)?a:c:(b>c)?b:c;





            }








        }




return DP[m][n];
}

int main()
{

string s;
string p;
cin>>s>>p;
cout<<editDistance(s,p);





return 0;
}
