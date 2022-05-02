<?php
    require "Website.inc";

    HTMLStart( "Men's Soccer Page" );

?>
    <section>
        <body>
            <h1>
                <?php
                    DisplaySport(6);
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