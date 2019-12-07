#include "type_anim.h"

int main()
{
	// Changing this will change the default delay between character spacing.
	//kb::kb_settings::default_dur = /*your custom value*/; // Accepts unsigned, int

	// Change to make new line default.
	//kb::kb_settings::default_endl = /*your custom value*/; // Accepts boolean
	
  // "\n" can be used to create multiple lines outputs, or to endl if default endl value is false
  // This will use the default endl setting and char delay setting.
	kb::type_to_console("Big hackerman...");
  
  // This will use a custom delay, but will still use default endl setting.
	kb::type_to_console("Big hackerman...", 125);
  
  // This will use a custom delay and custom should endl;
	kb::type_to_console("Bighackerman...", 125, true);
	
	return 0;
}
