/*  $Id$

    Part of SWI-Prolog

    Author:        Jan Wielemaker
    E-mail:        wielemak@science.uva.nl
    WWW:           http://www.swi-prolog.org
    Copyright (C): 1985-2006, University of Amsterdam

    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; either version 2
    of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    As a special exception, if you link this library with other files,
    compiled with a Free Software compiler, to produce an executable, this
    library does not by itself cause the resulting executable to be covered
    by the GNU General Public License. This exception does not however
    invalidate any other reasons why the executable file might be covered by
    the GNU General Public License.
*/


/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

int
xml_basechar(int c)
{ if ( c <= 0x0c10 )
  { if ( c <= 0x0939 )
    { if ( c <= 0x03e0 )
      { if ( c <= 0x01f5 )
        { if ( c <= 0x0131 )
          { if ( c <= 0x00d6 )
            { if ( c <= 0x005a )
              { return (c >= 0x0041 && c <= 0x005a);
              } else
              { if ( c <= 0x007a )
                { return (c >= 0x0061 && c <= 0x007a);
                } else
                { return (c >= 0x00c0 && c <= 0x00d6);
                }
              }
            } else
            { if ( c <= 0x00f6 )
              { return (c >= 0x00d8 && c <= 0x00f6);
              } else
              { if ( c <= 0x00ff )
                { return (c >= 0x00f8 && c <= 0x00ff);
                } else
                { return (c >= 0x0100 && c <= 0x0131);
                }
              }
            }
          } else
          { if ( c <= 0x017e )
            { if ( c <= 0x013e )
              { return (c >= 0x0134 && c <= 0x013e);
              } else
              { if ( c <= 0x0148 )
                { return (c >= 0x0141 && c <= 0x0148);
                } else
                { return (c >= 0x014a && c <= 0x017e);
                }
              }
            } else
            { if ( c <= 0x01c3 )
              { return (c >= 0x0180 && c <= 0x01c3);
              } else
              { if ( c <= 0x01f0 )
                { return (c >= 0x01cd && c <= 0x01f0);
                } else
                { return (c >= 0x01f4 && c <= 0x01f5);
                }
              }
            }
          }
        } else
        { if ( c <= 0x038c )
          { if ( c <= 0x02c1 )
            { if ( c <= 0x0217 )
              { return (c >= 0x01fa && c <= 0x0217);
              } else
              { if ( c <= 0x02a8 )
                { return (c >= 0x0250 && c <= 0x02a8);
                } else
                { return (c >= 0x02bb && c <= 0x02c1);
                }
              }
            } else
            { if ( c <= 0x0386 )
              { return (c == 0x0386);} else
              { if ( c <= 0x038a )
                { return (c >= 0x0388 && c <= 0x038a);
                } else
                { return (c == 0x038c);}
              }
            }
          } else
          { if ( c <= 0x03d6 )
            { if ( c <= 0x03a1 )
              { return (c >= 0x038e && c <= 0x03a1);
              } else
              { if ( c <= 0x03ce )
                { return (c >= 0x03a3 && c <= 0x03ce);
                } else
                { return (c >= 0x03d0 && c <= 0x03d6);
                }
              }
            } else
            { if ( c <= 0x03dc )
              { if ( c <= 0x03da )
                { return (c == 0x03da);} else
                { return (c == 0x03dc);}
              } else
              { if ( c <= 0x03de )
                { return (c == 0x03de);} else
                { return (c == 0x03e0);}
              }
            }
          }
        }
      } else
      { if ( c <= 0x0556 )
        { if ( c <= 0x04c4 )
          { if ( c <= 0x044f )
            { if ( c <= 0x03f3 )
              { return (c >= 0x03e2 && c <= 0x03f3);
              } else
              { if ( c <= 0x040c )
                { return (c >= 0x0401 && c <= 0x040c);
                } else
                { return (c >= 0x040e && c <= 0x044f);
                }
              }
            } else
            { if ( c <= 0x045c )
              { return (c >= 0x0451 && c <= 0x045c);
              } else
              { if ( c <= 0x0481 )
                { return (c >= 0x045e && c <= 0x0481);
                } else
                { return (c >= 0x0490 && c <= 0x04c4);
                }
              }
            }
          } else
          { if ( c <= 0x04eb )
            { if ( c <= 0x04c8 )
              { return (c >= 0x04c7 && c <= 0x04c8);
              } else
              { if ( c <= 0x04cc )
                { return (c >= 0x04cb && c <= 0x04cc);
                } else
                { return (c >= 0x04d0 && c <= 0x04eb);
                }
              }
            } else
            { if ( c <= 0x04f5 )
              { return (c >= 0x04ee && c <= 0x04f5);
              } else
              { if ( c <= 0x04f9 )
                { return (c >= 0x04f8 && c <= 0x04f9);
                } else
                { return (c >= 0x0531 && c <= 0x0556);
                }
              }
            }
          }
        } else
        { if ( c <= 0x064a )
          { if ( c <= 0x05ea )
            { if ( c <= 0x0559 )
              { return (c == 0x0559);} else
              { if ( c <= 0x0586 )
                { return (c >= 0x0561 && c <= 0x0586);
                } else
                { return (c >= 0x05d0 && c <= 0x05ea);
                }
              }
            } else
            { if ( c <= 0x05f2 )
              { return (c >= 0x05f0 && c <= 0x05f2);
              } else
              { if ( c <= 0x063a )
                { return (c >= 0x0621 && c <= 0x063a);
                } else
                { return (c >= 0x0641 && c <= 0x064a);
                }
              }
            }
          } else
          { if ( c <= 0x06ce )
            { if ( c <= 0x06b7 )
              { return (c >= 0x0671 && c <= 0x06b7);
              } else
              { if ( c <= 0x06be )
                { return (c >= 0x06ba && c <= 0x06be);
                } else
                { return (c >= 0x06c0 && c <= 0x06ce);
                }
              }
            } else
            { if ( c <= 0x06d5 )
              { if ( c <= 0x06d3 )
                { return (c >= 0x06d0 && c <= 0x06d3);
                } else
                { return (c == 0x06d5);}
              } else
              { if ( c <= 0x06e6 )
                { return (c >= 0x06e5 && c <= 0x06e6);
                } else
                { return (c >= 0x0905 && c <= 0x0939);
                }
              }
            }
          }
        }
      }
    } else
    { if ( c <= 0x0aa8 )
      { if ( c <= 0x0a0a )
        { if ( c <= 0x09b0 )
          { if ( c <= 0x098c )
            { if ( c <= 0x093d )
              { return (c == 0x093d);} else
              { if ( c <= 0x0961 )
                { return (c >= 0x0958 && c <= 0x0961);
                } else
                { return (c >= 0x0985 && c <= 0x098c);
                }
              }
            } else
            { if ( c <= 0x0990 )
              { return (c >= 0x098f && c <= 0x0990);
              } else
              { if ( c <= 0x09a8 )
                { return (c >= 0x0993 && c <= 0x09a8);
                } else
                { return (c >= 0x09aa && c <= 0x09b0);
                }
              }
            }
          } else
          { if ( c <= 0x09dd )
            { if ( c <= 0x09b2 )
              { return (c == 0x09b2);} else
              { if ( c <= 0x09b9 )
                { return (c >= 0x09b6 && c <= 0x09b9);
                } else
                { return (c >= 0x09dc && c <= 0x09dd);
                }
              }
            } else
            { if ( c <= 0x09e1 )
              { return (c >= 0x09df && c <= 0x09e1);
              } else
              { if ( c <= 0x09f1 )
                { return (c >= 0x09f0 && c <= 0x09f1);
                } else
                { return (c >= 0x0a05 && c <= 0x0a0a);
                }
              }
            }
          }
        } else
        { if ( c <= 0x0a39 )
          { if ( c <= 0x0a30 )
            { if ( c <= 0x0a10 )
              { return (c >= 0x0a0f && c <= 0x0a10);
              } else
              { if ( c <= 0x0a28 )
                { return (c >= 0x0a13 && c <= 0x0a28);
                } else
                { return (c >= 0x0a2a && c <= 0x0a30);
                }
              }
            } else
            { if ( c <= 0x0a33 )
              { return (c >= 0x0a32 && c <= 0x0a33);
              } else
              { if ( c <= 0x0a36 )
                { return (c >= 0x0a35 && c <= 0x0a36);
                } else
                { return (c >= 0x0a38 && c <= 0x0a39);
                }
              }
            }
          } else
          { if ( c <= 0x0a74 )
            { if ( c <= 0x0a5c )
              { return (c >= 0x0a59 && c <= 0x0a5c);
              } else
              { if ( c <= 0x0a5e )
                { return (c == 0x0a5e);} else
                { return (c >= 0x0a72 && c <= 0x0a74);
                }
              }
            } else
            { if ( c <= 0x0a8d )
              { if ( c <= 0x0a8b )
                { return (c >= 0x0a85 && c <= 0x0a8b);
                } else
                { return (c == 0x0a8d);}
              } else
              { if ( c <= 0x0a91 )
                { return (c >= 0x0a8f && c <= 0x0a91);
                } else
                { return (c >= 0x0a93 && c <= 0x0aa8);
                }
              }
            }
          }
        }
      } else
      { if ( c <= 0x0b5d )
        { if ( c <= 0x0b0c )
          { if ( c <= 0x0ab9 )
            { if ( c <= 0x0ab0 )
              { return (c >= 0x0aaa && c <= 0x0ab0);
              } else
              { if ( c <= 0x0ab3 )
                { return (c >= 0x0ab2 && c <= 0x0ab3);
                } else
                { return (c >= 0x0ab5 && c <= 0x0ab9);
                }
              }
            } else
            { if ( c <= 0x0abd )
              { return (c == 0x0abd);} else
              { if ( c <= 0x0ae0 )
                { return (c == 0x0ae0);} else
                { return (c >= 0x0b05 && c <= 0x0b0c);
                }
              }
            }
          } else
          { if ( c <= 0x0b30 )
            { if ( c <= 0x0b10 )
              { return (c >= 0x0b0f && c <= 0x0b10);
              } else
              { if ( c <= 0x0b28 )
                { return (c >= 0x0b13 && c <= 0x0b28);
                } else
                { return (c >= 0x0b2a && c <= 0x0b30);
                }
              }
            } else
            { if ( c <= 0x0b39 )
              { if ( c <= 0x0b33 )
                { return (c >= 0x0b32 && c <= 0x0b33);
                } else
                { return (c >= 0x0b36 && c <= 0x0b39);
                }
              } else
              { if ( c <= 0x0b3d )
                { return (c == 0x0b3d);} else
                { return (c >= 0x0b5c && c <= 0x0b5d);
                }
              }
            }
          }
        } else
        { if ( c <= 0x0b9c )
          { if ( c <= 0x0b90 )
            { if ( c <= 0x0b61 )
              { return (c >= 0x0b5f && c <= 0x0b61);
              } else
              { if ( c <= 0x0b8a )
                { return (c >= 0x0b85 && c <= 0x0b8a);
                } else
                { return (c >= 0x0b8e && c <= 0x0b90);
                }
              }
            } else
            { if ( c <= 0x0b95 )
              { return (c >= 0x0b92 && c <= 0x0b95);
              } else
              { if ( c <= 0x0b9a )
                { return (c >= 0x0b99 && c <= 0x0b9a);
                } else
                { return (c == 0x0b9c);}
              }
            }
          } else
          { if ( c <= 0x0baa )
            { if ( c <= 0x0b9f )
              { return (c >= 0x0b9e && c <= 0x0b9f);
              } else
              { if ( c <= 0x0ba4 )
                { return (c >= 0x0ba3 && c <= 0x0ba4);
                } else
                { return (c >= 0x0ba8 && c <= 0x0baa);
                }
              }
            } else
            { if ( c <= 0x0bb9 )
              { if ( c <= 0x0bb5 )
                { return (c >= 0x0bae && c <= 0x0bb5);
                } else
                { return (c >= 0x0bb7 && c <= 0x0bb9);
                }
              } else
              { if ( c <= 0x0c0c )
                { return (c >= 0x0c05 && c <= 0x0c0c);
                } else
                { return (c >= 0x0c0e && c <= 0x0c10);
                }
              }
            }
          }
        }
      }
    }
  } else
  { if ( c <= 0x114c )
    { if ( c <= 0x0e8d )
      { if ( c <= 0x0d0c )
        { if ( c <= 0x0c90 )
          { if ( c <= 0x0c39 )
            { if ( c <= 0x0c28 )
              { return (c >= 0x0c12 && c <= 0x0c28);
              } else
              { if ( c <= 0x0c33 )
                { return (c >= 0x0c2a && c <= 0x0c33);
                } else
                { return (c >= 0x0c35 && c <= 0x0c39);
                }
              }
            } else
            { if ( c <= 0x0c61 )
              { return (c >= 0x0c60 && c <= 0x0c61);
              } else
              { if ( c <= 0x0c8c )
                { return (c >= 0x0c85 && c <= 0x0c8c);
                } else
                { return (c >= 0x0c8e && c <= 0x0c90);
                }
              }
            }
          } else
          { if ( c <= 0x0cb9 )
            { if ( c <= 0x0ca8 )
              { return (c >= 0x0c92 && c <= 0x0ca8);
              } else
              { if ( c <= 0x0cb3 )
                { return (c >= 0x0caa && c <= 0x0cb3);
                } else
                { return (c >= 0x0cb5 && c <= 0x0cb9);
                }
              }
            } else
            { if ( c <= 0x0cde )
              { return (c == 0x0cde);} else
              { if ( c <= 0x0ce1 )
                { return (c >= 0x0ce0 && c <= 0x0ce1);
                } else
                { return (c >= 0x0d05 && c <= 0x0d0c);
                }
              }
            }
          }
        } else
        { if ( c <= 0x0e30 )
          { if ( c <= 0x0d39 )
            { if ( c <= 0x0d10 )
              { return (c >= 0x0d0e && c <= 0x0d10);
              } else
              { if ( c <= 0x0d28 )
                { return (c >= 0x0d12 && c <= 0x0d28);
                } else
                { return (c >= 0x0d2a && c <= 0x0d39);
                }
              }
            } else
            { if ( c <= 0x0d61 )
              { return (c >= 0x0d60 && c <= 0x0d61);
              } else
              { if ( c <= 0x0e2e )
                { return (c >= 0x0e01 && c <= 0x0e2e);
                } else
                { return (c == 0x0e30);}
              }
            }
          } else
          { if ( c <= 0x0e82 )
            { if ( c <= 0x0e33 )
              { return (c >= 0x0e32 && c <= 0x0e33);
              } else
              { if ( c <= 0x0e45 )
                { return (c >= 0x0e40 && c <= 0x0e45);
                } else
                { return (c >= 0x0e81 && c <= 0x0e82);
                }
              }
            } else
            { if ( c <= 0x0e88 )
              { if ( c <= 0x0e84 )
                { return (c == 0x0e84);} else
                { return (c >= 0x0e87 && c <= 0x0e88);
                }
              } else
              { if ( c <= 0x0e8a )
                { return (c == 0x0e8a);} else
                { return (c == 0x0e8d);}
              }
            }
          }
        }
      } else
      { if ( c <= 0x0f47 )
        { if ( c <= 0x0eab )
          { if ( c <= 0x0ea3 )
            { if ( c <= 0x0e97 )
              { return (c >= 0x0e94 && c <= 0x0e97);
              } else
              { if ( c <= 0x0e9f )
                { return (c >= 0x0e99 && c <= 0x0e9f);
                } else
                { return (c >= 0x0ea1 && c <= 0x0ea3);
                }
              }
            } else
            { if ( c <= 0x0ea5 )
              { return (c == 0x0ea5);} else
              { if ( c <= 0x0ea7 )
                { return (c == 0x0ea7);} else
                { return (c >= 0x0eaa && c <= 0x0eab);
                }
              }
            }
          } else
          { if ( c <= 0x0eb3 )
            { if ( c <= 0x0eae )
              { return (c >= 0x0ead && c <= 0x0eae);
              } else
              { if ( c <= 0x0eb0 )
                { return (c == 0x0eb0);} else
                { return (c >= 0x0eb2 && c <= 0x0eb3);
                }
              }
            } else
            { if ( c <= 0x0ebd )
              { return (c == 0x0ebd);} else
              { if ( c <= 0x0ec4 )
                { return (c >= 0x0ec0 && c <= 0x0ec4);
                } else
                { return (c >= 0x0f40 && c <= 0x0f47);
                }
              }
            }
          }
        } else
        { if ( c <= 0x1107 )
          { if ( c <= 0x10f6 )
            { if ( c <= 0x0f69 )
              { return (c >= 0x0f49 && c <= 0x0f69);
              } else
              { if ( c <= 0x10c5 )
                { return (c >= 0x10a0 && c <= 0x10c5);
                } else
                { return (c >= 0x10d0 && c <= 0x10f6);
                }
              }
            } else
            { if ( c <= 0x1100 )
              { return (c == 0x1100);} else
              { if ( c <= 0x1103 )
                { return (c >= 0x1102 && c <= 0x1103);
                } else
                { return (c >= 0x1105 && c <= 0x1107);
                }
              }
            }
          } else
          { if ( c <= 0x1112 )
            { if ( c <= 0x1109 )
              { return (c == 0x1109);} else
              { if ( c <= 0x110c )
                { return (c >= 0x110b && c <= 0x110c);
                } else
                { return (c >= 0x110e && c <= 0x1112);
                }
              }
            } else
            { if ( c <= 0x113e )
              { if ( c <= 0x113c )
                { return (c == 0x113c);} else
                { return (c == 0x113e);}
              } else
              { if ( c <= 0x1140 )
                { return (c == 0x1140);} else
                { return (c == 0x114c);}
              }
            }
          }
        }
      }
    } else
    { if ( c <= 0x1f15 )
      { if ( c <= 0x1175 )
        { if ( c <= 0x1163 )
          { if ( c <= 0x1155 )
            { if ( c <= 0x114e )
              { return (c == 0x114e);} else
              { if ( c <= 0x1150 )
                { return (c == 0x1150);} else
                { return (c >= 0x1154 && c <= 0x1155);
                }
              }
            } else
            { if ( c <= 0x1159 )
              { return (c == 0x1159);} else
              { if ( c <= 0x1161 )
                { return (c >= 0x115f && c <= 0x1161);
                } else
                { return (c == 0x1163);}
              }
            }
          } else
          { if ( c <= 0x1169 )
            { if ( c <= 0x1165 )
              { return (c == 0x1165);} else
              { if ( c <= 0x1167 )
                { return (c == 0x1167);} else
                { return (c == 0x1169);}
              }
            } else
            { if ( c <= 0x116e )
              { return (c >= 0x116d && c <= 0x116e);
              } else
              { if ( c <= 0x1173 )
                { return (c >= 0x1172 && c <= 0x1173);
                } else
                { return (c == 0x1175);}
              }
            }
          }
        } else
        { if ( c <= 0x11ba )
          { if ( c <= 0x11ab )
            { if ( c <= 0x119e )
              { return (c == 0x119e);} else
              { if ( c <= 0x11a8 )
                { return (c == 0x11a8);} else
                { return (c == 0x11ab);}
              }
            } else
            { if ( c <= 0x11af )
              { return (c >= 0x11ae && c <= 0x11af);
              } else
              { if ( c <= 0x11b8 )
                { return (c >= 0x11b7 && c <= 0x11b8);
                } else
                { return (c == 0x11ba);}
              }
            }
          } else
          { if ( c <= 0x11f0 )
            { if ( c <= 0x11c2 )
              { return (c >= 0x11bc && c <= 0x11c2);
              } else
              { if ( c <= 0x11eb )
                { return (c == 0x11eb);} else
                { return (c == 0x11f0);}
              }
            } else
            { if ( c <= 0x1e9b )
              { if ( c <= 0x11f9 )
                { return (c == 0x11f9);} else
                { return (c >= 0x1e00 && c <= 0x1e9b);
                }
              } else
              { if ( c <= 0x1ef9 )
                { return (c >= 0x1ea0 && c <= 0x1ef9);
                } else
                { return (c >= 0x1f00 && c <= 0x1f15);
                }
              }
            }
          }
        }
      } else
      { if ( c <= 0x1fcc )
        { if ( c <= 0x1f5b )
          { if ( c <= 0x1f4d )
            { if ( c <= 0x1f1d )
              { return (c >= 0x1f18 && c <= 0x1f1d);
              } else
              { if ( c <= 0x1f45 )
                { return (c >= 0x1f20 && c <= 0x1f45);
                } else
                { return (c >= 0x1f48 && c <= 0x1f4d);
                }
              }
            } else
            { if ( c <= 0x1f57 )
              { return (c >= 0x1f50 && c <= 0x1f57);
              } else
              { if ( c <= 0x1f59 )
                { return (c == 0x1f59);} else
                { return (c == 0x1f5b);}
              }
            }
          } else
          { if ( c <= 0x1fb4 )
            { if ( c <= 0x1f5d )
              { return (c == 0x1f5d);} else
              { if ( c <= 0x1f7d )
                { return (c >= 0x1f5f && c <= 0x1f7d);
                } else
                { return (c >= 0x1f80 && c <= 0x1fb4);
                }
              }
            } else
            { if ( c <= 0x1fbe )
              { if ( c <= 0x1fbc )
                { return (c >= 0x1fb6 && c <= 0x1fbc);
                } else
                { return (c == 0x1fbe);}
              } else
              { if ( c <= 0x1fc4 )
                { return (c >= 0x1fc2 && c <= 0x1fc4);
                } else
                { return (c >= 0x1fc6 && c <= 0x1fcc);
                }
              }
            }
          }
        } else
        { if ( c <= 0x2126 )
          { if ( c <= 0x1fec )
            { if ( c <= 0x1fd3 )
              { return (c >= 0x1fd0 && c <= 0x1fd3);
              } else
              { if ( c <= 0x1fdb )
                { return (c >= 0x1fd6 && c <= 0x1fdb);
                } else
                { return (c >= 0x1fe0 && c <= 0x1fec);
                }
              }
            } else
            { if ( c <= 0x1ff4 )
              { return (c >= 0x1ff2 && c <= 0x1ff4);
              } else
              { if ( c <= 0x1ffc )
                { return (c >= 0x1ff6 && c <= 0x1ffc);
                } else
                { return (c == 0x2126);}
              }
            }
          } else
          { if ( c <= 0x2182 )
            { if ( c <= 0x212b )
              { return (c >= 0x212a && c <= 0x212b);
              } else
              { if ( c <= 0x212e )
                { return (c == 0x212e);} else
                { return (c >= 0x2180 && c <= 0x2182);
                }
              }
            } else
            { if ( c <= 0x30fa )
              { if ( c <= 0x3094 )
                { return (c >= 0x3041 && c <= 0x3094);
                } else
                { return (c >= 0x30a1 && c <= 0x30fa);
                }
              } else
              { if ( c <= 0x312c )
                { return (c >= 0x3105 && c <= 0x312c);
                } else
                { return (c >= 0xac00 && c <= 0xd7a3);
                }
              }
            }
          }
        }
      }
    }
  }
}

