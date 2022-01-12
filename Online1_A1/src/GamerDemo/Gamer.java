package GamerDemo;
public class Gamer {
        private double totalScore,totalMatches;
        private String gamerType;
        
        Gamer(){
            this.gamerType = null;
            this.totalScore = -1.0;
            this.totalMatches = -1.0;
        }
        
        Gamer(double totalScore, double totalMatches, String gamerType){
            this.gamerType =gamerType;
            this.totalScore = totalScore;
            this.totalMatches = totalMatches;
        }
        
        double calculateFinalScore(){
            if(this.gamerType=="Noob")
                return 2*totalScore*totalMatches/(totalScore+totalMatches);
           else
                return totalScore/totalMatches;
        }
    public void setTotalScore(double totalScore) {
        this.totalScore = totalScore;
    }

    public void setTotalMatches(double totalMatches) {
        this.totalMatches = totalMatches;
    }

    public void setGamerType(String gamerType) {
        this.gamerType = gamerType;
    }

    public double getTotalScore() {
        return totalScore;
    }

    public double getTotalMatches() {
        return totalMatches;
    }

    public String getGamerType() {
        return gamerType;
    }
        
}
