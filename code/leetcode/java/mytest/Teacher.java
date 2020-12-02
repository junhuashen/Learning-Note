
package mytest;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

public class Teacher {

    public String getName(String name, String address, Integer age) {
        return name + "是一名人民教师,在"+address+","+age+"岁";
    }
    public Integer getAge() {
        return this.age;
    }
    public void setAge(Integer age){
        this.age = age;
    }
    private Integer age;
    

    public static void main(String[] args) {
        Teacher teacher = new Teacher();
        coverMap(teacher);
        System.out.println(teacher.getAge());
    }
    public static void coverMap(Object orgObj){
        try {
            
            
            String name = orgObj.getClass().getName();
            System.out.print(name);
            Class<?> clazz = Class.forName(name);
            Method method = clazz.getMethod("getName", String.class, String.class, Integer.class);
            Object obj = method.invoke(clazz.newInstance(), "李梅","上海", 21);
            Method nameMethod = clazz.getMethod("setAge", Integer.class);
            nameMethod.invoke(orgObj,10);
            System.out.println(obj);
        } catch (ClassNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } catch (NoSuchMethodException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } catch (SecurityException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } catch (IllegalAccessException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } catch (IllegalArgumentException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } catch (InvocationTargetException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } catch (InstantiationException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
}
