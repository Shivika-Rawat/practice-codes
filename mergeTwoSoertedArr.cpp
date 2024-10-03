// Given two vector arr1[] and arr2[] of size m and n sorted in increasing order . Merge the two arrays into a single sorted arr of size (m+n)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {1, 6, 7, 10};
    int arr2[] = {0, 1, 3, 8, 11, 12, 15, 18};
    int m = 4;
    int n = 8;
    // code to merge two sorted arr
    int result[m + n];
    int i = 0; // will helps us to iterate arr1
    int j = 0; // will helps us to iterate arr2
    int k = 0; // will helps us to iterate on result

    while (i < m and j < n)
    {
        // both i and j should be within the limits or arr1 and arr2
        if (arr1[i] < arr2[j])
        {
            result[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            result[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i<m){
        //arr2 was exausted and we still got element left in arr1
        result[k]=arr1[i];
        i++; k++;
    }
    while(j<n){
        //arr1 was exausted and we still got element left in arr2
        result[k]=arr2[j];
        k++; j++;
    }

    //display result
    for(int i=0;i<(m+n); i++){
        cout<<result[i]<<" ";
    }cout<<endl; 

    return 0;
}