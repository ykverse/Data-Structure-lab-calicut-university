<!DOCTYPE html>
<html>
<head>
    <title>PHP Array Operations</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 20px;
        }
        h1 {
            color: #2E8B57;
        }
        .section {
            margin-top: 20px;
            padding: 10px;
            border-left: 4px solid #2E8B57;
            background-color: #f0f8f5;
        }
        input[type="submit"] {
            padding: 5px 10px;
            margin-top: 10px;
        }
    </style>
</head>
<body>
    <h1>PHP Array Operations</h1>

    <h4>Yedhukrishna A.M</h4>
    <h4>NMAXSCS030</h4>

    <?php

    $names = ["Alice", "Bob", "Charlie", "David", "Eve", "Frank", "Grace", "Hannah", "Alice"];
    $result = "";


    if (isset($_POST['operation'])) {
        $operation = $_POST['operation'];

        switch ($operation) {
            case "original":
                $result = "<h2>Original Array:</h2>";
                foreach ($names as $name) $result .= $name . "<br>";
                break;

            case "sorted":
                $sortedNames = $names;
                sort($sortedNames);
                $result = "<h2>Sorted Array:</h2>";
                foreach ($sortedNames as $name) $result .= $name . "<br>";
                break;

            case "unique":
                $uniqueNames = array_unique($names);
                $result = "<h2>Array Without Duplicates:</h2>";
                foreach ($uniqueNames as $name) $result .= $name . "<br>";
                break;

            case "removeLast":
                $namesAfterPop = $names;
                $removedName = array_pop($namesAfterPop);
                $result = "<h2>After Removing Last Element:</h2>";
                $result .= "Removed: <strong>$removedName</strong><br>";
                foreach ($namesAfterPop as $name) $result .= $name . "<br>";
                break;

            case "reverse":
                $reversedNames = array_reverse($names);
                $result = "<h2>Array in Reverse Order:</h2>";
                foreach ($reversedNames as $name) $result .= $name . "<br>";
                break;

            case "search":
                $searchName = trim($_POST['searchName'] ?? "");
                if ($searchName === "") {
                    $result = "<p>Please enter a name to search.</p>";
                } else {
                    $index = array_search($searchName, $names);
                    if ($index !== false) {
                        $result = "<p><strong>$searchName</strong> found at index $index.</p>";
                    } else {
                        $result = "<p><strong>$searchName</strong> not found in the array.</p>";
                    }
                }
                break;

            default:
                $result = "<p>Please select an operation.</p>";
        }
    }
    ?>

    <div class="section">
        <form method="post" action="">
            <label><input type="radio" name="operation" value="original" <?php if(isset($operation) && $operation=="original") echo "checked"; ?>> Display Original Array</label><br>
            <label><input type="radio" name="operation" value="sorted" <?php if(isset($operation) && $operation=="sorted") echo "checked"; ?>> Display Sorted Array</label><br>
            <label><input type="radio" name="operation" value="unique" <?php if(isset($operation) && $operation=="unique") echo "checked"; ?>> Display Array Without Duplicates</label><br>
            <label><input type="radio" name="operation" value="removeLast" <?php if(isset($operation) && $operation=="removeLast") echo "checked"; ?>> Remove Last Element</label><br>
            <label><input type="radio" name="operation" value="reverse" <?php if(isset($operation) && $operation=="reverse") echo "checked"; ?>> Display Array in Reverse Order</label><br>
            <label><input type="radio" name="operation" value="search" <?php if(isset($operation) && $operation=="search") echo "checked"; ?>> Search for an Element</label><br>


            <?php if (isset($operation) && $operation == "search") { ?>
                <input type="text" name="searchName" placeholder="Enter name" value="<?php echo htmlspecialchars($_POST['searchName'] ?? ''); ?>">
            <?php } else { ?>
                <input type="text" name="searchName" placeholder="Enter name" style="display:none;">
            <?php } ?>
            <br>
            <input type="submit" value="Execute">
        </form>
    </div>

    <?php

    if ($result !== "") {
        echo '<div class="section">' . $result . '</div>';
    }
    ?>

    <script>

        const radios = document.querySelectorAll('input[name="operation"]');
        const searchInput = document.querySelector('input[name="searchName"]');

        radios.forEach(radio => {
            radio.addEventListener('change', function() {
                if (this.value === 'search') {
                    searchInput.style.display = 'inline';
                } else {
                    searchInput.style.display = 'none';
                }
            });
        });
    </script>
</body>
</html>
