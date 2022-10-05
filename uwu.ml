let uwu x = match x with | 'r' -> 'w' | 'l' -> 'w' | _ -> x

let uwuify l = String.map uwu l
