using System;
using System.Collections.Generic;

// Databse class--------------
class Database{
    public IList<Student> students;
    public IList<Trainer> trainers;
    public IList<Course> courses;

    public Database(){
        students = new List<Student>();
        trainers = new List<Trainer>();
        courses = new List<Course>();
    }
}

// Model classes--------------
class Student {
    public int studentId {get; set;}
    public string name {get; set;}
    public string email {get; set;}
}

class Trainer {
    public int trainerId {get; set;}
    public string name {get; set;}
    public string email {get; set;}
}

class Course {
    public int courseId {get; set;}
    public string title {get; set;}
    public string description {get; set;}
}

// Interface for repositories-----------
interface IStudentRepository{
    void AddStudent(Student student);
    void DeleteStudent(Student student);
    Student UpdateStudent(Student student);
    public IList<Student> getAllStudents();
}

interface ITrainerRepository{
    void AddTrainer(Trainer trainer);
    void DeleteTrainer(Trainer trainer);
    Trainer UpdateTrainer(Trainer trainer);
}

interface ICourseRepository{
    void AddCourse(Course course);
    void DeleteCourse(Course course);
    Course UpdateCourse(Course course);
}

// Repository classes-------------
class StudentRepository :  IStudentRepository {
    Database _db;
    public StudentRepository(Database db){
        _db = db;
    }

    public void AddStudent(Student student){
        Console.WriteLine("StudentRepository.AddStudent()");
        _db.students.Add(student);
    }

    public void DeleteStudent(Student student){
        _db.students.Remove(student);
    }

    public Student UpdateStudent(Student student){
        return student;
    }

    public IList<Student> getAllStudents(){
        return _db.students;
    }
}

// Interface for services-------------
interface IStudentService{
    void AddStudent(Student student);
    void DeleteStudent(Student student);
    Student UpdateStudent(Student student);
    public IList<Student> getAllStudents();
}

// Service classes
class StudentService : IStudentService{
    IStudentRepository _repo;
    public StudentService(IStudentRepository repo){
        _repo = repo;
    }

    public void AddStudent(Student student){
        Console.WriteLine("StudentService.AddStudent()");
        _repo.AddStudent(student);
    }

    public void DeleteStudent(Student student){
        _repo.DeleteStudent(student);
    }

    public Student UpdateStudent(Student student){
        return _repo.UpdateStudent(student);
    }

    public IList<Student> getAllStudents(){
        return _repo.getAllStudents();
    }
}

// Controller class--------------
class StudentController{
    IStudentService _service;
    public StudentController(IStudentService service){
        _service = service;
    }

    public void AddStudent(Student student){
        Console.WriteLine("StudentController.AddStudent()");
        _service.AddStudent(student);
    }

    public void DeleteStudent(Student student){
        _service.DeleteStudent(student);
    }

    public Student UpdateStudent(Student student){
        return _service.UpdateStudent(student);
    }

    public IList<Student> getAllStudents(){
        return _service.getAllStudents();
    }
}


class Program
{
    static void Main(string[] args)
    {
        Database db = new Database();
        IStudentRepository repo = new StudentRepository(db);
        IStudentService service = new StudentService(repo);
        StudentController controller = new StudentController(service);

        Student student = new Student(){
            studentId = 1,
            name = "John",
            email = "john@email.com"
        };

        Student student2 = new Student(){
            studentId = 2,
            name = "Jane",
            email = "jane@email.com"
        };

        // Add student
        controller.AddStudent(student);
        controller.AddStudent(student2);
        Console.WriteLine("Student added\n------------------");

        // Get all students
        IList<Student> students = controller.getAllStudents();
        foreach (Student s in students){
            Console.WriteLine(s.name);
            Console.WriteLine(s.email);
            Console.WriteLine(s.studentId);
            Console.WriteLine("------------------");
        }
    }
}

// Data Flow : Frontend -> Controller -> Service -> Repository -> Database -> Repository -> Service -> Controller -> Frontend

/*
    In this code,

    1. Core Layers: Model and Database are the core layers. These layers are not dependent on any other layers.

    2. Infrastructure Layers or Data Access Layers: Repository are the infrastructure layers. These layers are dependent on the core layers. These layers are responsible for data access.

    3. Service Layers: Service is the service layer. This layer is dependent on the infrastructure layers. This layer is responsible for business logic.

    4. Presentation Layer: Controller is the presentation layer. This layer is dependent on the infrastructure layers. This is the only layer that depends on all the inner layers, but not vice versa. This layer is the only layer that is exposed to the frontend.


    So, overall, the code is designed to maintain onion architecture. The code is designed in such a way that the inner layers are not dependent on the outer layers. The outer layers are dependent on the inner layers. This makes the code more maintainable and testable. This is the main advantage of onion architecture.
*/

/*
    *** How to maintain SOLID, DRY, KISS, and YAQNI principles in this code?
    
    1. Single Responsibility Principle: Each class has only one responsibility. For example, StudentRepository class is only responsible for adding, deleting and updating students. Same for other classes.
    
    2. Open/Closed Principle: The code is designed in such a way that it is open for extension but closed for modification. For example, if we want to add a new feature, we can add a new class without modifying the existing classes. Same for other classes.
    
    3. Liskov Substitution Principle: The code is designed in such a way that the objects of the superclass can be replaced with objects of the subclass without affecting the functionality of the program. For example, the StudentRepository class can be replaced with any other class that implements the IStudentRepository interface. Same for other interfaces.
    
    4. Interface Segregation Principle: The code is designed in such a way that the clients are not forced to depend on interfaces they do not use. For example, the StudentRepository class implements only the IStudentRepository interface. Same for other interfaces.
    
    5. Dependency Inversion Principle: The code is designed in such a way that the high-level modules are not dependent on the low-level modules. Both are dependent on the abstraction. For example, the StudentController class is dependent on the IStudentService interface. Same for other interfaces.
    
    6. DRY: Don't Repeat Yourself. The code is designed in such a way that the same code is not repeated. For example, the AddStudent method is not repeated in the StudentRepository and StudentService classes. Same for other methods.
    
    7. KISS: Keep It Simple, Stupid. The code is designed in such a way that it is simple and easy to understand. For example, the StudentRepository class has only three methods. Same for other classes.
    
    8. YAGNI: You Aren't Gonna Need It. The code is designed in such a way that it does not have any unnecessary features. For example, the StudentRepository class does not have any unnecessary methods. Same for other classes.
*/