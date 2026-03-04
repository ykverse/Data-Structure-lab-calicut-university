<!DOCTYPE html>
<html>
<head>
    <title>Reverse a String</title>
</head>
<body>
    <h2>Reverse a String</h2>

    <h4>Yedhukrishna A.M</h4>
    <h4>NMAXSCS030</h4>

    <form method="post">
        <label for="user_string">Enter a string:</label>
        <input type="text" id="user_string" name="user_string" required>
        <button type="submit">Reverse</button>
    </form>

    <?php

    function reverseString($str) {
        return strrev($str);
    }


    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $input = $_POST["user_string"];
        $reversed = reverseString($input);

        echo "<h3>Results:</h3>";
        echo "<p><strong>Original String:</strong> " . htmlspecialchars($input) . "</p>";
        echo "<p><strong>Reversed String:</strong> " . htmlspecialchars($reversed) . "</p>";
    }
    ?>
</body>
</html>
