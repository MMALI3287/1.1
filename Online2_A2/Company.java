import java.util.Scanner;

public class Company {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Price : ");
        double price = sc.nextDouble();
        CommonShares.setPrice(price);
        System.out.print("Enter First Owner ID : ");
        int OwnerID1 = sc.nextInt();
        System.out.print("Enter Second Owner ID : ");
        int OwnerID2 = sc.nextInt();
        Owner Karim = new Owner(OwnerID1);
        Owner Rahim = new Owner(OwnerID2);
        System.out.print("Enter price rise percentage: ");
        double p1 = sc.nextDouble();
        Karim.setPercentage(p1);
        System.out.print("Enter price fall percentage: ");
        double p2 = sc.nextDouble();
        Rahim.setPercentage(p2);
        System.out.println("Owner ID : " + Karim.getOwnerID());
        System.out.println("Rise Amount : " + Karim.getPercentage());
        System.out.println("Price : " + Karim.PriceRise(p1));
        System.out.println("Owner ID : " + Rahim.getOwnerID());
        System.out.println("Rise Amount : " + Rahim.getPercentage());
        System.out.println("Price : " + Rahim.PriceFall(p2));
    }

}