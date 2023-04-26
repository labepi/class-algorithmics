use std::env;
use std::time;

fn search(v: [i32; 900], mut n: usize, k: i32) -> i32
{
    while n > 0
    {
        n = n - 1;

        if v[n] == k
        {
            return n as i32;
        }
    }

    return -1;
}

fn main()
{
    let mut args: std::env::Args = env::args();
    let n: usize = args.nth(1).unwrap().parse().unwrap();
    let mut v: [i32; 900] = [0; 900];

    for i in 0..(n - 1)
    {
        v[i] = i as i32;
    }

    let now = time::Instant::now();
    search(v, n, n as i32);
    let measure = now.elapsed();

    println!("{}", measure.as_nanos());
}
