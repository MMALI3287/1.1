package test_triangle;
import  java.util.Scanner;
public class Test_Triangle {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Input 1 value : ");
        Triangle t1=new Triangle();
        t1= GenerateTriangle.createTriangle(sc.nextDouble());
        System.out.print("Input 2 values : ");
        Triangle t2=new Triangle();
        t2=GenerateTriangle.createTriangle(sc.nextDouble(),sc.nextDouble());
        System.out.print("Input 3 values : ");
        Triangle t3=new Triangle();
       t3=GenerateTriangle.createTriangle(sc.nextDouble(),sc.nextDouble(),sc.nextDouble());
        System.out.println(t1.getName()+" Area: "+t1.getArea());
        System.out.println(t2.getName()+" Area: "+t2.getArea());
        System.out.println(t3.getName()+" Area: "+t3.getArea());
    }    
}
