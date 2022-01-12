public class Owner extends CommonShares {
    private int ownerID;
    double percentage;
    double price = CommonShares.getPrice();
    CommonShares obj1 = new CommonShares();

    double PriceRise(double percentage) {
        return price + (price * percentage);
    }

    double PriceFall(double percentage) {
        return price - (price * percentage);
    }

    public Owner(int ownerID) {
        this.ownerID = ownerID;
    }

    public int getOwnerID() {
        return ownerID;
    }

    public void setPercentage(double percentage) {
        this.percentage = percentage;
    }

    public double getPercentage() {
        return percentage;
    }

}
