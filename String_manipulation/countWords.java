import java.util.Scanner;
class count{

    static int countthestring(String s){
        int c =1;
        int i=0;
        int flag = 0;
            while(i<s.length()){
                if(s.charAt(i) ==' '){
                flag =1;
                }else if (flag == 1){
                    flag =0;
                    ++c;
                }
                i++;
            }
        return c;
    }

    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        String s = "sdf  f  f ksjd     d";
        System.out.println("count = "+countthestring(s));
        sc.close();
    }
}