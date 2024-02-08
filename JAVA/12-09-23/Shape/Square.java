class Square extends Rectangle{

	//constructors
	Square(){
		super();
	}

	Square(double side)
	{
		super(side,side);
	}

	Square(double side, String colour, boolean filled)
	{
		super(side, side, colour, filled);
	}

	public double getSide()
	{
		return super.getWidth();
	}

	public void setSide(double side){
		super.setWidth(side);
	}

	@Override
	public void setWidth(double width){
		super.setWidth(width);
		super.setLength(width);
	}

	@Override
	public void setLength(double length){
		super.setWidth(length);
		super.setLength(length);
	}

	public double getArea()
	{
		return getSide() * getSide();
	}

	public double getPerimeter()
	{
		return 4 * getSide();
	}

	@Override
	public String toString()
	{
		String end = super.toString();
		return "A Square with side is" + super.getWidth() + end  ;
	}
}