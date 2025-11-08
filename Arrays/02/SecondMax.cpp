

    #include <iostream>
    using namespace std;

    int getSecondLargest(vector<int> &arr) {
        // code here

        int ans = -1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>ans)

                ans=arr[i]; // Took Out the largest
            
        }
        int second = -1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=ans) // Now the element which is not equal to largest will be filtered
            second = max(second,arr[i]); // secondMax is founded now and we got our answer
            
        }
        return second;
        
    }
     
     
     int main(){ 
     
     
     
     return 0; 
     
     }