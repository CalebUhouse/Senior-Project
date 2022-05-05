<?php
    require "Website.inc";

    HTMLStart( "Baseball Page" );

?>
    <section>
        <body>
            <?php
                DisplaySport(1);
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