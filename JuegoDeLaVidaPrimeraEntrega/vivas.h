// La función vivas(const struct casilla *t) cuentas las vecinas 
// vivas de la célula a la que apunta el puntero t, y devuelve
// dicho valor.

// La codificación se basa en:
//          X Y Z
//        A - - -
//        B - t -
//        C - - -

int vivas(struct casilla *t)
{
  // Guardamos la posición de t
  int B = t->x;
  int Y = t->y;
//
  const struct casilla *AX;
  const struct casilla *AY;
  const struct casilla *AZ;
  const struct casilla *BX;
  // BY = t
  const struct casilla *BZ;
  const struct casilla *CX;
  const struct casilla *CY;
  const struct casilla *CZ;
//
  if ((B == 0) && (Y == 0))
    { BZ = ++t;
      t += 8;
      BX = t;
      t++;
      CY = t++;
      CZ = t++;
      t += 7;
      CX = t++;
      t += 70;
      AY = t++;
      AZ = t++;
      t += 7;
      AX = t; }
  else if ((B == 9) && (Y == 0))
    { t--;
      BX = t--;
      t -= 7;
      BZ = t++;
      t += 9;
      CZ = t++;
      t += 7;
      CX = t++;
      CY = t++;
      t += 70;
      AZ = t++;
      t += 7;
      AX = t++;
      AY = t; }
  else if ((B == 0) && (Y == 9))
    { t -= 90;
      CY = t++;
      CZ = t++;
      t += 7;
      CX = t++;
      t += 70;
      AY = t++;
      AZ = t++;
      t += 7;
      AX = t++;
      t++;
      BZ = t++;
      t += 7;
      BX = t;}
  else if ((B == 9) && (Y == 9))
    { t--;
      BX = t--;
      t -= 7;
      BZ = t--;
      AY = t--;
      AX = t--;
      t -= 7;
      AZ = t--;
      t -= 70;
      CY = t--;
      CX = t--;
      t -= 7;
      CZ = t; }
  else if (B == 0)
    { t -= 10;
      AY = t++;
      AZ = t++;
      t += 7;
      AX = t++;
      t++;
      BZ = t++;
      t += 7;
      BX = t++;
      CY = t++;
      CZ = t++;
      t += 7;
      CX = t; }
  else if (B == 9)
    { t += 10;
      CY = t--;
      CX = t--;
      t -= 7;
      CZ = t--;
      t--;
      BX = t--;
      t -= 7;
      BZ = t--;
      AY = t--;
      AX = t--;
      t -= 7;
      AZ = t; }
  else if (Y == 0)
    { t--;
      AY = t++;
      t++;
      CY = t++;
      t += 7;
      AZ = t++;
      BZ = t++;
      CZ = t++;
      t += 77;
      AX = t++;
      BX = t++;
      CX = t; }
  else if (Y == 9)
    { t++;
      CY = t--;
      t--;
      AY = t--;
      t += 7;
      CX = t--;
      BX = t--;
      AX = t--;
      t += 77;
      CZ = t--;
      BZ = t--;
      AZ = t; }
  else
    { t -= 11;
      AX = t++;
      BX = t++;
      CX = t++;
      t += 7;
      AY = t++;
      t++;
      CY = t++;
      t += 7;
      AZ = t++;
      BZ = t++;
      CZ = t; };
//
  return AX->cel + AY->cel + AZ->cel + BX->cel + BZ->cel
         + CX-> cel + CY->cel + CZ->cel; 
}
