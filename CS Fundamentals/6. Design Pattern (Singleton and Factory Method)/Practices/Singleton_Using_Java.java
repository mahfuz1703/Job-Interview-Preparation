interface ILogger {
    void log(String component, String message);
}

class Logger implements ILogger {
    private static Logger _instance = null;
    private Logger(){
        System.out.println("Logger instance created");
    }

    public static Logger getInstance() {
        if (_instance == null) {
            _instance = new Logger();
        }
        return _instance;
    }

    @Override
    public void log(String component, String message) {
        System.out.println("[" + component + "] " + message);
    }
}


class Authentication{
    private Logger logger = Logger.getInstance();

    public void authenticate(String user) {
        logger.log("Authentication", "User " + user + " authenticated successfully.");
    }
}


class DataAccess {
    private Logger logger = Logger.getInstance();

    public void fetchData() {
        logger.log("DatabaseAccess", "Executing query to fetch data from the database");
    }
    public void saveData() {
        logger.log("DatabaseAccess", "Saving data to the database");
    }
}


class UI {
    private Logger logger = Logger.getInstance();

    public void render() {
        logger.log("UI", "Rendering UI components");
    }
}

public class Singleton_Using_Java {
    public static void main(String[] args) {
        Authentication auth = new Authentication();
        DataAccess dataAccess = new DataAccess();
        UI ui = new UI();

        
        auth.authenticate("Alice");

        dataAccess.fetchData();
        dataAccess.saveData();

        ui.render();
        
        
        System.out.println("\nTesting singleton Logger instance:");
        Logger anotherLoggerInstance = Logger.getInstance();
        System.out.println("Logger instances are the same: " + (Logger.getInstance() == anotherLoggerInstance));
        anotherLoggerInstance.log("Main", "This is a log from the main method");
    }
}