
# Command Explanations

This README provides explanations for two useful commands in Linux: `touch -t` and `truncate -s`.

## 1. `touch -t`

The `touch -t` command allows you to set a specific timestamp for a file. This command changes the access and modification times of a file to a given value.

**Syntax:**
```bash
touch -t [[CC]YY]MMDDhhmm[.ss] filename
```

- `CC` is the century (optional)
- `YY` is the year
- `MM` is the month (01-12)
- `DD` is the day (01-31)
- `hh` is the hour (00-23)
- `mm` is the minutes (00-59)
- `.ss` is optional seconds (00-59)

**Example:**
To set the timestamp of a file to October 5, 2024, 21:52:
```bash
touch -t 202410052152 filename
```

## 2. `truncate -s`

The `truncate -s` command is used to shrink or extend the size of a file to the specified size. It can be used to reset the file size to 0 bytes or to a specific size.

**Syntax:**
```bash
truncate -s size filename
```

- `size` can be specified as a number followed by a size unit (K for kilobytes, M for megabytes, etc.).

**Example:**
To reduce the file size to 0 bytes:
```bash
truncate -s 0 filename
```

To extend the file size to 100 bytes:
```bash
truncate -s 100 filename
```

---

For more detailed usage, refer to the man pages for each command (`man touch` and `man truncate`).
