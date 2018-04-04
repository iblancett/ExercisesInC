/*
 Tallies up word frequency given a txt file
 Written for Software Systems at Olin College
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>

void iterator(gpointer key, gpointer val, gpointer data) {
  printf("%u     %s", *(guint *)val, (guchar *)key);
}
int main() {
  guchar word[1000];
  GSList *all_words;
  guint index = 0;
  guint c;
  guint first_val = 1;
  guint count = 0;
  FILE *book;
  GHashTable *dict = g_hash_table_new(g_str_hash, g_str_equal);
  book = fopen("hello.txt", "r");

  while(1) {
    c = fgetc(book);
    if(feof(book)) {
      break;
    }

    if(c != 32) {
      word[index] = c;
    }

    else {
      word[index+1] = '\0';
      all_words = g_slist_prepend(all_words, word);
      if(g_hash_table_contains(dict, word)) {
        count = *(guint *)g_hash_table_lookup(dict, word);
        ++count;
        g_hash_table_replace(dict, (guchar *)all_words->data, &count);
      }
      else {
        g_hash_table_insert(dict, (guchar *)all_words->data, &first_val);
      }
      memset(word, 0, 1000);
      index = 0;
      continue;

    }
    ++index;
  }
  g_hash_table_foreach(dict, (GHFunc)iterator, NULL);
  return 0;
}
