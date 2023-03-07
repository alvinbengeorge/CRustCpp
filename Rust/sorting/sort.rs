use std::io;

fn main() {
    let mut a: [i32; 5] = [0; 5];
    let mut temp: i32;
    for i in 0..5{
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
    }

    //bubble sort
    for i in 0..5 {
        for j in 0..5 {
            if a[i] < a[j] {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for elem in a.iter() {
        print!("{},", elem);
    }
}