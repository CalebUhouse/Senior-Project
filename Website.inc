<?php
    // start the session
    session_start();

    // inserts header
    function HTMLHeader()
    {
?>

        <header class="section-header">
            <a href="Index.php" class="heading webtext">HavenNFTs</a>
        </header>

<?php
    }
    //inserts beginning of HTML to the start of the main container
    function HTMLStart( $Title )
    {
?>
    <!DOCTYPE html>
        <html lang="en">
    <head>
        <meta charset="UTF-8">
        <title><?php echo $Title ?></title>
        <link href="Website.css" type="text/css" rel="Stylesheet" />
        <script src="Website.js" defer></script>
    </head>
    <body class="website-color">
        <main>

<?php
    }
    // inserts the closing html entities
    function HTMLEnd()
    {
?>
        </main>
    </body>
</html>

<?php
    }
    // inserts the navigation
    function PageNav()
    {
?>
        <nav>
            <div class="navigation-bar">
                <button class="sportsnav regbtn"><a href="Index.php" class="webtext">Home</a></button>
            </div>
            <div class="navigation-bar dropdown">
                <button class="sportsnav dropbtn" onclick="myFunction('men-Dropdown')">Men's Sports</button>
                <div id="men-Dropdown" class="dropdown-content">
                    <a href="MBasketball.php">Basketball</a>
                    <a href="MSoccer.php">Soccer</a>
                    <a href="MFootball.php">Football</a>
                    <a href="Baseball.php">Baseball</a>
                </div>
            </div>
            <div class="navigation-bar dropdown">
                <button class="sportsnav dropbtn" onclick="myFunction('women-Dropdown')">Women's Sports</button>
                <div id="women-Dropdown" class="dropdown-content">
                    <a href="WBasketball.php">Basketball</a>
                    <a href="WSoccer.php">Soccer</a>
                    <a href="Softball.php">Softball</a>
                </div>
            </div>
        </nav>
<?php
    }
    //inserts the aside
    function PageAside()
    {
?>
        <aside>
            <h1 class="webtext aside-header">
                About the Website
            </h1>
            <p class=sidetext>
                HavenNFT's is a website built to promote and give recognition to the athletes of Lock Haven University. Each of the
                atheletes are given an NFT that belongs to them and behaves as if it was a virtual trading card. Only the athelete would 
                own their card however so there would be only one copy of the NFT in existence.
            </p>
        </aside>
<?php
    }
    // inserts the footer
    function PageFooter()
    {
?>
        <footer>
            <p class="centered">Something Not Look Right?</p>
            <p class="centered">Email cmu8706@lockhaven.edu for support!</p>
        </footer>
<?php
    }

    function DatabaseConnect()
    {
        // set the connection information
        $Server = "localhost";
        $UserName = "root";
        $Password = "";
        $Database = "seniorproject";

        // connect to the database
        //      create a new instance of a mysqli object. this
        //      object contains the connection to the mysql server
        $Connection = new mysqli( $Server, $UserName, $Password, $Database ); 

        // check for a successful connection
        //      connect_error will evaluate to true if there is an error
        if ( $Connection->connect_error )
        {
            // stop the script and echo an error message
            echo "<h2>Database Error</h2>\n";
            die( "MySQLi Connection Error: ".$Connection->connect_error."\n" );
        }


    // return the connection
    return $Connection;    
}

