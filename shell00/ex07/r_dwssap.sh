#!/bin/bash
awk -F: 'NR % 2 == 0' /etc/passwd | cut -d: -f1 | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | paste -sd "," - | sed 's/$/./'
