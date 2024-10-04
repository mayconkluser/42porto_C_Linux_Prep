#!/bin/bash
groups $FT_USER | tr ' ' ',' | tr -d '\n'

<<COMMENT
	Step 1: #!/bin/bash
	-	This is called a "shebang."
	-	It tells the system that this script be executed using the Bash shell.
	-	It ensures that the coomands inside the script will run in the Bash
		environment.

	Step 2: groups $FT_USER
	-	The groups command prints all the groups that the specified user (in this
		case, $FT_USER) belongs to.
	-	$FT_USER is a shell variable, and it represents the username that is set in this
		environment variable.
	-	The output of groups $FT_USER looks like a space-separated list of group
		names (e.g., group1, group2, group3).
	
	Step 3: | tr ' ' ','
	-	The pipe (|) takes the output of the previous command (groups $FT_USER)
		and passes it as input to the next command (tr).
	-	tr is used to translate or replace characters.
	-	Here, (tr ' ' ',') is replacing each space (' ') with a comma (',') in the list of
		groups.
	-	For example, if groups $FT_USER outputs (group1 group2 group3), after this
		command, hte output becomes (group1,group2,group3).

	Step 4: | tr -d '\n'
	-	Again, the pipe (|) takes modified output from the previous step and passes it to
		another (tr) command.
	-	The (tr -d '\n') removes (deletes) any newline characters (\n) from the output.
	-	This ensures that the entire list of groups is printed on a single line without
		any line breaks.
	
	Overall Process:
	-	The script fetches the groups for the user specified by $FT_USER.
	-	It replaces the spaces between group names whit commas.
	-	It ensures the output appears in a single line without extra newline characters.

	Example:
	In my computer the result is:
	-	mk,adm,cdrom,sudo,dip,plugdev,users,lpadmin
		-	mk: It refers to a user named mk on the system.
		-	adm: For administrative privileges.
		-	cdrom: For CD-ROM access.
		-	sudo: For administrative command execution.
		-	dip: For networking (dial-up).
		-	plugdev: For managing removeble devices.
		-	users: Forgeneral user permissions.
		-	lpadmin: For printer administration.
COMMENT
