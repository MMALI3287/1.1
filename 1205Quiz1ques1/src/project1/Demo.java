package project1;
public class Demo{
    public static void main(String[] args) {
Account rahimAccount = new Account();
rahimAccount.setName("Rahim Khandoker");
rahimAccount.setId ("1234567890");
rahimAccount.setBalance(100);
double depositedAmount = 500;
rahimAccount.setBalance( rahimAccount.getBalance()+depositedAmount);
System.out.println("current balance:"  +rahimAccount.getBalance());
double withdrawnAmount = 200;
rahimAccount.setBalance( rahimAccount.getBalance()-withdrawnAmount);
System.out.println("current balance:"  +rahimAccount.getBalance());
}
}
