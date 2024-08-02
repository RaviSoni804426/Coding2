import java.util.*;
class Pattern{
    public static void main(String[] args){

        // Loop - 1: Loop for top structure
       for(int i = 1; i <= 5; ++i){
           for(int j = 1; j <= 5-i+1; ++j){
               System.out.print("* ");
           }
           for(int k = 1; k <= i - 1; ++k){
               System.out.print(" ");
           }
           for(int k = 1; k <= i - 1; ++k){
               System.out.print(" ");
           }
            for(int j = 1; j <= 5-i+1; ++j){
               System.out.print("* ");
           }
           System.out.println();
       }
       
       // Loop 2 : for bottom Structure
       
       for(int i = 1; i <= 4; ++i){
            for(int j = 1; j <= (i + 1); ++j){
                System.out.print("* ");
            }
            for(int k = 1; k <= (4 - i); ++k){
                System.out.print(" ");
            }
            for(int k = 1; k <= (4 - i); ++k){
                System.out.print(" ");
            }
            for(int j = 1; j <= (i + 1); ++j){
                System.out.print("* ");
            }
            System.out.println();
        }
     
    }
}
