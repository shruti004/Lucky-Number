#include <iostream>
#include <bits/stdc++.h> 

using namespace std;


int main ()
{
  int arr[] = { 1, 2, 2, 3, 3, 3 };
  sort(arr, arr + 6); 
  
    int max_count = 1, res = arr[0], curr_count = 1; 
    for (int i = 1; i < 6; i++) { 
        if (arr[i] == arr[i - 1]) 
            curr_count++; 
        else { 
            if (curr_count > max_count) { 
                max_count = curr_count; 
                res = arr[i - 1]; 
            } 
            curr_count = 1; 
        } 
    } 
    
  
   
    if (curr_count > max_count) 
    { 
        max_count = curr_count; 
        res = arr[6 - 1]; 
    } 
    if(max_count==res)
    {
        cout<<res;
    }
    else
    cout<<"-1";
  

  return 0;
}
