<?php
    require "Website.inc";

    HTMLStart( "Softball Page" );

?>
    <section>
        <body>
            <?php
                DisplaySport(3);
            ?>
        </body>
    </section>

<?php

    HTMLHeader();
    PageNav();
    PageAside();
    PageFooter();
    HTMLEnd();
?>