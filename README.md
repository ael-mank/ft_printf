<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>libftprintf.a</title>
  <style>
    body {
      font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
      line-height: 1.6;
      color: #333;
    }

    h1 {
      color: #3498db;
    }

    h2 {
      color: #2ecc71;
    }

    h3 {
      color: #e74c3c;
    }

    pre {
      background-color: #f8f9fa;
      padding: 10px;
      border-radius: 5px;
      overflow-x: auto;
    }

    code {
      font-family: 'Courier New', Courier, monospace;
    }

    ul {
      list-style-type: none;
    }

    li::before {
      content: "➤ ";
      color: #3498db;
      font-weight: bold;
      margin-right: 5px;
    }
  </style>
</head>

<body>

  <h1>libftprintf.a</h1>

  <h2>Overview</h2>

  <p>Welcome to <code>libftprintf.a</code> – a cool and efficient implementation of the <code>printf()</code> function! This library, coded from scratch, aims to replicate the functionality of the original <code>printf()</code> found in the libc library.</p>

  <h2>Project Structure</h2>

  <p>Ensure you have the following files in your project directory:</p>

  <ul>
    <li><code>Makefile</code>: To compile the project with various options.</li>
    <li><code>*.h</code> and <code>*/*.h</code>: Header files containing function prototypes and necessary declarations.</li>
    <li><code>*.c</code> and <code>*/*.c</code>: Source code files implementing the <code>ft_printf()</code> function and supporting functions.</li>
  </ul>

  <h2>Makefile Commands</h2>

  <pre>
    <code>make NAME</code>: Compiles the project and creates the <code>libftprintf.a</code> library.

    <code>make all</code>: Same as <code>make NAME</code>.

    <code>make clean</code>: Removes object files, keeping only the source code.

    <code>make fclean</code>: Cleans the project by removing the compiled library and object files.

    <code>make re</code>: Performs a full recompilation by cleaning and then recompiling the project.
  </pre>

  <h2>External Functions</h2>

  <p>The implementation uses the following external functions:</p>

  <ul>
    <li><code>malloc</code>: Allocates memory dynamically.</li>
    <li><code>free</code>: Frees allocated memory.</li>
    <li><code>write</code>: Writes to a file descriptor.</li>
    <li><code>va_start</code>, <code>va_arg</code>, <code>va_copy</code>, <code>va_end</code>: Functions for handling variable arguments.</li>
  </ul>

  <h2>Libft Integration</h2>

  <p>Yes, you are authorized to use the functions from the <code>libft</code> library.</p>

  <h2>Functionality</h2>

  <p>The main attraction of this library is the <code>ft_printf()</code> function, which emulates the behavior of the original <code>printf()</code>. It supports the following conversions:</p>

  <ul>
    <li><code>%c</code>: Character</li>
    <li><code>%s</code>: String</li>
    <li><code>%p</code>: Pointer</li>
    <li><code>%d</code>: Decimal</li>
    <li><code>%i</code>: Integer</li>
    <li><code>%u</code>: Unsigned integer</li>
    <li><code>%x</code>: Hexadecimal (lowercase)</li>
    <li><code>%X</code>: Hexadecimal (uppercase)</li>
    <li><code>%%</code>: Percentage sign</li>
  </ul>

  <h2>Important Notes</h2>

  <ul>
    <li>Buffer management from the original <code>printf()</code> is deliberately not implemented.</li>
    <li>The library will be rigorously compared against the original <code>printf()</code> for accuracy.</li>
    <li><code>ar</code> command must be used to create the library; use of <code>libtool</code> is forbidden.</li>
    <li><code>libftprintf.a</code> should be created at the root of your repository.</li>
  </ul>

  <p>Feel free to explore and enhance this cool <code>libftprintf.a</code> project! If you have any questions or feedback, don't hesitate to reach out. Happy coding! 🚀</p>

</body>

</html>
