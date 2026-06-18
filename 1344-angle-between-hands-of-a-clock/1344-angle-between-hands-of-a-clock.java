class Solution {
    public double angleClock(int hour, int minutes) {

        double h=(hour%12)*30+minutes*0.5;
        double m=minutes*6;

        double dif=Math.abs(h-m);
        return Math.min(dif,360-dif);
        
    }
}