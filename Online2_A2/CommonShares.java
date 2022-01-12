public class CommonShares {
    private static double price;
    double percentage;
    int OwnerID;

    public static void setPrice(double price) {
        CommonShares.price = price;
    }

    public static double getPrice() {
        return price;
    }
}
