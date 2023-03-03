//add include statements
#include "func.h"

//add function code here
double get_gc_content(const string& dna)
{
    int gc_count = 0;
    for (std::string::size_type i = 0; i < dna.length(); i++)
    {
        if (dna[i] == 'G' || dna[i] == 'C' )
        {
            gc_count++;
        }
    }
    double gc_content = (double) gc_count / dna.length();
    return gc_content;
}

string get_dna_complement(string dna)
{
    dna = reverse_string(dna);
    int len = dna.length();
    for (int i = 0; i < len; i++)
    {
        if (dna[i] == 'A')
        {
            dna[i] = 'T';
        }
        else if (dna[i] == 'T')
        {
            dna[i] = 'A';
        }
        else if (dna[i] == 'C')
        {
            dna[i] = 'G';
        }
        else if (dna[i] == 'G')
        {
            dna[i] = 'C';
        }
        
    }
    return dna;
}

string reverse_string(string dna)
{
    int string_length = dna.length();
    for (int i = 0; i < string_length / 2; i++)
    {
        char temp = dna[i];
        dna[i] = dna[string_length - i - 1];
        dna[string_length - i - 1] = temp;
    }
    return dna;
}