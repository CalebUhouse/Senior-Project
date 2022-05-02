<?php
    require "Website.inc";

    HTMLStart( "Men's Basketball Page" );

?>
    <section>
        <body>
            <h1>
                <?php
                    DisplaySport(4);
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