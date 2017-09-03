#include<bits/stdc++.h>

//two cases
// 1) either include item in backpack or not

using namespace std;

int knapsack(int items[],int n,int values[],long c)
{
    int dp[n+1][c+1];


    for(int i=0;i<=n;i++)
        dp[i][0]=0;

    for(int j=0;j<=c;j++)
        dp[0][j]=0;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=c;j++)
        {

            if(items[i-1]<=j)
            {

                dp[i][j]=max(values[i-1]+dp[i-1][j-items[i-1]],dp[i-1][j]);




            }
            else
                dp[i][j]=dp[i-1][j];







        }

    return dp[n][c];





}




int main()
{

    cout<<"enter number of items"<<endl;
    int n;
    cin>>n;
    cout<<"enter the items"<<endl;
    int items[n];

    for(int i=0;i<n;i++)
        cin>>items[i];

    int values[n];

    cout<<"enter value for each item"<<endl;

    for(int i=0;i<n;i++)
        cin>>values[i];


    long capacity=0;

    cout<<"enter capacity of backpack"<<endl;
    cin>>capacity;


    cout<<knapsack(items,n,values,capacity);







return 0;
}
