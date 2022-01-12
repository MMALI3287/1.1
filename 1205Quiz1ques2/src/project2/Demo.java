package project2;
public class Demo {
    public static void main(String[] args) {
        Player p1=new Player();
        double gainingPoints= 500;
        p1.setLife(p1.getLife()+gainingPoints);
        System.out.println("Current Life: "+ p1.getLife());
        double losingPoints= 200;
        p1.setLife(p1.getLife()-losingPoints);
        System.out.println("Current Life: "+ p1.getLife());
    }
}
