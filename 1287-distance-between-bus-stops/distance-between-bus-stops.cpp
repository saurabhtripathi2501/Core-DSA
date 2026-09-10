class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int totalDist = 0;
        int path=0;
        for (auto it: distance) totalDist +=it;
        if(start==destination) return 0;
        else if (start<destination){
            for(int i = start; i<destination; i++) path += distance[i];
        }
        else{
            for(int i = destination; i<start;i++) path +=distance[i];
        }
        return min(path,totalDist-path);
    }
};