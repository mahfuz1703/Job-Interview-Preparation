using System;

class Student{ // create a class named Student
  // create fields
  public string name;
  public int age;

  // create a constructor
  public Student(string name, int age){
    this.name = name; // assign the value of parameter name to the field name
    this.age = age;
  }
  
  // Create a method inside Student class
  public void DisplayInfo(){
    Console.WriteLine("Name: {0}", name);
    Console.WriteLine("Age: {0}", age);
  }
}

class Program {
  public static void Main (string[] args) {
    Student student = new Student("Mahfuz", 24); // create an object of Student class and call the constructor

    // call method
    student.DisplayInfo();
  }
}