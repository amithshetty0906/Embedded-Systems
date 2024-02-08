public class TestBook {
    public static void main(String[] args) {
        Author author = new Author("Sahankar", "shankar101@gmail.com", 'M');
        Book book1 = new Book("HII Friends", author, 19, 20);
        Book book2 = new Book("THE BOOK", author, 29, 50);

        System.out.println(book1.toString());
        System.out.println(book2.toString());

        book1.setPrice(24.99);
        book2.setQty(60);

        System.out.println("After setting new price and quantity:");
        System.out.println(book1.toString());
        System.out.println(book2.toString());
    }
}