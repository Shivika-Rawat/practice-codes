#include <iostream>
#include <math.h>
using namespace std;
int countdigit(int num)
{
    int counnt = 0;
    while (num)
    {
        counnt++;
        num /= 10;
    }
    return counnt;
}
bool armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans = ans + pow(rem, digit);
    }
    if (ans == num)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    cin >> num;

    // count digit
    int digit = countdigit(num);
    // Armstrong number
    cout << armstrong(num, digit);
    return 0;
}


/*
Range addition
class Solution {
public:
    
    //  * @param length: the length of the array
    //  * @param updates: update operations
    //  * @return: the modified array after all k operations were executed
     

    
    vector<int> getModifiedArray(int length, vector<vector<int>> &updates) {
        // Write your code here

        vector<int>ans(n,0);
        vector<int>psum(n+1,0);
        for(int i=0;i<updates.size();i++){
            psum[updates[i][0]]+=updates[i][2];
            psum[updates[i][1]+1]+=updates[i][2];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=psum[i];
            ans[i]=sum;
        }
        return ans;
    }
};    */