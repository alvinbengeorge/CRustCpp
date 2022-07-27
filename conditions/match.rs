use std::io;

fn main() {
    let mut temp = String::new();
    let mut n: i32 = 0;
    println!("Enter a number:");
    io::stdin().read_line(&mut temp).expect("1");
    n = temp.trim().parse().unwrap();
    match n {
        0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 => println!("Single Digit number"),
        _ => println!("More than one digit"),
    }
}