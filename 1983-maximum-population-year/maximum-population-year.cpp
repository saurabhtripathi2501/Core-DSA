class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int>change(101,0);
        for(int i = 0 ; i< logs.size();i++){
            int birth = logs[i][0];
            int death = logs[i][1];

            change[birth-1950] += 1;
            change[death-1950] -= 1;
        }

        int population = 0;
        int maxPopulation = 0;
        int answer;

        for(int i = 1950; i<2050; i++){
            population += change[i-1950];

            if(population>maxPopulation){
                maxPopulation = population;
                answer = i;
            }
        }

        return answer;
    }

};