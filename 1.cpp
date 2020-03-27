int count_bits(int x)
{
  register int xx=x;
  xx=xx-((xx>>1)&0x55555555);
  xx=(xx&0x33333333)+((xx>>2)&0x33333333);
  xx=(xx+(xx>>4))&0x0f0f0f0f;
  xx=xx+(xx>>8);
  return (xx+(xx>>16)) & 0xff;
}
