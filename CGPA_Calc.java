import java.util.Scanner;

public class CGPA_Calc {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Input obtained GPA in");
        System.out.print("CSE1101 : ");
        float E1 = sc.nextFloat();
        System.out.print("CSE1102 : ");
        float E2 = sc.nextFloat();
        System.out.print("CSE1108 : ");
        float E3 = sc.nextFloat();
        System.out.print("PHY1115 : ");
        float P1 = sc.nextFloat();
        System.out.print("CHEM115 : ");
        float C1 = sc.nextFloat();
        System.out.print("MATH1115 : ");
        float M1 = sc.nextFloat();
        System.out.print("PHY1116 : ");
        float P2 = sc.nextFloat();
        System.out.print("HUM1107 : ");
        float H1 = sc.nextFloat();
        System.out.print("HUM1108 : ");
        float H2 = sc.nextFloat();
        System.out.println("Your CGPA is : "
                + ((((E1 + P1 + C1 + M1 + H1) * 3) + ((E2 + E3 + H2) * 1.5) + (P2 * 0.75)) / (float) 20.25));
    }

}
