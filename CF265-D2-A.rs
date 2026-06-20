use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();

    let s = lines.next().unwrap().unwrap().trim().to_string();
    
    let t = lines.next().unwrap().unwrap().trim().to_string();

    let s_chars: Vec<char> = s.chars().collect();

    let mut pos: usize = 0;

    for c in t.chars() {
        if pos < s_chars.len() && s_chars[pos] ==    c {
            pos += 1;
        }
    }
    println!("{}", pos + 1);
}