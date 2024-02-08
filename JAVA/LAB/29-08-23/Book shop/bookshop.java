import java.util.Scanner;

public class bookshop {
	public static void main(String[] args) {
      // Creating book objects
     book book1 = new book("Ram", "Hello", 99, "Publisher1", 5);
     book book2 = new book("Sita", "Hey", 199, "Publisher2", 3);
     book book3 = new book("Ram", "Hii", 299, "Publisher3", 0);

      
     book[] books = {book1, book2, book3};

     // Getting input
     Scanner scanner = new Scanner(System.in);
     System.out.print("Enter the title of the book: ");
     String title = scanner.nextLine();
     System.out.print("Enter the author of the book: ");
     String author = scanner.nextLine();

     
     boolean found = false;
     book requestedBook = null;
     for (book book : books) {
     if (book.getTitle().equalsIgnoreCase(title) && book.getAuthor().equalsIgnoreCase(author)) {
     	  found = true;
        requestedBook = book;
        break;
      }
    }

   
    if (found) {
      System.out.println("Book details:");
      System.out.println("Title: " + requestedBook.getTitle());
      System.out.println("Author: " + requestedBook.getAuthor());
      System.out.println("Price: Rs" + requestedBook.getPrice());
      System.out.println("Publisher: " + requestedBook.getPublisher());

      System.out.print("Enter the number of copies required: ");
      int numCopies = scanner.nextInt();

     // Calculating total cost and displaying appropriate message
     double totalCost = requestedBook.calculateTotalCost(numCopies);
   
      if (totalCost == -1) {
   	System.out.println("Required copies not in stock.");
   } 
   else{
	System.out.println("Total cost: Rs" + totalCost);
   }
   }
  else{
	System.out.println("Book not found in inventory.");
     }

  scanner.close();
}
}