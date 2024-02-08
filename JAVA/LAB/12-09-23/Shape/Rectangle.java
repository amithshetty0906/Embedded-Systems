class Rectangle extends Shape{

		private double width;
		private double length;

	Rectangle()
	{
		super();
		width = 1.0;
		length = 1.0;
	}

	Rectangle(double width, double length)
	{
		this.width = width;
		this.length = length;
	}

	Rectangle(double width, double length, String colour, boolean filled)
	{
		super(colour, filled);
		this.width = width;
		this.length = length;
	}

	public double getWidth(){
		return width;
	}

	public void setWidth(double width){
		this.width = width;
	}

	public double getLength(){
		return length;
	}

	public void setLength(double length){
		this.length = length;
	}

	public double getArea()
	{
		return width * length;
	}

	public double getPerimeter()
	{
		return 2*(width + length);
	}

	@Override
	public String toString()
	{
		String end = super.toString();
		return "Rectangle of width and length " + width + "and" + length +  end  ;
	}
}