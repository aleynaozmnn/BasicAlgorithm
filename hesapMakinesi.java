import java.util.Scanner;
public class hesapMakinesi{
public static void main(String[]args){
 int s1,s2;
 Scanner scanner=new Scanner(System.in);
 System.out.println("Sayi 1 i giriniz:");
 s1=scanner.nextInt();
 System.out.println("Sayi 2 i giriniz:");
 s2=scanner.nextInt();
 
 scanner.nextLine();
 System.out.println("Yapmak Istediginiz Islemi Giriniz:");
 System.out.println("+,-,*,/");
 String islem=scanner.nextLine();
 int sonuc=0;
 
 if(islem.equals("+"))
 sonuc=s1+s2;
 else if(islem.equals("-"))
 sonuc=s1-s2;
 else if(islem.equals("*"))
 sonuc=s1*s2;
 else{
 sonuc=s1/s2;
 }
 
 System.out.println("Sonuc:" +sonuc);
 
 
  










}
}