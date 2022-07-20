use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();
    println!("Enter two numbers: ");
    io::stdin().read_line(&mut a).expect("1");
    io::stdin().read_line(&mut b).expect("1");
    let c:i32 = a.trim().parse().unwrap();
    let d:i32 = b.trim().parse().unwrap();
    println!("{}", c+d);
}