/**
 * Description: C Robot Correction
 */
 
void correction(void)
{
  if(SWFL == 0)
  {
    dist();
    while(distL < 5) 
    {
      dist();
      go(255,100); 
    }
    go(0,0);
  }
  if(SWFR == 0)
  {
    dist();
    while(distR < 5)
    {
      dist();
      go(100,255); 
    }
    go(0,0);
  }
  
}
