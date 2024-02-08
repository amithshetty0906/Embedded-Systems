class Circle extends Shape{

	private double radius;
	private final double PI = 3.142;

	//default constructor
	Circle(){
		super();
		radius = 1.0;
	}

	Circle(double radius)
	{
		this.radius = radius;
	}

	Circle(double radius, String colour, boolean filled)
	{
		super(colour, filled);
		this.radius = radius;
	}

	public double getRadius(){
		return radius;
	}

	public void setRadius(double radius){
		this.radius = radius;
	}

	public double getArea()
	{
		return PI * radius * radius;
	}

	public double getPerimeter()
	{
		return 2* PI * radius;
	}

	@Override
	public String toString()
	{
		String end = super.toString();
		return "A Circle with radius is " + radius + "Area: " + getArea() + " Perimeter: " + getPerimeter() + end  ;
	}

}