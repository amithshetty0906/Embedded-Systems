import java.lang.AssertionError;

public class TestCalculator {
    public static void Addition() {

        System.out.println("Running Addition tests");

        Calculator calc = BasicCalculator.getInstance();
        calc.put(20).put(30).add();
        assert (calc.read() == 50);
        calc.put(50).put(-25).add();
        assert (calc.read() == 25);
    }

    public static void main(String[] args) {

        Addition();
        Calculator calc = BasicCalculator.getInstance();

        System.out.println(calc.put(20).put(40).add().read());
        assert (calc.read() == 60);

        calc.clearAll();
        System.out.println(calc.put(40).put(4).div().read());
        assert (calc.read() == 10);

        System.out.println(calc.put(80).put(40).clear().put(100).div().read());
        assert (calc.read() == 0);

        calc.put(10).sub();
        System.out.println(calc.read());

        assert (calc.read() == -90);
        System.out.println(calc.neg().read());

        assert (calc.read() == 90);
        calc.clearAll();

        System.out.println(calc.put(5).put(2).mul().read());
        assert (calc.read() == 10);
    }
}