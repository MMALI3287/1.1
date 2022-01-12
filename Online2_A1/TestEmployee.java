public class TestEmployee {
    public static void main(String[] args) {
        Developer Shamim = new Developer(5, 18);
        // Developer Tabia = new Developer(3, 20);
        HROfficer Shawon = new HROfficer(Shamim);
        Shawon.checkPerformance(5, 18);
    }
}
