/*
 * Copyright (C) 2025 kurumihere(fuck)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdlib.h>

inline void static cmdexec(const char *cmd)
{
  printf("CMD\t%s\n",cmd);
  system(cmd);
}

int main(void)
{
  cmdexec("mkdir ~/scripts");
  cmdexec("cp -rf files/aebar.sh ~/scripts/aebar.sh");
  cmdexec("chmod +x ~/scripts/aebar.sh");
  cmdexec("mkdir ~/progs/st/");
  cmdexec("cp -rf files/st/* ~/progs/st/");
  cmdexec("mkdir ~/progs/dmenu");
  cmdexec("cp -rf files/dmenu/* ~/progs/dmenu");
  cmdexec("mkdir ~/.config/bspwm/");
  cmdexec("cp -rf files/bspwmrc ~/.config/bspwm/bspwmrc");
  cmdexec("chmod +x ~/.config/bspwm/bspwmrc");
  cmdexec("mkdir ~/.config/conky/");
  cmdexec("cp -rf files/conky.conf ~/.config/conky/conky.conf");
  cmdexec("mkdir ~/.config/sxhkd/");
  cmdexec("cp -rf files/sc.sh ~/.config/sxhkd/sc.sh");
  cmdexec("cp -rf files/sxhkdrc ~/.config/sxhkd/sxhkdrc");
  cmdexec("mkdir ~/wallpapers");
  cmdexec("cp -rf files/blackpink.jpg ~/wallpapers/");
  cmdexec("cd ~/progs/st");
  cmdexec("sudo make install clean");
  cmdexec("cd ~/progs/dmenu");
  cmdexec("sudo make install clean");
  cmdexec("cd ~/");
  puts("SUCCESS");
  return EXIT_SUCCESS;
}
