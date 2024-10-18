interface Animal {
    void eat();
}

interface Bird {
    void fly();
}

// Class implementing multiple interfaces
class Bat implements Animal, Bird {
    // Implementing methods from both interfaces
    public void eat() {
        System.out.println("Bat eats insects.");
    }

    public void fly() {
        System.out.println("Bat can fly.");
    }
}

public class multipleinheritance {
    public static void main(String[] args) {
        Bat bat = new Bat();
        bat.eat();  // From Animal interface
        bat.fly();  // From Bird interface
    }
}
