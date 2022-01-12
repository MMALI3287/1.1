
package accountdemo;


public class Account {
    int accountID;
    double balance;
    String transactionType;
    public Account(){
        accountID=0;
        balance=-1.0;
        transactionType=null;
    }
    public Account(int ID,double bal,String transType){
        accountID=ID;
        balance=bal;
        transactionType=transType;
    }
    public double changeBalance(double x){
        if(transactionType=="debit"){
            balance=balance-x;
        }
        else if(transactionType=="credit"){
            balance=balance+x;
        }
        return balance;
    }
    
}
