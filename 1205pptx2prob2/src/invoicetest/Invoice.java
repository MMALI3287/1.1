package invoicetest;
public class Invoice {
    private String pNum,pDes;
    private int pQuan;
    private double pPrice;
    public Invoice(String pNum, String pDes, int pQuan, int pPrice){
        this.pNum=pNum;
        this.pDes=pDes;
        if(pQuan<0)
            this.pQuan=0;
        else
            this.pQuan=pQuan;
        if(pPrice<0)
            this.pPrice=0.0;
        else
            this.pPrice=pPrice;            
    }

    public String getpNum() {
        return pNum;
    }

    public String getpDes() {
        return pDes;
    }

    public int getpQuan() {
        return pQuan;
    }

    public double getpPrice() {
        return pPrice;
    }

    public void setpNum(String pNum) {
        this.pNum = pNum;
    }

    public void setpDes(String pDes) {
        this.pDes = pDes;
    }

    public void setpQuan(int pQuan) {
        if(pQuan<0)
            this.pQuan=0;
        else
            this.pQuan=pQuan;
    }

    public void setpPrice(double pPrice) {
        if(pPrice<0)
            this.pPrice=0.0;
        else
            this.pPrice=pPrice;     
    }
    double getInvoiceAmount()
    {
        return (double)pQuan*pPrice;
    }
}
