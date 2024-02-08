public class Shape{

	private String colour = "red";
	private boolean filled = true;

	// default constructor
	Shape(){
		colour = "green";
		filled = true;
	}

	Shape(String colour, boolean filled)
	{
		this.colour = colour;
		this.filled = filled;
	}

	//methods
	//getter methods
	public String getColour(){
		return colour;
	}

	public boolean getFilled(){
		return filled;
	}

	//setter methods
	public void setColour(String colour){
		this.colour = colour;
	}

	public void setFilled(boolean filled){
		this.filled = filled;
	}

	public boolean isFilled(){
		return filled;
	}

	@Override
	public String toString()
	{
		String end = isFilled()? "filled." : "not filled.";
		return "A shape with colour of " + colour + " and " + end ;
	}
}