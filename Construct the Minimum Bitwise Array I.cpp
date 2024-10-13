class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& a) {
        int n= a.size();
        vector<int> res(n,-1);
        for(int i=0;i<n;i++){
            for(int x=0;x<=a[i];x++){
                if((x|(x+1)) ==a[i]){
                    res[i]=x;
                    break;
                }
            }
        }

        return res;

    }


};