int
xml_ideographic(int c)
{ if ( c <= 0x9fa5 )
  { return (c >= 0x4e00 && c <= 0x9fa5);
  } else
  { if ( c <= 0x3007 )
    { return (c == 0x3007);} else
    { return (c >= 0x3021 && c <= 0x3029);
    }
  }
}

int
xml_combining_char(int c)
{ if ( c <= 0x0b43 )
  { if ( c <= 0x0983 )
    { if ( c <= 0x0670 )
      { if ( c <= 0x05b9 )
        { if ( c <= 0x0361 )
          { if ( c <= 0x0345 )
            { return (c >= 0x0300 && c <= 0x0345);
            } else
            { return (c >= 0x0360 && c <= 0x0361);
            }
          } else
          { if ( c <= 0x0486 )
            { return (c >= 0x0483 && c <= 0x0486);
            } else
            { if ( c <= 0x05a1 )
              { return (c >= 0x0591 && c <= 0x05a1);
              } else
              { return (c >= 0x05a3 && c <= 0x05b9);
              }
            }
          }
        } else
        { if ( c <= 0x05c2 )
          { if ( c <= 0x05bd )
            { return (c >= 0x05bb && c <= 0x05bd);
            } else
            { if ( c <= 0x05bf )
              { return (c == 0x05bf);} else
              { return (c >= 0x05c1 && c <= 0x05c2);
              }
            }
          } else
          { if ( c <= 0x05c4 )
            { return (c == 0x05c4);} else
            { if ( c <= 0x0652 )
              { return (c >= 0x064b && c <= 0x0652);
              } else
              { return (c == 0x0670);}
            }
          }
        }
      } else
      { if ( c <= 0x0903 )
        { if ( c <= 0x06e4 )
          { if ( c <= 0x06dc )
            { return (c >= 0x06d6 && c <= 0x06dc);
            } else
            { if ( c <= 0x06df )
              { return (c >= 0x06dd && c <= 0x06df);
              } else
              { return (c >= 0x06e0 && c <= 0x06e4);
              }
            }
          } else
          { if ( c <= 0x06e8 )
            { return (c >= 0x06e7 && c <= 0x06e8);
            } else
            { if ( c <= 0x06ed )
              { return (c >= 0x06ea && c <= 0x06ed);
              } else
              { return (c >= 0x0901 && c <= 0x0903);
              }
            }
          }
        } else
        { if ( c <= 0x094d )
          { if ( c <= 0x093c )
            { return (c == 0x093c);} else
            { if ( c <= 0x094c )
              { return (c >= 0x093e && c <= 0x094c);
              } else
              { return (c == 0x094d);}
            }
          } else
          { if ( c <= 0x0954 )
            { return (c >= 0x0951 && c <= 0x0954);
            } else
            { if ( c <= 0x0963 )
              { return (c >= 0x0962 && c <= 0x0963);
              } else
              { return (c >= 0x0981 && c <= 0x0983);
              }
            }
          }
        }
      }
    } else
    { if ( c <= 0x0a3f )
      { if ( c <= 0x09cd )
        { if ( c <= 0x09bf )
          { if ( c <= 0x09bc )
            { return (c == 0x09bc);} else
            { if ( c <= 0x09be )
              { return (c == 0x09be);} else
              { return (c == 0x09bf);}
            }
          } else
          { if ( c <= 0x09c4 )
            { return (c >= 0x09c0 && c <= 0x09c4);
            } else
            { if ( c <= 0x09c8 )
              { return (c >= 0x09c7 && c <= 0x09c8);
              } else
              { return (c >= 0x09cb && c <= 0x09cd);
              }
            }
          }
        } else
        { if ( c <= 0x0a02 )
          { if ( c <= 0x09d7 )
            { return (c == 0x09d7);} else
            { if ( c <= 0x09e3 )
              { return (c >= 0x09e2 && c <= 0x09e3);
              } else
              { return (c == 0x0a02);}
            }
          } else
          { if ( c <= 0x0a3c )
            { return (c == 0x0a3c);} else
            { if ( c <= 0x0a3e )
              { return (c == 0x0a3e);} else
              { return (c == 0x0a3f);}
            }
          }
        }
      } else
      { if ( c <= 0x0abc )
        { if ( c <= 0x0a4d )
          { if ( c <= 0x0a42 )
            { return (c >= 0x0a40 && c <= 0x0a42);
            } else
            { if ( c <= 0x0a48 )
              { return (c >= 0x0a47 && c <= 0x0a48);
              } else
              { return (c >= 0x0a4b && c <= 0x0a4d);
              }
            }
          } else
          { if ( c <= 0x0a71 )
            { return (c >= 0x0a70 && c <= 0x0a71);
            } else
            { if ( c <= 0x0a83 )
              { return (c >= 0x0a81 && c <= 0x0a83);
              } else
              { return (c == 0x0abc);}
            }
          }
        } else
        { if ( c <= 0x0acd )
          { if ( c <= 0x0ac5 )
            { return (c >= 0x0abe && c <= 0x0ac5);
            } else
            { if ( c <= 0x0ac9 )
              { return (c >= 0x0ac7 && c <= 0x0ac9);
              } else
              { return (c >= 0x0acb && c <= 0x0acd);
              }
            }
          } else
          { if ( c <= 0x0b03 )
            { return (c >= 0x0b01 && c <= 0x0b03);
            } else
            { if ( c <= 0x0b3c )
              { return (c == 0x0b3c);} else
              { return (c >= 0x0b3e && c <= 0x0b43);
              }
            }
          }
        }
      }
    }
  } else
  { if ( c <= 0x0e31 )
    { if ( c <= 0x0c4d )
      { if ( c <= 0x0bc8 )
        { if ( c <= 0x0b57 )
          { if ( c <= 0x0b48 )
            { return (c >= 0x0b47 && c <= 0x0b48);
            } else
            { if ( c <= 0x0b4d )
              { return (c >= 0x0b4b && c <= 0x0b4d);
              } else
              { return (c >= 0x0b56 && c <= 0x0b57);
              }
            }
          } else
          { if ( c <= 0x0b83 )
            { return (c >= 0x0b82 && c <= 0x0b83);
            } else
            { if ( c <= 0x0bc2 )
              { return (c >= 0x0bbe && c <= 0x0bc2);
              } else
              { return (c >= 0x0bc6 && c <= 0x0bc8);
              }
            }
          }
        } else
        { if ( c <= 0x0c03 )
          { if ( c <= 0x0bcd )
            { return (c >= 0x0bca && c <= 0x0bcd);
            } else
            { if ( c <= 0x0bd7 )
              { return (c == 0x0bd7);} else
              { return (c >= 0x0c01 && c <= 0x0c03);
              }
            }
          } else
          { if ( c <= 0x0c44 )
            { return (c >= 0x0c3e && c <= 0x0c44);
            } else
            { if ( c <= 0x0c48 )
              { return (c >= 0x0c46 && c <= 0x0c48);
              } else
              { return (c >= 0x0c4a && c <= 0x0c4d);
              }
            }
          }
        }
      } else
      { if ( c <= 0x0cd6 )
        { if ( c <= 0x0cc4 )
          { if ( c <= 0x0c56 )
            { return (c >= 0x0c55 && c <= 0x0c56);
            } else
            { if ( c <= 0x0c83 )
              { return (c >= 0x0c82 && c <= 0x0c83);
              } else
              { return (c >= 0x0cbe && c <= 0x0cc4);
              }
            }
          } else
          { if ( c <= 0x0cc8 )
            { return (c >= 0x0cc6 && c <= 0x0cc8);
            } else
            { if ( c <= 0x0ccd )
              { return (c >= 0x0cca && c <= 0x0ccd);
              } else
              { return (c >= 0x0cd5 && c <= 0x0cd6);
              }
            }
          }
        } else
        { if ( c <= 0x0d48 )
          { if ( c <= 0x0d03 )
            { return (c >= 0x0d02 && c <= 0x0d03);
            } else
            { if ( c <= 0x0d43 )
              { return (c >= 0x0d3e && c <= 0x0d43);
              } else
              { return (c >= 0x0d46 && c <= 0x0d48);
              }
            }
          } else
          { if ( c <= 0x0d4d )
            { return (c >= 0x0d4a && c <= 0x0d4d);
            } else
            { if ( c <= 0x0d57 )
              { return (c == 0x0d57);} else
              { return (c == 0x0e31);}
            }
          }
        }
      }
    } else
    { if ( c <= 0x0f3f )
      { if ( c <= 0x0ecd )
        { if ( c <= 0x0eb1 )
          { if ( c <= 0x0e3a )
            { return (c >= 0x0e34 && c <= 0x0e3a);
            } else
            { if ( c <= 0x0e4e )
              { return (c >= 0x0e47 && c <= 0x0e4e);
              } else
              { return (c == 0x0eb1);}
            }
          } else
          { if ( c <= 0x0eb9 )
            { return (c >= 0x0eb4 && c <= 0x0eb9);
            } else
            { if ( c <= 0x0ebc )
              { return (c >= 0x0ebb && c <= 0x0ebc);
              } else
              { return (c >= 0x0ec8 && c <= 0x0ecd);
              }
            }
          }
        } else
        { if ( c <= 0x0f37 )
          { if ( c <= 0x0f19 )
            { return (c >= 0x0f18 && c <= 0x0f19);
            } else
            { if ( c <= 0x0f35 )
              { return (c == 0x0f35);} else
              { return (c == 0x0f37);}
            }
          } else
          { if ( c <= 0x0f39 )
            { return (c == 0x0f39);} else
            { if ( c <= 0x0f3e )
              { return (c == 0x0f3e);} else
              { return (c == 0x0f3f);}
            }
          }
        }
      } else
      { if ( c <= 0x0fb7 )
        { if ( c <= 0x0f95 )
          { if ( c <= 0x0f84 )
            { return (c >= 0x0f71 && c <= 0x0f84);
            } else
            { if ( c <= 0x0f8b )
              { return (c >= 0x0f86 && c <= 0x0f8b);
              } else
              { return (c >= 0x0f90 && c <= 0x0f95);
              }
            }
          } else
          { if ( c <= 0x0f97 )
            { return (c == 0x0f97);} else
            { if ( c <= 0x0fad )
              { return (c >= 0x0f99 && c <= 0x0fad);
              } else
              { return (c >= 0x0fb1 && c <= 0x0fb7);
              }
            }
          }
        } else
        { if ( c <= 0x20e1 )
          { if ( c <= 0x0fb9 )
            { return (c == 0x0fb9);} else
            { if ( c <= 0x20dc )
              { return (c >= 0x20d0 && c <= 0x20dc);
              } else
              { return (c == 0x20e1);}
            }
          } else
          { if ( c <= 0x302f )
            { return (c >= 0x302a && c <= 0x302f);
            } else
            { if ( c <= 0x3099 )
              { return (c == 0x3099);} else
              { return (c == 0x309a);}
            }
          }
        }
      }
    }
  }
}

