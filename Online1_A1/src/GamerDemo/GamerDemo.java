package GamerDemo;
public class GamerDemo {
    public static void main(String[] args) {
        Gamer g1=new Gamer(200,12,"Noob");
        System.out.println("Type of Gamer : "+g1.getGamerType());
        System.out.println("Total Score : "+g1.getTotalScore());
        System.out.println("Total Matches : "+g1.getTotalMatches());
        System.out.println("Mean Score : "+g1.calculateFinalScore());
    }
}
