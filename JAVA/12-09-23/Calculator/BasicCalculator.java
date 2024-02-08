class BasicCalculator implements Calculator {
    
    private int cell[];
    private int index;

    private BasicCalculator() {
        cell = new int[2];
        index = 0;
    }

    public Calculator put(int n) {
        cell[index] = n;
        index ^= 1;
        return this;
    }

    public int read() {
        return this.cell[0];
    }

    public Calculator neg() {
        cell[0] = -cell[0];
        return this;
    }

    public Calculator add() {
        cell[0] = cell[1] + cell[0];
        return this;
    }

    public Calculator sub() {
        cell[0] = cell[0] - cell[1];
        return this;
    }

    public Calculator mul() {
        cell[0] = cell[0] * cell[1];
        return this;
    }

    public Calculator div() {
        cell[0] = cell[0] / cell[1];
        return this;
    }

    public Calculator clear() {
        index ^= 1;
        cell[index] = 0;
        return this;
    }

    public Calculator clearAll() {
        index = 0;
        cell[0] = cell[1] = 0;
        return this;
    }

    public static BasicCalculator getInstance()
    {
        return (new BasicCalculator());
    }
}