import java.lang.Integer;
import java.lang.reflect.Constructor;
import java.lang.Double;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.lang.Object;
import java.lang.


import java.util.HashMap;

public class Frist{
    public static void main(String[] args) {
        System.out.println("Hello word");
        Integer a = 1;
        testTwo(a,a);

    }
    public static<T,K> T testTwo(T obj,K obj1,String clazz,Class<?> clajj) 
    throws InstantiationException, IllegalAccessException{
        List<T> a = new ArrayList<>();
        for(int i=0;i<10;++i){
            
            T b = clazz.getDeclaredConstructor().newInstance();
            a.add(b);
        }
        System.out.println(obj);
        return obj;
    }
}