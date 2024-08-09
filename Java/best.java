public class best {
    public static void main(String[] args) {
        int rows = 3; // Number of rows
        int startValue = 1; // Starting value for the sequence
        
        int currentValue = startValue;
        
        // Generate and print the pattern
        for (int i = 1; i <= rows; i++) {
            // Print leading spaces for alignment
            for (int j = 0; j < rows - i; j++) {
                System.out.print("   "); // 3 spaces for alignment
            }
            
            // Print the values for the current row
            for (int j = 0; j < 2 * i - 1; j++) {
                System.out.print(currentValue + "   "); // 3 spaces between numbers
                currentValue++;
            }
            
            System.out.println(); // Move to the next line after printing a row
        }
    }
}

