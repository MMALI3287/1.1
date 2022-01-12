/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package accountdemo;

/**
 *
 * @author User
 */
public class AccountDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Account labibMahbub=new Account(1369,13579,"credit"); 
        System.out.println("Account ID is : "+labibMahbub.accountID);
        System.out.println("Original Balance : "+labibMahbub.balance);
        System.out.println("Transaction Type : "+labibMahbub.transactionType);
        System.out.println("Changed Balance : "+labibMahbub.changeBalance(756));
        
    }
    
}
