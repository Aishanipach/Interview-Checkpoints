//SOLUTION-1  TIME: O(mnlogn)

//You can sort each word and if it matches with a key in the map then push that string into the vector<string> which is the value in the map, mp <string, vector<string>>

// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
//         unordered_map<string, vector<string>> mp;

//         for(int i=0;i<strs.size();i++){
//             string key = strs[i];
//             sort(key.begin(), key.end());
//             mp[key].push_back(strs[i]);
//         }
//         vector<vector<string>> result;
//            for(auto &entry: mp){
//             result.push_back(entry.second);
//             }

// return result;
//     }
// };


//SOLUTION 2 TIME: O(mn)
//Maintain an array where each index represents a character, by using the fact that a ASCII value is 97
// so to get index of say d you do 'd' - 'a' which is 97 - 100 = 3 [which is the index of d in our array)
//Maintain this array for each word 
// [1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 ] which represents 'abs' 'bas' 'sab' (all anagrams)
//Maintain it as a string for ease, '1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0' in map, mp<string, vector<string>>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;

        for (string& s : strs) {
            array<int, 26> count = {0};

            // Count frequency of each letter in the string
            for (char c : s) {
                count[c - 'a']++;
            }

            //Make the key
            string key;
            for (int num : count) {
                key += to_string(num) + ",";
            }
            //And match here
            ans[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& entry : ans) {
            result.push_back(move(entry.second));
        }

        return result;        
    }
};
