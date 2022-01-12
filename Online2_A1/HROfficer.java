public class HROfficer {
    public Developer devobj;

    public HROfficer(Developer devobj) {
        this.devobj = devobj;
    }

    public void checkPerformance(int totalProjects, int totalMonths) {

        int a = totalProjects * totalMonths + 100;
        System.out.println(a);
        int j, sum;
        for (j = 0; a != 0; a = a / 10)
            j = j * 10 + a % 10;
        for (sum = 0; j != 0; j = j / 10)
            sum = sum + (j % 10 * j % 10 * j % 10);
        if (sum % 2 != 0)
            System.out.println("Developers performance is good");
        else if (sum % 2 == 0)
            System.out.println("Developers performance is bad");
    }

}
