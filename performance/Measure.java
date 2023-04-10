import java.lang.System;
import java.util.ArrayList;

public class Measure
{
    public static int search(ArrayList<Integer> v, int k)
    {
        int n = v.size();

        while (n-- > 0)
        {
            if (v.get(n) == k)
                return n;
        }

        return -1;
    }

    public static void main(String[] args) throws InterruptedException 
    {
        long a, b, t;
        int i;
        int n = java.lang.Integer.parseInt(args[0]);
        ArrayList<Integer> v = new ArrayList<Integer>();

        for (i = 0; i < n; i++)
        {
            v.add(i);
        }

        b = java.lang.System.nanoTime();
        search(v, -1);
        a = java.lang.System.nanoTime();

        t = (a - b);

        java.lang.System.out.println(t);
    }
}