function Athletes()
{
    // connect to database
    $Connection = DatabaseConnect();

    // make a select statement to get data from the database
    $SQL = "select name, position, sport_id from athletes;";    
    
    // execute the query
    //      use the query method of the $Connection object
    $Results = $Connection->query( $SQL );

    // check for a successful connection
    //      connect_error will evaluate to true if there is an error
    if ( $Connection->connect_error )
    {
        // stop the script and echo an error message
        echo "<h2>Database Error</h2>\n";
        die( "MySQLi Connection Error: ".$Connection->connect_error."\n" );
    }

    // make a select statement to get data from the database
    $SQL = "select name, position, sport_id from athletes;";    
    
    // execute the query
    //      use the query method of the $Connection object
    $Results = $Connection->query( $SQL );

    // check for results
    //      $Results will evaluate to true if there data is returned
    //      from the database, false if no data is returned
    if ( $Results )
    {

        // loop through the results
        //      the fetch_row method returns an array of the column
        //      data - one item in the array for each column in the
        //      select statement.
        //
        //      the statement in the while will evaluate to false when
        //      there are no more rows
        while( $Row = $Results->fetch_row() )
        {
            if ( $Row[2] == 1)
            {
                // add athlete
                echo "  <div><img src=defaultprofile.png alt=\"Default profile\" style=\"float:left;width:80px;height:80px;\" class=imagePadding><h1>".$Row[0]."</h1>   ".$Row[1]."   Baseball</div>";
            }
            else if ( $Row[2] == 2)
            {
                echo "  <div><img src=defaultprofile.png alt=\"Default profile\" style=\"float:left;width:80px;height:80px;\" class=imagePadding><h1>".$Row[0]."</h1>   ".$Row[1]."   Football</div>";
            }
            else if ( $Row[2] == 3)
            {
                echo "  <div><img src=defaultprofile.png alt=\"Default profile\" style=\"float:left;width:80px;height:80px;\" class=imagePadding><h1>".$Row[0]."</h1>   ".$Row[1]."   Softball</div>";
            }
            else if ( $Row[2] == 4)
            {
                echo "  <div><img src=defaultprofile.png alt=\"Default profile\" style=\"float:left;width:80px;height:80px;\" class=imagePadding><h1>".$Row[0]."</h1>   ".$Row[1]."   Women's Basketball</div>";
            }
            else if ( $Row[2] == 5)
            {
                echo "  <div><img src=defaultprofile.png alt=\"Default profile\" style=\"float:left;width:80px;height:80px;\" class=imagePadding><h1>".$Row[0]."</h1>   ".$Row[1]."   Men's Basketball</div>";
            }
            else if ( $Row[2] == 6)
            {
                echo "  <div><img src=defaultprofile.png alt=\"Default profile\" style=\"float:left;width:80px;height:80px;\" class=imagePadding><h1>".$Row[0]."</h1>   ".$Row[1]."   Men's Soccer</div>";
            }
            else if ( $Row[2] == 7)
            {
                echo "  <div><img src=defaultprofile.png alt=\"Default profile\" style=\"float:left;width:80px;height:80px;\" class=imagePadding><h1>".$Row[0]."</h1>   ".$Row[1]."   Women's Soccer</div>";
            }
            else
            {
                echo "  <div><img src=defaultprofile.png alt=\"Default profile\" style=\"float:left;width:80px;height:80px;\" class=imagePadding><h1>".$Row[0]."</h1>   ".$Row[1]."   ".$Row[2]."</div>";
            }
        }

    }
    else
    {
        // no results returned
        echo "<p>No results returned from the query</p>\n";
    }   
    
    // close the connection
    $Connection->close();

}

function DisplaySport( $Sport )
{
    // connect to database
    $Connection = DatabaseConnect();

    // make a select statement to get data from the database
    $SQL = "select name, position, sport_id from athletes;";    
    
    // execute the query
    //      use the query method of the $Connection object
    $Results = $Connection->query( $SQL );

    // check for a successful connection
    //      connect_error will evaluate to true if there is an error
    if ( $Connection->connect_error )
    {
        // stop the script and echo an error message
        echo "<h2>Database Error</h2>\n";
        die( "MySQLi Connection Error: ".$Connection->connect_error."\n" );
    }

    // make a select statement to get data from the database
    $SQL = "select name, position, sport_id from athletes where sport_id='".$Sport."';";    
    
    // execute the query
    //      use the query method of the $Connection object
    $Results = $Connection->query( $SQL );

    // check for results
    //      $Results will evaluate to true if there data is returned
    //      from the database, false if no data is returned
    if ( $Results )
    {

        // loop through the results
        //      the fetch_row method returns an array of the column
        //      data - one item in the array for each column in the
        //      select statement.
        //
        //      the statement in the while will evaluate to false when
        //      there are no more rows
        while( $Row = $Results->fetch_row() )
        {
            //add athlete
            echo "  <div><img src=defaultprofile.png alt=\"Default profile\" style=\"float:left;width:80px;height:80px;\" class=imagePadding><h1>".$Row[0]."</h1>   ".$Row[1]."   </div>";
        }

    }
    else
    {
        // no results returned
        echo "<p>No results returned from the query</p>\n";
    }   
    
    // close the connection
    $Connection->close();

}
?>