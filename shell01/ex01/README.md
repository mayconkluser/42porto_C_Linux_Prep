# ex01 testShell00

## 'truncate -s' and touch -t
### truncate -s (truncate -s 0 'filename') => (truncate -s 100 'filename')
	-	Command is used to shrink or extend the size of a file. It can change the file size without modifying the file's contentents.
		-	-s (or --size) specifies hte desired size for the file.
		-	If the size is smaller than the current file size, the file will be truncated
			(shortened).
		-	If the size is larger than the current file size, the file wll be extended, and the
			added space will contain null bytes.

### touch -t (touch -t 202410052152 'filename')
	-	The touch command is used to change the file's timestamps, such as the access time and modification time, or to create an empty file if it doesn’t exist.
		-	The -t option allows you to set a specific timestamp in the format
			[[CC]YY]MMDDhhmm[.ss], where:
			-	CC is the century (optional)
			-	YY is the year
			-	MM is the month (01-12)
			-	DD is the day (01-31)
			-	hh is the hour (00-23)
			-	mm is the minutes (00-59)
