<!DOCTYPE html>
<html>
<head>
    <title>Fibonacci Series Generator</title>
</head>
<body>
    <h2>Display the Fibonacci Series up to a Given Number</h2>
    <h4>Yedhukrishna A.M</h4>
     <h4>NMAXSCS030</h4>

    <form method="post">
        <label>Enter a number:</label>
        <input type="number" name="number" required>
        <input type="submit" name="submit" value="Generate">
    </form>

    <?php
    if (isset($_POST['submit'])) {
        $num = $_POST['number'];

        $a = 0;
        $b = 1;

        echo "<h3>Fibonacci series up to $num:</h3>";

    
        echo "$a, $b";


        $next = $a + $b;

        while ($next <= $num) {
            echo ", $next";
            $a = $b;
            $b = $next;
            $next = $a + $b;
        }
    }
    ?>
</body>
</html>
