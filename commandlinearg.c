/* program of command line argument */
#include <stdio.h>

int main (int argc, char *argv[], char **env_var_ptr) {
int i=0;
printf("\ncmdline args count=%d", argc);

/* First argument is executable name only */
printf("\nexe name=%s", argv[0]);

for (i=1; i< argc; i++) {
   printf("\narg%d=%s", i, argv[i]);
 }

i=0;
while (*env_var_ptr != NULL) {
    i++;
    printf ("\nenv var%d=>%s",i, *(env_var_ptr++));
 }

printf("\n");
return 0;
}


/*
********************************  output  **************************************
dell@dell-OptiPlex-7040:~$ gcc commandlinearg.c
dell@dell-OptiPlex-7040:~$ ./a.out 23 tecy

cmdline args count=3
exe name=./a.out
arg1=23
arg2=tecy
env var1=>XDG_VTNR=7
env var2=>XDG_SESSION_ID=c2
env var3=>CLUTTER_IM_MODULE=xim
env var4=>SELINUX_INIT=YES
env var5=>XDG_GREETER_DATA_DIR=/var/lib/lightdm-data/dell
env var6=>GPG_AGENT_INFO=/run/user/1001/keyring-zY5M1e/gpg:0:1
env var7=>TERM=xterm
env var8=>SHELL=/bin/bash
env var9=>VTE_VERSION=3409
env var10=>WINDOWID=25167511
env var11=>UPSTART_SESSION=unix:abstract=/com/ubuntu/upstart-session/1001/1627
env var12=>GNOME_KEYRING_CONTROL=/run/user/1001/keyring-zY5M1e
env var13=>GTK_MODULES=overlay-scrollbar:unity-gtk-module
env var14=>USER=dell
env var15=>LS_COLORS=rs=0:di=01;34:ln=01;36:mh=00:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arj=01;31:*.taz=01;31:*.lzh=01;31:*.lzma=01;31:*.tlz=01;31:*.txz=01;31:*.zip=01;31:*.z=01;31:*.Z=01;31:*.dz=01;31:*.gz=01;31:*.lz=01;31:*.xz=01;31:*.bz2=01;31:*.bz=01;31:*.tbz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.war=01;31:*.ear=01;31:*.sar=01;31:*.rar=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.jpg=01;35:*.jpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.webm=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.cgm=01;35:*.emf=01;35:*.axv=01;35:*.anx=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.axa=00;36:*.oga=00;36:*.spx=00;36:*.xspf=00;36:
env var16=>XDG_SESSION_PATH=/org/freedesktop/DisplayManager/Session0
env var17=>XDG_SEAT_PATH=/org/freedesktop/DisplayManager/Seat0
env var18=>SSH_AUTH_SOCK=/run/user/1001/keyring-zY5M1e/ssh
env var19=>DESKTOP_MODE=1
env var20=>DEFAULTS_PATH=/usr/share/gconf/ubuntu.default.path
env var21=>XDG_CONFIG_DIRS=/etc/xdg/xdg-ubuntu:/usr/share/upstart/xdg:/etc/xdg
env var22=>PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games
env var23=>DESKTOP_SESSION=ubuntu
env var24=>QT_IM_MODULE=ibus
env var25=>QT_QPA_PLATFORMTHEME=appmenu-qt5
env var26=>JOB=gnome-session
env var27=>PWD=/home/dell
env var28=>XMODIFIERS=@im=ibus
env var29=>GNOME_KEYRING_PID=1625
env var30=>LANG=en_IN
env var31=>GDM_LANG=en_US
env var32=>MANDATORY_PATH=/usr/share/gconf/ubuntu.mandatory.path
env var33=>IM_CONFIG_PHASE=1
env var34=>COMPIZ_CONFIG_PROFILE=ubuntu
env var35=>GDMSESSION=ubuntu
env var36=>SESSIONTYPE=gnome-session
env var37=>HOME=/home/dell
env var38=>XDG_SEAT=seat0
env var39=>SHLVL=1
env var40=>LANGUAGE=en_IN:en
env var41=>GNOME_DESKTOP_SESSION_ID=this-is-deprecated
env var42=>UPSTART_INSTANCE=
env var43=>UPSTART_EVENTS=started starting
env var44=>LOGNAME=dell
env var45=>QT4_IM_MODULE=xim
env var46=>XDG_DATA_DIRS=/usr/share/ubuntu:/usr/share/gnome:/usr/local/share/:/usr/share/
env var47=>DBUS_SESSION_BUS_ADDRESS=unix:abstract=/tmp/dbus-BdsB7jnK1U
env var48=>LESSOPEN=| /usr/bin/lesspipe %s
env var49=>INSTANCE=Unity
env var50=>UPSTART_JOB=unity-settings-daemon
env var51=>TEXTDOMAIN=im-config
env var52=>XDG_RUNTIME_DIR=/run/user/1001
env var53=>DISPLAY=:0
env var54=>XDG_CURRENT_DESKTOP=Unity
env var55=>GTK_IM_MODULE=ibus
env var56=>LESSCLOSE=/usr/bin/lesspipe %s %s
env var57=>TEXTDOMAINDIR=/usr/share/locale/
env var58=>COLORTERM=gnome-terminal
env var59=>XAUTHORITY=/home/dell/.Xauthority
env var60=>_=./a.out

*********************************  output  *************************************
*/