int
xml_digit(int c)
{ if ( c <= 0x0aef )
  { if ( c <= 0x06f9 )
    { if ( c <= 0x0039 )
      { return (c >= 0x0030 && c <= 0x0039);
      } else
      { if ( c <= 0x0669 )
        { return (c >= 0x0660 && c <= 0x0669);
        } else
        { return (c >= 0x06f0 && c <= 0x06f9);
        }
      }
    } else
    { if ( c <= 0x09ef )
      { if ( c <= 0x096f )
        { return (c >= 0x0966 && c <= 0x096f);
        } else
        { return (c >= 0x09e6 && c <= 0x09ef);
        }
      } else
      { if ( c <= 0x0a6f )
        { return (c >= 0x0a66 && c <= 0x0a6f);
        } else
        { return (c >= 0x0ae6 && c <= 0x0aef);
        }
      }
    }
  } else
  { if ( c <= 0x0cef )
    { if ( c <= 0x0bef )
      { if ( c <= 0x0b6f )
        { return (c >= 0x0b66 && c <= 0x0b6f);
        } else
        { return (c >= 0x0be7 && c <= 0x0bef);
        }
      } else
      { if ( c <= 0x0c6f )
        { return (c >= 0x0c66 && c <= 0x0c6f);
        } else
        { return (c >= 0x0ce6 && c <= 0x0cef);
        }
      }
    } else
    { if ( c <= 0x0e59 )
      { if ( c <= 0x0d6f )
        { return (c >= 0x0d66 && c <= 0x0d6f);
        } else
        { return (c >= 0x0e50 && c <= 0x0e59);
        }
      } else
      { if ( c <= 0x0ed9 )
        { return (c >= 0x0ed0 && c <= 0x0ed9);
        } else
        { return (c >= 0x0f20 && c <= 0x0f29);
        }
      }
    }
  }
}

int
xml_extender(int c)
{ if ( c <= 0x0640 )
  { if ( c <= 0x02d0 )
    { if ( c <= 0x00b7 )
      { return (c == 0x00b7);} else
      { return (c == 0x02d0);}
    } else
    { if ( c <= 0x02d1 )
      { return (c == 0x02d1);} else
      { if ( c <= 0x0387 )
        { return (c == 0x0387);} else
        { return (c == 0x0640);}
      }
    }
  } else
  { if ( c <= 0x3005 )
    { if ( c <= 0x0e46 )
      { return (c == 0x0e46);} else
      { if ( c <= 0x0ec6 )
        { return (c == 0x0ec6);} else
        { return (c == 0x3005);}
      }
    } else
    { if ( c <= 0x3035 )
      { return (c >= 0x3031 && c <= 0x3035);
      } else
      { if ( c <= 0x309e )
        { return (c >= 0x309d && c <= 0x309e);
        } else
        { return (c >= 0x30fc && c <= 0x30fe);
        }
      }
    }
  }
}

