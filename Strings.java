import java.util.Scanner;

public class Strings {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        boolean flag = false;
        System.out.print("Enter a string: ");
        String testString = input.next();
        for(int i=0;i<testString.length();i++){
            if('a' == testString.charAt(i)||'e' == testString.charAt(i)||
               'i' == testString.charAt(i)||'o' == testString.charAt(i)||
               'u' == testString.charAt(i)||'A' == testString.charAt(i)||
               'E' == testString.charAt(i)||'I' == testString.charAt(i)||
               'O' == testString.charAt(i)||'U' == testString.charAt(i)){
                System.out.println("Vowel is present in the given string at index: " + i);
                flag = true;
                break;
            }
        }
        if(flag == false){
            System.out.println("No vowel is present in given string");
        }
    }
}