class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        if( n > m) return false;
        vector<int> alpha1(26, 0);
        vector<int> alpha2(26, 0);

        for( char ch : s1){
            int val = ch - 'a';
            alpha1[val]++;
        }

        int i = 0, j = 0;
        while(j < m){
            int front = s2[j]-'a';
            alpha2[front]++;

            if(j-i+1 >= n){
                if(alpha1 == alpha2) return true;
                int back = s2[i]-'a';
                alpha2[back]--;
                i++;
            }

            j++;
        }

        return false;
    }
};
