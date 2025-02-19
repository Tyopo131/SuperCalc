#pragma once

namespace strings {
	namespace editor {
		/* 
		This message is printed when the program is currently waiting for your
		editor to close. It gets deleted from the terminal right after.
		*/
		constexpr char editor_wait[] = "Waiting for your editor to close...";

		/*
		The filename for temporary editor files used when the program prompts for an editor.
		Afterwards, the ID of the current thread is appended. (if you don't know what a thread ID is, think of
		                                                      it as a random ID)

		It should be appended with an underscore, or, for translators, the language you're translating to's equivelant.
		You can leave this blank if you just want the thread ID with no string at the start.
		*/
		constexpr char filename[] = "TEMP_EDITOR_FILE_";

	}
}
