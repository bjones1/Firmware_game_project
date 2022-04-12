// ***********************************
// **Walkthrough Guide for Codechat**
// ***********************************
/*
This is a walkthrough guide to explain what you will need to know in order to succeed in learning codechat. Once you have read and understood this section there will be an interactive `Jeopardy <Game1_page.html>` game located on the homepage.

**Code Chat Installation**
-----------------------------
Use `this link <https://codechat-system.readthedocs.io/en/latest/CodeChat_Server/install.html>`_ to navigate to the installation homepage 

**History of Codechat**
------------------------
Code Chat converts source code into a web page, allowing developers to view their program as a descriptive document by adding headings, formatting, hyperlinks, diagrams, images, and other varieties of content to capture the ideas and insights that innately flow from the programming process. It also gives you a clean canvas on which to plan ahead, whether you're sketching out an algorithm before committing it to code or laying out a design document that can change with the code. By combining ideas with their implementation as code, this literate programming paradigm improves the way developers think, substantially boosting a programmer's abilities. The idea of this is that great programmers are able to write detailed explanations of their code so that anyone could understand the information being presented to them.
*/
/*
**Code Chat Basics**
----------------------
Syntax
=========
**Spacing**

When writing in codechat you must use the correct spacing in commented code in order for the text to render properly. An example of this would be: 

``Codechat is a great system that I enjoy using``

Bold, Italics, Bulletpoints, etc
================================

**Bold**

When you would like to make text bolded you must use 2 asterisk (**) before and after the word.

``**Bolded text**``

**Italics**

When you would like to make text italicized you must use 1 asterisk (*) before and after the word.

``*italicized text*``

**Bulletpoints and Numbers**

When you would like to create bullet points in your writing you must tab then place an asterisk. An example of this:

    * Word

Images, Sections, footnotes, etc...
===================================

**Images**

For inserting images into your codechat file, you must use two periods (..) followed by a space and then the word image, which is followed by two colons(::). An example of this code is:

``.. image:: file.png/jpeg/jpg``

**Sections**

Files can be sectioned off into headers, subheaders, paragraphs, etc... based on the characters used to underline a specific line of text. A list is provided below with different characters used to create different sections along with an example of underlining, however keep in mind that heading levels are defined primarily by the user. Codechat will pick up on the order the characters were introduced in, and then organize them accordingly.

* ``# with overline, for parts``

* ``* with overline, for chapters``

* ``= for sections``

* ``- for subsections``

* ``^ for subsubsections``

* ``" for paragraphs``

Example: 

| ``Text``
| ``====``

**Footnotes**

To use Footnotes,  establish locations that your footnotes will reference to, then number them. Codechat will automatically number them if the # is used, or the user can number them themselves using # and the number of the footnote next to it. 

``Location 1 [#f1]_ Location 2 ... [#f2]_``

``.. rubric:: Footnotes``

| ``.. [#f1] Text of the first footnote.``
| ``.. [#f2] Text of the second footnote.``

**Hyperlinks**

Hyperlinks can be used either externally to link to something on the web, or internally to link back to documentation appropriate to the file. Additionally, links can  be represented by either their entire URL or by a word or phrase. When linking to an external location, a URL must be provided in the code, however when linking to a location already in the file, a reference command is used. When linking to an external file, +Examples of each are:

Codechat installation is located here: <https://codechat-system.readthedocs.io/en/latest/CodeChat_Server/install.html>

Codechat installation is also located `here`_.

.. _here: https://codechat-system.readthedocs.io/en/latest/CodeChat_Server/install.html


Toctrees and Notes
===================================

**Toctree**

Toctrees are used to accomplish two important things when making codechat projects: creating a table of contents that includes all documents included inside of a project and producing a system of parent-child chapters that relate each of the files to each other. An example of a toctree similar to one used in this document is: 

| ``.. toctree::``
| ``:maxdepth: 2``
| ``file1``
| ``file2``

**Notes**

Creating notes in Codechat is a valuable tool at your disposal, especially when marking up other creator's documents. Notes allow for additional information to be added and emphasized more clearly than by having a normal inline comment. To create a note, use two periods(..) followed by a space and then the name of the note, which is followed by two colons(::). An example of a note is: 

.. note:: This is a note's syntax inside of a note! .. Note:: insert text here


*/