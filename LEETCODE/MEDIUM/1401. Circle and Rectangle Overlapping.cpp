class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        //Figuring out nearest point from circle
        int xd,yd;
        if(x1>xCenter){
            xd=x1;
        }else if(xCenter>x2){
            xd=x2;
        }else{
            xd=xCenter;
        }

        if(y1>yCenter){
            yd=y1;
        }else if(yCenter>y2){
            yd=y2;
        }else{
            yd=yCenter;
        }

        float dis=sqrt(((xd-xCenter)*(xd-xCenter)) + ((yd-yCenter)*(yd-yCenter)));

        return dis<=radius;
    }
};