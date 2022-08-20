//from https://tyromancy.art/ @qh40s on programmer's den
//o is the buffer that is being read into in main
// 'u0' is taking up 30_000 bytes (min bf size)
// p is a char ** that points to m
char m['u0'], *p=m, o['u0'];

i,c;

//boolean-esque charcheck
k(v){
  return v==o[i];
}

//y[1] is the file for reading bf code
main(x,y) int**y; {
  //read takes 30k bytes from the source code file
  //I'm guessing that the for loop autostops when o fills up
  for (read(open(y[1],0),o,'u0'); o[i]; i++)
    //increment/decrement pointer, inc/dec cell, check for loop 
    if (*(p += k(62)-k(60)) += k(43)-k(45), x = k(91)-k(93),
	//write to file descriptor 1 (stdout) the value of p (value of current
	//cell)
	//then read from stdin (file descriptor 0)
	//this lil bit will fail if write fails
	//all the k checks are checking for an expected character
       read(write(1,p,k(46)),p,k(44)),
       x&&!!*p^!~-x)
      for (i += c = x;
	   c += k(91)-k(93);)
	i += x;
}

// bf interpreter, apparently

// x 0 ~ ! *p !! ^ x &&

// || evidently i is the point where the program is in the input stream (o), and p is the pointer to the current cell (in m), k is a boolean-type checker. The first comma'd section in the if is to increment a cell ||
// || the various k() checks are to see what character is in o[i], where v is the ascii code of the character that is being looked for (I'm embarrassed it took me so long to check this, I've used that kind of thing a million times). Wherever they come up true, that bit will execute (at least on the read/write calls, where the result from k is the number of chars to write/read). The logical operand juju is looking for the loop end statement ("]") ||
