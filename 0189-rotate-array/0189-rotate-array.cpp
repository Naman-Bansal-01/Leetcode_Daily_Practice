class Solution {
public:
    void rotate(vector<int>& v,int d) {
         int n=v.size();
        d=d%n;
        vector <int> temp(d);
        for(int i=0; i<d; i++){
            temp[i]=v[n-d+i];
        }
        for(int i=n-1; i>=d; i--){
            v[i]=v[i-d];
        }
        for(int i=0; i<d; i++){
            v[i]=temp[i];
        }
        
        
    }
   
    
};