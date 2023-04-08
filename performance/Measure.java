import java.lang.System;

public class Measure
{
    public static int search(int[] v, int k)
    {
        int n = v.length;

        while (n-- > 0)
        {
            if (v[n] == k)
                return n;
        }

        return -1;
    }

    public static void main(String[] args) throws InterruptedException 
    {
        long a, b, t;
        int[] v = new int[10000];
        int i;

        for (i = 0; i < v.length; i++)
        {
            v[i] = i;
        }

        b = java.lang.System.nanoTime();
        search(v, -1);
        a = java.lang.System.nanoTime();

        t = (a - b);

        java.lang.System.out.println(t);
    }
}
