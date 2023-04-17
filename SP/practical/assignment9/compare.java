import java.util.*;

class compare {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first number");
        int a = sc.nextInt();
        System.out.println("Enter the second number");
        int b = sc.nextInt();
        if (a+b<50) {
            System.out.println("The sum is less than 50");
        } else {
            System.out.println("The sum is greater than 50");
        }
    } 
}