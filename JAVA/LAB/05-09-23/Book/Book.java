class Book{
	private String name;
	private double price;
	private Author author;
	private int qty;

	public Book(String name,Author author,double price,int qty){
		this.author=author;
		this.name=name;
		this.price=price;
		this.qty=qty;
	}

	public Book(String name,Author author,double price){
		this.author =author;
		this.name=name;
		this.price=price;
	}

	public String getName(){
		return this.name;
	}
	public Author getAuthor(){
		return this.author;
	}
	public double getprice(){
		return this.price;
	}
	public void setPrice(double price){
		this.price=price;
	}
	public void setQty(int qty){
		this.qty=qty;
	}
	public int getQty(){
		return this.qty;
	}

	@Override
	public String toString(){
		return ("Book = " + this.name + ", Author[" + author.toString() + "], price = " + this.price + ", qty = "+this.qty);

	}
}