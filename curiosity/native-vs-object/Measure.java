import java.lang.System;

public class Measure
{
    public static int search(int v[], int n, int k)
    {
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
        int i;
        int n = java.lang.Integer.parseInt(args[0]);
        int v[] = new int[n];

        for (i = 0; i < n; i++)
        {
            v[i] = i;
        }

        b = java.lang.System.nanoTime();
        search(v, n, -1);
        a = java.lang.System.nanoTime();

        t = (a - b);

        java.lang.System.out.println(t);
    }
}
