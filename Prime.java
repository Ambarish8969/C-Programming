import java.lang.Math;
public class arrays {
    public static String isPrime(int a){
        int i, m = 0, flag = 0;
        m = a / 2;
        if (a == 0 || a == 1) {
            return "false";
        } else {
            for (i = 2; i <= m; i++) {
                if (a % i == 0) {
                    flag = 1;
                    return "false";
                    // break;
                }
            }
            if (flag == 0) {
                return "true";
            }
        }
        return null;
    }
    public static void main(String[] args) {
        int a = 4;
        int b = 16;
        
        if(isPrime(a)=="true" && isPrime(b)=="true"){
            System.out.println(Math.min(a, b));
        }else if(isPrime(a)=="true" || isPrime(b)=="true"){
            System.out.println(Math.max(a, b));
        }else{
            System.out.println("Both are not Prime Numbers.");
        }
    }
}
