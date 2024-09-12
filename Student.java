import java.util.Scanner;

class Student{
//static int id;
//static String name;
public static void main(String args[]){
  int id;
  String name;
  Scanner s = new Scanner(System.in);
  id = s.nextInt();
  name = s.next();
  System.out.println(id+" "+name);
}
}
