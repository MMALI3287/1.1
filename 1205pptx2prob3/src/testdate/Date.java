
package testdate;
public class Date {
    private int date,month,year;
    public Date(int date, int month, int year){
        this.date=date;
        this.month=month;
        this.year=year;
    }
    public void displayDate(){
        System.out.println("First day is: "+this.month+"/"+this.date+"/"+this.year);
    }

    public void setDate(int date) {
        this.date = date;
    }

    public void setMonth(int month) {
        this.month = month;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public int getDate() {
        return date;
    }

    public int getMonth() {
        return month;
    }

    public int getYear() {
        return year;
    }
    
    
}
