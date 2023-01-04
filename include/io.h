#ifndef IO_H
#define IO_H

char * io_read_file(char * filepath) {
  char * content;
  int length;
  int read_length;
  FILE * file = fopen(filepath, "rb");

  if (file) {
    fseek(file, 0, SEEK_END);
    length = ftell(file);
    fseek(file, 0, SEEK_SET);

    content = (char *)malloc(length + 1);
		fread(content, 1, length, file);
    fclose(file);
    content[length] = '\0';
		return content;
  }
}

#endif
