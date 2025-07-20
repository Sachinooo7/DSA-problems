class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string> ans;

        for (string& path : folder) {
            if (ans.empty() || path.find(ans.back() + "/") != 0) {
                ans.push_back(path);
            }
        }

        return ans;
    }
};
