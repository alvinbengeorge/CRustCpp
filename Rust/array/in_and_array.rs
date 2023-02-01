use std::io;
use std::mem;

fn main() {
    let mut a: [i32; 10] = [0; 10];
    for i in 0..10{
        match i {
            1 => println!("Enter 1st number"),
            2 => println!("Enter 2nd number"),
            3 => println!("Enter 3rd number"),
            _ => println!("Enter {}th number", i),
        }
        let mut temp = String::new();
        io::stdin().read_line(&mut temp).expect("1");
        let c: i32 = temp.trim().parse().unwrap();
        a[i] = c
        //a = append(a, c)           
    }
    for elem in a.iter() {
        print!("{},", elem);
    }
    println!("\nMemory -> {}", mem::size_of_val(&a));
}