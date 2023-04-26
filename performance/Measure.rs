use std::env;
use std::time;

fn search(v: &mut Vec<i32>, k: i32) -> i32
{
    let mut n = v.len();

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
    let mut v: Vec<i32> = Vec::with_capacity(n);

    for i in 0..(n - 1)
    {
        v.push(i as i32);
    }

    let now = time::Instant::now();
    search(&mut v, n as i32);
    let measure = now.elapsed();

    println!("{}", measure.as_nanos());
}
