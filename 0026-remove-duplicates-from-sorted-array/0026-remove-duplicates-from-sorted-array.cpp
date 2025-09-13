class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        if(v.empty()) return 0;
    vector<int> result;
    result.push_back(v[0]);
    for(int i=1; i<v.size(); i++){
        if(v[i]!= v[i-1]){
            result.push_back(v[i]);
         }
        }
    v=result;
    return result.size();
    }     
    
};