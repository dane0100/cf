use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut input = String::new();
    stdin.lock().read_line(&mut input).unwrap();

    let mut parts = input.trim().split_whitespace();
    let k: i32 = parts.next().unwrap().parse().unwrap();
    let r: i32 = parts.next().unwrap().parse().unwrap();

    for n in 1..=10 {
        let rem = (n*k) % 10;
        if rem == 0 || rem == r {
            println!("{}", n);
            return;
        }
    }
}