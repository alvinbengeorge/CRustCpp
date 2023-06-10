struct Car {
    name: String,
    speed: i32,
    position: i32,
    moves: i32
}

impl Car {
    fn run(&mut self) {
        self.position += self.speed;
        self.moves += 1;
    }
    fn display_position(&mut self) {
        println!("{} is at {}", self.name, self.position);
        println!("{} has moved {} times", self.name, self.moves);
    }

}

fn main() {
    let mut car1 = Car {
        name: String::from("Toyota"),
        speed: 100,
        position: 0,
        moves: 0
    };

    let mut car2 = Car { 
        name: String::from("Honda"),
        speed: 150,
        position: 0,
        moves: 0
    };

    while car1.position < 1000 || car2.position < 1000 {
        if car1.position < 1000 {
            car1.run();
        }
        if car2.position < 1000 {
            car2.run();
        }
    }

    car1.display_position();
    car2.display_position();

    if (car1.moves < car2.moves) {
        println!("{} won!", car1.name);
    } else {
        println!("{} won!", car2.name);
    }

}
