import java.util.Scanner;

public class CBSE {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Input the Total Number : ");
        int X = sc.nextInt();
        System.out.println("Input the Number of");
        System.out.print("Bangla : ");
        int Ba = sc.nextInt();
        System.out.print("English : ");
        int E = sc.nextInt();
        System.out.print("Physics : ");
        int P = sc.nextInt();
        System.out.print("Chemistry : ");
        int C = sc.nextInt();
        System.out.print("Biology : ");
        int Bi = sc.nextInt();
        System.out.println("Percentage of 5 subjects is : " + (((Ba + E + P + C + Bi) / (float) (5 * X)) * 100) + "%");

    }

}
