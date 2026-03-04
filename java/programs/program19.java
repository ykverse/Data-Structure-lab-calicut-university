class Employee {
    int id;
    String name;
    String designation;
    String department;

    Employee(int id, String name, String designation, String department) {
        this.id = id;
        this.name = name;
        this.designation = designation;
        this.department = department;
    }

    void displayEmployeeDetails() {
        System.out.println("Employee ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Designation: " + designation);
        System.out.println("Department: " + department);
    }
}

class Salary extends Employee {
    double basic;
    double hra = 1250;            
    double da;                    
    double allowance;            

    Salary(int id, String name, String designation, String department, double basic) {
        super(id, name, designation, department);
        this.basic = basic;
        this.da = 1.10 * basic;
        this.allowance = 0.35 * basic;
    }

    double computeNetSalary() {
        return basic + hra + da + allowance;
    }

    void displaySalaryDetails() {
        System.out.println("Basic Salary: " + basic);
        System.out.println("HRA: " + hra);
        System.out.println("DA: " + da);
        System.out.println("Allowance: " + allowance);
        System.out.println("Net Salary: " + computeNetSalary());
    }
}

public class program19 {
    public static void main(String[] args) {


        System.out.println("NMAXSCS030 ");
        System.out.println("Yedhukrishna A.M");

        Salary s = new Salary(101, "Shanana", "Developer", "IT", 20000);

        s.displayEmployeeDetails();
        System.out.println("------------------------");
        s.displaySalaryDetails();
    }
}
