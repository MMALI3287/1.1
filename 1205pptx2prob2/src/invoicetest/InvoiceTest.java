package invoicetest;
public class InvoiceTest {
    public static void main(String[] args) {
        Invoice i1=new Invoice("001","Special Delivary",12,100000);
        System.out.println("Total Invoice Amount: "+i1.getInvoiceAmount());
    }    
}
