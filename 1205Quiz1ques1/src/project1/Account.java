package project1;
public class Account {
     private String id, name;
     private double balance;
    void Account(String id, String name, double balance){
        this.id=id;
        this.name=name;
        this.balance=balance;
    }
    public String getId() {
        return id;
    }
    public String getName() {
        return name;
    }
    public double getBalance() {
        return balance;
    }
    public void setId(String id) {
        this.id = id;
    }
    public void setName(String name) {
        this.name = name;
    }
    public void setBalance(double balance) {
        this.balance = balance;
    }
}
