// Add a declaration for the main declared by the avr compiler.
int avr_main (int argc, const char * argv[]);  // Needs to match exactly

#undef main
int main (int argc, const char * argv[])
{
  initialize ();
  return avr_main (argc, argv);
}
