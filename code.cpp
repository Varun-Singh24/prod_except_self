class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size() ;
    vector <int> prod(n ,1 );
        for(int i = 0 ; i < n ; i++ ){
        for (int j = 0 ; j < n ; j++ ){
            if(i!= j)
                prod[i] *= arr[j] ;
            }
        }
        return prod ; 
    }
    
};
