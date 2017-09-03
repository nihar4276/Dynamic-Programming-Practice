#include<bits/stdc++.h>


using namespace std;

int get_min(int coins[],int n,long s)
{

        int dp[s+1];

        for(int i=1;i<=s;i++)
            dp[i]=INT_MAX;

        dp[0]=0;


        int mins=0;
        for(int i=1;i<=s;i++)
        {

            for(int j=0;j<n;j++)
            {

                if(coins[j]<=i && dp[i-coins[j]]+1<dp[i])
                    dp[i]=dp[i-coins[j]]+1;





            }







        }

        return dp[s];









}


int main()
{

    cout<<"enter number of coins"<<endl;

    int n;
    cin>>n;


    cout<<"enter all the coins denominations"<<endl;



    int coins[n];


    for(int i=0;i<n;i++)
    {


        cin>>coins[i];




    }

    long sum;

    cout<<"enter denomination "<<endl;
    cin>>sum;

    cout<<get_min(coins,n,sum);



return 0;
}
