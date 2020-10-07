//Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers.
//Then print the respective minimum and maximum values as a single line of two space-separated long integers.
//Input Format

//A single line of five space-separated integers.

//Output Format:

//Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers.
//(The output can be greater than a 32 bit integer.)
//Example
//arr=[1,3,5,7,9]
//The minimum sum is 1+3+5+7=16 and the maximum sum is 3+5+7+9=24 . The function prints 16 24

//C++ solution

#include <bits/stdc++.h>
using namespace std;
int main()
{
int val,i;
long long int sum=0;
vector<int> array;
for(i=0; i<5; i++)
    {
        cin>>val;
        sum+=val;
    //cout<<sum<<" ";
        array.push_back(val);
    }
    //cout<<endl;
    sort(array.begin(), array.end());

    /*for(i=0; i<5; i++)
    {
        cout<<array[i]<<endl;
    }*/
    cout<<sum-array[4]<<" "<<sum-array[0];
    return 0;
}
