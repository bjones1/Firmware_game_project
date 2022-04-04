// ***********************************
// **Walkthrough Guide for Codechat**
// ***********************************
/*
This is a walkthrough guide to explain what you will need to know in order to succeed in learning codechat. Once you have read and understood this section there will be an interactive `Jeopardy <insert link>`_ game located on the homepage.

How to install Code Chat
--------------------------
Use `this link <https://codechat-system.readthedocs.io/en/latest/CodeChat_Server/install.html>`_ to navigate to the installation homepage 

History of Codechat
---------------------
The CodeChat System provides a powerful literate programming authoring system to a variety of text editors and IDEs. Specifically, it provides a GUI to automatically render source code and/or markup documents to HTML, displaying the HTML document produced by the rendering process next to the source. Literate progamming...
*/
/*
Code Chat Basics
------------------
**Syntax**
===============
Before covering style, the following shows the syntax used to embed reST in comments. The rules used to determine if a comment will be interpreted as reST are:

**Comments**

A comment must be placed on a line containing only comments or whitespace, but no code, preprocessor directives, etc.

One space must follow the opening comment delimiter.

The following provide examples of the source code and its interpretation. The following source code…
*/
/* A line containing only a comment in interpreted as reST.
    // Indented lines will be properly indented in the output, as well.
    /* Block comments may also be used.
       They may span multiple lines. */
        /* Block comment indents are
         * preserved, as well.
         */
    i = 0; // Comments with code are not
    j = 1; /* interpreted as reST. */
    // For example, note how this list is constructed: not as * A bullet here..., but 
    // *    A bullet here to align with tab stops. (Per the preceding point, no tabs are used, just tab stops; in this case, all indents are aligned to 4 space boundaries.)*/