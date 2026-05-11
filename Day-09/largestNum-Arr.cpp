#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> arr = {22, 25, 13, 8, 10};
    int largest(vector<int> &arr); {
        // code here
         int n = arr.size();
         int maxi = -1;
          for (int i=0;i<n;i++){
              if (arr[i]>maxi ) maxi=arr[i];
              else maxi=maxi;
          }
        return maxi;
        
    }
    
};
