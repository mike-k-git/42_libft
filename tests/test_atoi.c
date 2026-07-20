#include "../libft.h"
#include "greatest.h"
#include <stdio.h>

typedef struct {
  char *input;
  char *label;
} case_t;

case_t cases[] = {
    {"", "empty"},
    {"abc", "letters"},
    {"+", "plus"},
    {"-", "minus"},
    {" 42", "leading-space"},
    {"\t\n 42", "ws-mixed-1"},
    {"\f\r\v42", "ws-mixed-2"},
    {"+42", "positive-sign"},
    {"-42", "negative"},
    {"+-42", "plus-minus"},
    {"--42", "minus-minus"},
    {"-+7", "minus-plus"},
    {"42abc", "prefix"},
    {"42 43", "stop-at-first-1"},
    {"4 2", "stop-at-first-2"},
    {"0x1A", "hex"},
    {"007", "leading-zeros-1"},
    {"-00", "only-zeros-signed"},
    {"000042", "leading-zeros-2"},
    {"2147483647", "MAX_INT"},
    {"-2147483648", "MIN_INT"},
};

#define NCASES (sizeof(cases) / sizeof(cases[0]))

TEST atoi_differential(void) {
  for (unsigned long i = 0; i < NCASES; ++i) {
    int got = ft_atoi(cases[i].input);
    int expected = atoi(cases[i].input);
    if (got != expected) {
      char msg[256];
      snprintf(msg, sizeof(msg), "case '%s' (%s): ft=%d atoi=%d",
               cases[i].input, cases[i].input, got, expected);
      FAILm(msg);
    }
  }
  PASS();
}

SUITE(suite) { RUN_TEST(atoi_differential); }

GREATEST_MAIN_DEFS();

int main(int argc, char **argv) {
  GREATEST_MAIN_BEGIN();
  RUN_SUITE(suite);
  GREATEST_MAIN_END();
}
