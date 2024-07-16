import java.util.Scanner;
class Division{
    public static void main(String[] args) {
        System.out.printf("Enter the numerator: ");
        Scanner sc = new Scanner(System.in);
        int numerator = sc.nextInt();
        System.out.printf("Enter the denominator: ");
        int denominator = sc.nextInt();
     System.out.println("The quotient is: "+(numerator/denominator));
     System.out.println("The remainder is: "+(numerator%denominator));
}
}