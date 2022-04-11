import java.lang.Math;
import java.util.Scanner;

public class arrays {
  
    public static void main(String[] args) {
      
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int count=0;
        String arr[]=new String[Math.abs(n)];
        if(n<0){
            String arr1[]=new String[Math.abs(n)];
            for(int i=0;i<Math.abs(n);i++){
                arr1[i]=input.next();
            }
            System.out.println("INVALID INPUT");
        }else{
            for(int i=0;i<Math.abs(n);i++){
                arr[i]=input.next();
            }
            for(String ar:arr){
                if(ar.contains("HR")){
                    count=count+1;
                }
            }
            if(count>0){
                System.out.println("Total "+count+" designations in HR Department");
                for(String a:arr){
                    if(a.contains("HR")){
                        System.out.println(a.toUpperCase());
                    }
                }
            }else{
                System.out.println("No designation of HR department found in given data");
            }
        }
        input.close();
    }
}
