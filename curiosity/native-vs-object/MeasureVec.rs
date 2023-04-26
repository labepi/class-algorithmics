use std::env;
use std::time;

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
    v.iter().position(|&x| x == n as i32);
    let measure = now.elapsed();

    println!("{}", measure.as_nanos());
}
