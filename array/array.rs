fn main() {
    let mut a: [i32; 4] = [1,2,3,4];
    a[0] = 5;
    for i in a.iter() {
        println!("{}", i);
    }
}