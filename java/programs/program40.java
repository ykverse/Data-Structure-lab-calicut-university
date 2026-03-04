import java.sql.*;
import java.util.Scanner;

public class program40 {
    public static void main(String[] args) {
        String url = "jdbc:mysql://localhost:3306/student_db"; 
        String user = "root";     
        String pass = "";         

        Scanner sc = new Scanner(System.in);

        System.out.println("NMAXSCS030 ");
        System.out.println("Yedhukrishna A.M");

        try {
           
            Class.forName("com.mysql.cj.jdbc.Driver");

            
            Connection con = DriverManager.getConnection(url, user, pass);

            
            String query = "INSERT INTO employee (id, name, design, dept) VALUES (?, ?, ?, ?)";
            PreparedStatement ps = con.prepareStatement(query);

            
            System.out.print("Enter Employee ID: ");
            int id = sc.nextInt();
            sc.nextLine(); 

            System.out.print("Enter Employee Name: ");
            String name = sc.nextLine();

            System.out.print("Enter Employee Designation: ");
            String design = sc.nextLine();

            System.out.print("Enter Employee Department: ");
            String dept = sc.nextLine();

          
            ps.setInt(1, id);
            ps.setString(2, name);
            ps.setString(3, design);
            ps.setString(4, dept);

            
            int rows = ps.executeUpdate();

            if (rows > 0) {
                System.out.println("Employee inserted successfully!");
            } else {
                System.out.println("Failed to insert employee.");
            }

            
            ps.close();
            con.close();

        } catch (Exception e) {
            e.printStackTrace();
        }

        sc.close();
    }
}
