/* Properly formatted Quine. */

#include <stdio.h>

const char *s[ ] =
{
  "\n",
  "int main( )\n",
  "{\n",
  "  printf( \"/* Properly formatted Quine. */\\n\" );\n",
  "  printf( \"\\n\" );\n",
  "  printf( \"#include <stdio.h>\\n\" );\n",
  "  printf( \"\\n\" );\n",
  "  printf( \"const char *s[ ] =\\n\" );\n",
  "  printf( \"{\\n  \\\"\" );\n",
  "\n",
  "  for ( int i = 0; s[ i ] != NULL; )\n",
  "  {\n",
  "    for ( const char *ptr = s[ i ]; *ptr; ++ptr )\n",
  "    {\n",
  "      switch ( *ptr )\n",
  "      {\n",
  "        case '\\n': printf( \"\\\\n\" ); break;\n",
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
  "      printf( \"\\\",\\n  \\\"\" );\n",
  "    }\n",
  "    else\n",
  "    {\n",
  "      printf( \"\\\",\" );\n",
  "    }\n",
  "  }\n",
  "\n",
  "  printf( \"\\n};\\n\" );\n",
  "\n",
  "  for ( int i = 0; s[ i ] != NULL; ++i )\n",
  "  {\n",
  "    printf( \"%s\", s[ i ] );\n",
  "  }\n",
  "\n",
  "  return 0;\n",
  "}\n",
  "",
};

int main( )
{
  printf( "/* Properly formatted Quine. */\n" );
  printf( "\n" );
  printf( "#include <stdio.h>\n" );
  printf( "\n" );
  printf( "const char *s[ ] =\n" );
  printf( "{\n  \"" );

  for ( int i = 0; s[ i ] != NULL; )
  {
    for ( const char *ptr = s[ i ]; *ptr; ++ptr )
    {
      switch ( *ptr )
      {
        case '\n': printf( "\\n" ); break;
        case '\\':
        case '\"': putchar( '\\' );
        default  : putchar( *ptr );
      }
    }

    ++i;

    if ( s[ i ] != NULL )
    {
      printf( "\",\n  \"" );
    }
    else
    {
      printf( "\"," );
    }
  }

  printf( "\n};\n" );

  for ( int i = 0; s[ i ] != NULL; ++i )
  {
    printf( "%s", s[ i ] );
  }

  return 0;
}
