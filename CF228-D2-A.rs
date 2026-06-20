use std::io::{self, BufRead};
use std::collections::HashSet;

fn main() {
    let stdin = io::stdin();
    let mut input = String::new();
    stdin.lock().read_line(&mut input).unwrap();

    let mut parts = input.trim().split_whitespace();
    
    let mut colors: HashSet<i64> = HashSet::new();

    for _ in 0..4 {
        if let Some(s) = parts.next() {
            if let Ok(color) = s.parse::<i64>() {
                colors.insert(color);
            }
        }
    }
    let u = colors.len();
    let n = if u >= 4 { 0 } else { 4 - u};
    println!("{ }", n);
}