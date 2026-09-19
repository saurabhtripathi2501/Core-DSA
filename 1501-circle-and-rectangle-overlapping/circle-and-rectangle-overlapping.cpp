class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int xClosest;
        int yClosest;
        //we will find the closest point of the rectangle from center of the circle
        if(x1<=xCenter && xCenter<=x2) xClosest = xCenter;
        else if(abs(x1-xCenter)<=abs(x2-xCenter)) xClosest = x1;
        else xClosest = x2;


        if(y1<=yCenter && yCenter<=y2) yClosest = yCenter;
        else if(abs(y1-yCenter)<=abs(y2-yCenter)) yClosest = y1;
        else yClosest = y2;

        //now distance of the closest point from the center of the circle 
        long long x= 1LL*(xCenter-xClosest)*(xCenter-xClosest);
        long long y = 1LL*(yCenter-yClosest)*(yCenter-yClosest);
        long long sumOfSquares = x+y;
        long long radSquare = 1LL*radius*radius;

        if(sumOfSquares <= radSquare) return true;
        return false;
    }
};