class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        // Each index corresponds to the label's total trust
        // total trust = number of people trust label - number of people label trusts
        vector<int> labelTrust(n+1);

        // Go through trust array and compute trust for each label
        for (int i = 0; i < trust.size(); i++) {
            labelTrust[trust[i][0]]--;
            labelTrust[trust[i][1]]++;
        }

        // Find if there exists a person (judge) with trust = n-1
        for (int j = 1; j <= n; j++) {
            if (labelTrust[j] == n - 1) {
                return j;
            }
        }

        return -1;
    }
};