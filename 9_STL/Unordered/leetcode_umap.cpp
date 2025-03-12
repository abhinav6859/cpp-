//question no. 1497


class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
         unordered_map<int, int> umap;
   
    for (int num : arr) {
        int remainder = num % k; 
        if(remainder<0)
        remainder+=k;
        umap[remainder]++;
    }

    for (auto entry : umap) {
        int remainder = entry.first;
        int count = entry.second;

        if (remainder == 0) {
            if (count % 2 != 0) {
                return false;
            }
        }
      
        else if (umap[remainder] != umap[k - remainder]) {
            return false;
        }
    }

    return true;
    }
};