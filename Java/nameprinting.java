public class nameprinting {
    public static void main(String[] args) {
        int n = 7;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == 0 || (i == 0 && j < n-1) || (i == n/2 && j < n-1) || (j == n-1 && i != 0 && i < n/2) || (i > n/2 && i-j == n/2)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }

            System.out.print(" "); 

           for (int j = 0; j < n; j++) {
                if(i == n / 2 || (i == 0 && j != 0 && j != n - 1) || ((j == 0 || j == n - 1) && i != 0)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }

            System.out.print(" "); 

            for (int j = 0; j <2*n; j++) {
                if (i==j && i<=2*n-1 || i+j==2*n-1 && i<2*n-1){
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }

            System.out.print(" "); 

            for (int j = 0; j < n; j++) {
                if (i == 0 || i == n-1 || j == n/2) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }

            System.out.print(" ");

            System.out.println();
        }
    }
}
