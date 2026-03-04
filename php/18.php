<!DOCTYPE html>
<html>
<head>
    <title>Select Fruits</title>
</head>
<body>
    <h4>Yedhukrishna A.M</h4>
     <h4>NMAXSCS030</h4>
    <h2>Select Your Favorite Fruits</h2>

    <?php

    $allFruits = ["Apple", "Banana", "Orange", "Mango", "Grapes", "Pineapple", "Strawberry", "Kiwi", "Papaya", "Blueberry"];


    $selectedFruits = [];
    if (isset($_POST['submit']) && !empty($_POST['fruits'])) {
        $selectedFruits = $_POST['fruits'];
    }
    ?>


    <form method="post" action="">
        <label for="fruits">Choose fruits (you can select multiple):</label><br><br>
        <select name="fruits[]" id="fruits" multiple size="10">
            <?php
            foreach ($allFruits as $fruit) {

                $isSelected = in_array($fruit, $selectedFruits) ? "selected" : "";
                echo "<option value=\"$fruit\" $isSelected>$fruit</option>";
            }
            ?>
        </select>
        <br><br>
        <input type="submit" name="submit" value="Show Selected Fruits">
    </form>

    <?php

    if (!empty($selectedFruits)) {
        echo "<h3>You selected the following fruits:</h3>";
        echo "<ul>";
        foreach ($selectedFruits as $fruit) {
            echo "<li>" . htmlspecialchars($fruit) . "</li>";
        }
        echo "</ul>";
    } elseif (isset($_POST['submit'])) {
        echo "<p>No fruits were selected.</p>";
    }
    ?>
</body>
</html>
