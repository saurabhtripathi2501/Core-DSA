class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int cntb=0;
        int cnta=0;
        int cntl=0;
        int cnto=0;
        int cntn=0;
        int mini2=0;

        int len = text.size();
        if(len>=7){
            for(int i = 0; i<len; i ++){
                if(text[i]=='b')cntb++;
                else if(text[i]=='a')cnta++;
                else if(text[i]=='l')cntl++;
                else if(text[i]=='o')cnto++;
                else if(text[i]=='n')cntn++;
            }
            cntl/=2;
            cnto/=2;
            int mini1 = min(min(cntb,cnta),min(cntl,cnto));
            mini2 = min(mini1,cntn);
            
        }
        return mini2;

    }
};