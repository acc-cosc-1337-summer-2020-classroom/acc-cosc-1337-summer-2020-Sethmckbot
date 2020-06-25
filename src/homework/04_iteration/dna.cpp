#include "dna.h"
#include <iostream>

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string dna)
{
    double count = 0;
    double GcCalc = 0;

    for (auto n: dna)
    {
        if(n == 'G' || n == 'C')
            count += 1;  
    }

    GcCalc = count / dna.size();

    return GcCalc;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string original)
{
    string reverse;
    
    for (int i = original.length()-1; i >= 0; i--)
    {
        reverse.push_back(original.at(i));
    }
    return reverse;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement(string dna)
{
    string variable = get_reverse_string(dna);
    string maybe;

    for(auto n: variable)
    {
        if (n == 'A')
        {
            maybe.push_back('T');
        }
        if (n == 'T')
        {
            maybe.push_back('A');
        }
        if (n == 'G')
        {
            maybe.push_back('C');
        }
        if (n == 'C')
        {
            maybe.push_back('G');
        }
    }
    return maybe;
}
