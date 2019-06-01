find . -name "*.sh" | grep -o '[^/]*.sh' | cut -d. -f1
