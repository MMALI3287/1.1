package employeetest;

public class Employee {
    private String lName, fName;
    private double mSalary;

    public void setlName(String lName) {
        this.lName = lName;
    }

    public void setfName(String fName) {
        this.fName = fName;
    }

    public void setmSalary(double mSalary) {
        if (mSalary < 0.0)
            this.mSalary = 0.0;
        else
            this.mSalary = mSalary;
    }

    public String getlName() {
        return lName;
    }

    public String getfName() {
        return fName;
    }

    public double getmSalary() {
        return mSalary;
    }

    public Employee(String lName, String fName, double mSalary) {
        this.fName = fName;
        this.lName = lName;
        if (mSalary < 0.0)
            this.mSalary = 0.0;
        else
            this.mSalary = mSalary;
    }

}
