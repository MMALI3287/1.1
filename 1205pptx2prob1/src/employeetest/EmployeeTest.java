package employeetest;
public class EmployeeTest {
    public static void main(String[] args) {
        Employee e1=new Employee(" Ali","Musaddique",5000);
        Employee e2=new Employee(" Prokriti","Tabia",10000);
        System.out.println("Yearly Salary of "+e1.getfName()+e1.getlName()+ " is: "+12*e1.getmSalary());        
        System.out.println("Yearly Salary of "+e2.getfName()+e2.getlName()+ " is: "+12*e2.getmSalary());
        e1.setmSalary(e1.getmSalary()*1.1);        
        e2.setmSalary(e2.getmSalary()*1.1);
        System.out.println("Yearly Salary of "+e1.getfName()+e1.getlName()+ "is: "+12*e1.getmSalary());        
        System.out.println("Yearly Salary of "+e2.getfName()+e2.getlName()+ "is: "+12*e2.getmSalary());
      }
 }
