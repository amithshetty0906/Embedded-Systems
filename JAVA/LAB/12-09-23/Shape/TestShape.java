public class TestShape{

	public static void main(String[] args) {

		Shape s;
		
		Shape sh = new Shape();
		System.out.println(sh.getColour());
		System.out.println(sh.isFilled());

		sh.setColour("Blue");
		sh.setFilled(true);
		System.out.println(sh.getColour());
		System.out.println(sh.isFilled());

		sh = new Shape("Pink", false);
		System.out.println(sh.getColour());
		System.out.println(sh.isFilled());

		Rectangle rect = new Rectangle(3,9);
		System.out.println("Area: " + rect.getArea() + "\nPerimeter: " + rect.getPerimeter() + "\n " + rect);

		Circle cr = new Circle(5);
		System.out.println("Area: " + cr.getArea() + "\nPerimeter: " + cr.getPerimeter() + "\n " + cr);

	    Square sq = new Square();
	    sq.setSide(4);
	    System.out.println(sq.getSide());

	    sq.setWidth(2);
	    sq.setLength(4);
	    System.out.println(sq);

	    System.out.println("Area: " + sq.getArea() + "\nPerimeter: " + sq.getPerimeter() + "\n " + sq);
		

	}
}