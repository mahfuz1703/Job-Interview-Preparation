interface EnemyPrototype {
    EnemyPrototype clone();
    void displayInfo();
}

class Orc implements EnemyPrototype {
    String name;
    int power;

    public Orc(String name, int power){
        this.name = name;
        this.power = power;
    }

    @Override
    public EnemyPrototype clone(){
        return new Orc(this.name, this.power);
    }

    @Override
    public void displayInfo(){
        System.out.println("Orc Name: " + name + ", Power: " + power);
    }
}

class Elf implements EnemyPrototype {
    String name;
    int power;

    public Elf(String name, int power){
        this.name = name;
        this.power = power;
    }

    @Override
    public EnemyPrototype clone(){
        return new Elf(this.name, this.power);
    }

    @Override
    public void displayInfo(){
        System.out.println("Elf Name: " + name + ", Power: " + power);
    }
}

class Dragon implements EnemyPrototype {
    String name;
    int power;

    public Dragon(String name, int power){
        this.name = name;
        this.power = power;
    }

    @Override
    public EnemyPrototype clone(){
        return new Dragon(this.name, this.power);
    }

    @Override
    public void displayInfo(){
        System.out.println("Dragon Name: " + name + ", Power: " + power);
    }
}

public class Prototype {
    public static void main(String[] args) {
        EnemyPrototype orc = new Orc("DefaultOrc", 100);
        EnemyPrototype elf = new Elf("DefaultElf", 80);
        EnemyPrototype dragon = new Dragon("DefaultDragon", 200);

        orc.displayInfo();
        elf.displayInfo();
        dragon.displayInfo();
        
        System.out.println("\nCloning enemies...");
        EnemyPrototype clonedOrc = orc.clone();
        // ((Orc)clonedOrc).name = "ClonedOrc";
        // ((Orc)clonedOrc).power = 120;

        EnemyPrototype clonedElf = elf.clone();
        // ((Elf)clonedElf).name = "ClonedElf";
        // ((Elf)clonedElf).power = 90;

        EnemyPrototype clonedDragon = dragon.clone();
        // ((Dragon)clonedDragon).name = "ClonedDragon";
        // ((Dragon)clonedDragon).power = 220;

        clonedOrc.displayInfo();
        clonedElf.displayInfo();
        clonedDragon.displayInfo();
    }
}
