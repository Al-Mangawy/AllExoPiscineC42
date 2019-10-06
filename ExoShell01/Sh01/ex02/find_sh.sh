find . -type f -name "*sh" | sed 's/..//' | sed 's/.\{3\}$//' | rev | cut -d "/" -f1 | rev
