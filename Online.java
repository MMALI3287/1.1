import java.util.Scanner;

public class Online {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Input the number");
        int a = sc.nextInt();
        int i,j=0;
        while(a!=0)
        {
            j=j*10+a%10;
            a=a/10;
        }
        //System.out.println(j+"\n");
        while(j!=0)
        {
            i=j%10;        
            System.out.println(i);
            j=j/10;
        }
    }

}