import java.util.Scanner;

class book {
	private String author;
    private String title;
    private double price;
    private String publisher;
    private int stockPosition;
    public book(String author, String title, double price, String publisher, int stockPosition) 
    {
    	this.author = author;
    	this.title = title;
    	this.price = price;
    	this.publisher = publisher;
    	this.stockPosition = stockPosition;
    }
    public String getAuthor() {
    	return author;
    }
    public String getTitle() {
    	return title;
    }
    public double getPrice() {
    	return price;
    }
    public String getPublisher() {
    	return publisher;
    }
    public int getStockPosition() {
    	return stockPosition;
    }
    public boolean isAvailable() {
    	return stockPosition > 0;
    }
    public double calculateTotalCost(int numCopies) {
    	if (numCopies <= stockPosition) {
    		return numCopies * price;
    	} else {
    	     return -1; // Indicates required copies not in stock
            }
    }
}