public class Developer {
    private int totalProjects, totalMonths;

    public Developer(int Tp, int Tm) {
        totalMonths = Tm;
        totalProjects = Tp;
    }

    public void setTotalProjects(int Tp) {
        totalProjects = Tp;
    }

    public double getTotalProjects() {
        return totalProjects;
    }

    public void setTotalMonths(int Tm) {
        totalProjects = Tm;
    }

    double getTotalMonths() {
        return totalMonths;
    }
}
