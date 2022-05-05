<?php
    require "Website.inc";

    HTMLStart( "Football Page" );

?>
    <section>
        <body>
            <?php
                DisplaySport(2);
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