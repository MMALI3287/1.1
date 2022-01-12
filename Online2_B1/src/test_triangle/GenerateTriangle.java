package test_triangle;
import java.lang.Math;
public class GenerateTriangle {
     static Triangle createTriangle(double side){
        Triangle t1=new Triangle();
        t1.setArea((Math.sqrt(3)/4 )* side*side);
        t1.setName("Equilateral Triangle");
        return t1;
    }
    static Triangle createTriangle(double side,double base){
        Triangle t1=new Triangle();
        t1.setArea(0.5*base*side);
        t1.setName("Isosceles Triangle");
        return t1;
    }
   static Triangle createTriangle(double side1,double side2,double side3){
        Triangle t1=new Triangle();
        double s=(side1+side2+side3)/2;
        t1.setArea(Math.sqrt(s*(s-side1)*(s-side2)*(s-side3)));
        t1.setName("Scalene Triangle");
        return t1;
    }
}
