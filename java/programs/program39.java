import java.sql.*;

public class program39 {
    public static void main(String[] args) {
        String url = "jdbc:mysql://localhost:3306/student_db"; 
        String user = "root";                              
        String pass = "";                           
        
        Connection conn = null;
        Statement stmt = null;
        ResultSet rs = null;

        System.out.println("NMAXSCS030 ");
        System.out.println("Yedhukrishna A.M");

        try {
        
            Class.forName("com.mysql.cj.jdbc.Driver");

            
            conn = DriverManager.getConnection(url, user, pass);

            
            stmt = conn.createStatement();

            
            String query = "SELECT id, name, design, dept FROM employee";
            rs = stmt.executeQuery(query);

           
            System.out.println("Employee List:");
            System.out.println("--------------------------------------");

            while (rs.next()) {
                int id = rs.getInt("id");
                String name = rs.getString("name");
                String design = rs.getString("design");
                String dept = rs.getString("dept");

                System.out.println(id + " | " + name + " | " + design + " | " + dept);
            }

        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            
            try { if (rs != null) rs.close(); } catch (Exception e) {}
            try { if (stmt != null) stmt.close(); } catch (Exception e) {}
            try { if (conn != null) conn.close(); } catch (Exception e) {}
        }
    }
}
