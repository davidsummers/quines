/* Properly formatted Quine. */

#include <iostream>

const char *s[ ] =
{
  "\n",
  "int main( )\n",
  "{\n",
  "  std::cout << \"/* Properly formatted Quine. */\\n\";\n",
  "  std::cout << \"\\n\";\n",
  "  std::cout << \"#include <iostream>\\n\";\n",
  "  std::cout << \"\\n\";\n",
  "  std::cout << \"const char *s[ ] =\\n\";\n",
  "  std::cout << \"{\\n  \\\"\";\n",
  "\n",
  "  for ( int i = 0; s[ i ] != NULL; )\n",
  "  {\n",
  "    for ( const char *ptr = s[ i ]; *ptr; ++ptr )\n",
  "    {\n",
  "      switch ( *ptr )\n",
  "      {\n",
  "        case '\\n': std::cout << \"\\\\n\"; break;\n",
  "        case '\\\\':\n",
  "        case '\\\"': putchar( '\\\\' );\n",
  "        default  : putchar( *ptr );\n",
  "      }\n",
  "    }\n",
  "\n",
  "    ++i;\n",
  "\n",
  "    if ( s[ i ] != NULL )\n",
  "    {\n",
  "      std::cout << \"\\\",\\n  \\\"\";\n",
  "    }\n",
  "    else\n",
  "    {\n",
  "      std::cout << \"\\\",\";\n",
  "    }\n",
  "  }\n",
  "\n",
  "  std::cout << \"\\n};\\n\";\n",
  "\n",
  "  for ( int i = 0; s[ i ] != NULL; ++i )\n",
  "  {\n",
  "    std::cout << s[ i ];\n",
  "  }\n",
  "\n",
  "  return 0;\n",
  "}\n",
  "",
};

int main( )
{
  std::cout << "/* Properly formatted Quine. */\n";
  std::cout << "\n";
  std::cout << "#include <iostream>\n";
  std::cout << "\n";
  std::cout << "const char *s[ ] =\n";
  std::cout << "{\n  \"";

  for ( int i = 0; s[ i ] != NULL; )
  {
    for ( const char *ptr = s[ i ]; *ptr; ++ptr )
    {
      switch ( *ptr )
      {
        case '\n': std::cout << "\\n"; break;
        case '\\':
        case '\"': putchar( '\\' );
        default  : putchar( *ptr );
      }
    }

    ++i;

    if ( s[ i ] != NULL )
    {
      std::cout << "\",\n  \"";
    }
    else
    {
      std::cout << "\",";
    }
  }

  std::cout << "\n};\n";

  for ( int i = 0; s[ i ] != NULL; ++i )
  {
    std::cout << s[ i ];
  }

  return 0;
}
