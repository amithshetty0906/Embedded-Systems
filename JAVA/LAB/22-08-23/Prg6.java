import java.util.Scanner;

public class Prg6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);


        String question = "What is your name?";
        String correctAnswer = "AMITH";

        int attempts = 0;
        while (attempts < 3) {
        System.out.print(question + " ");
        String userAnswer = scanner.nextLine();
        if (userAnswer.equalsIgnoreCase(correctAnswer)) {
        System.out.println("Good!");
        break;
        }
        else {
                attempts++;
                if (attempts < 3) {
                    System.out.println("Incorrect answer. Please try again.");
                } else {
                    System.out.println("Sorry, you've used all your attempts. The correct answer is: " + correctAnswer);
                }
            }
        }
        scanner.close();
    }
}
