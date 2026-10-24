class Solution {
    int toTotalDays(string s, vector<int>& days){
        int sum = 0;
       int month= stoi(s.substr(0,2));
       int date = stoi(s.substr(3,2));
       for(int i = 0; i<month-1;i++) sum += days[i]; 
       return sum + date;
    }
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int>days = {31,28,31,30,31,30,31,31,30,31,30,31};
        int aliceArrive = toTotalDays(arriveAlice,days);
        int aliceLeave = toTotalDays(leaveAlice,days);
        int bobArrive = toTotalDays(arriveBob,days);
        int bobLeave = toTotalDays(leaveBob,days);

        int start = max(aliceArrive,bobArrive);
        int end = min(aliceLeave,bobLeave);

        int ans = end-start +1;
        if(ans>0) return ans;
        return 0;
    }
};