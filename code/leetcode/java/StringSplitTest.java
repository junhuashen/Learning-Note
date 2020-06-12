import java.lang.String;
import java.util.ArrayList;
public  class StringSplitTest{

    public static void main(String[] args){

        String temp = "a,b,c,,";
        String[] res = temp.split(",");
        for(int i=0;i<res.length;++i){
            System.out.println("i: "+res[i]);
        }
        ArrayList<String> tempString = new ArrayList<String>();
    }
}
