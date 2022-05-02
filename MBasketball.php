<?php
    require "Website.inc";

    HTMLStart( "Men's Basketball Page" );

?>
    <section>
        <body>
            <h1>
                <?php
                    DisplaySport(5);
                ?>
            </h1>
        </body>
    </section>

<?php

    HTMLHeader();
    PageNav();
    PageFooter();
    HTMLEnd();
?>