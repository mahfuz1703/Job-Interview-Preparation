using System;

class Student{ // create a class named Student
  // create fields
  public string name;
  public int age;

  // Create a method inside Student class
  public void DisplayInfo(){
    Console.WriteLine("Name: {0}", name);
    Console.WriteLine("Age: {0}", age);
  }
}

class Program {
  public static void Main (string[] args) {
    Student student = new Student(); // create an object of Student

    // assign value to fields
    student.name = "Mahfuz";
    student.age = 24;

    // call method
    student.DisplayInfo();
  }
}