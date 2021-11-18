#ifndef UID1
#define UID1 1000
#endif

#define GID1 -1
#define SUID1 0
#define SGID1 0
#define CHROOT ""
#define CHRDIR ""
#define ENFORCE_WRITE_CHECK 0

#define SYSEXE "/bin"
static struct rule_t rules[] = {
	/* UID, GID, SUID, SGID, alias(ONE string), path to SYSEXEary executable.
	 * If path is set to "*" then it will be run from the "PATH" variable. */
	{ UID1, GID1, SUID1, SGID1, "safe", SYSEXE "/safe"},
	{ UID1, GID1, SUID1, SGID1, "cp", SYSEXE "/cp"},
	{ UID1, GID1, SUID1, SGID1, "ln", SYSEXE "/ln"},
	{ UID1, GID1, SUID1, SGID1, "chmod", SYSEXE "/chmod"},
	{ UID1, GID1, SUID1, SGID1, "kill", SYSEXE "/kill"},
	{ UID1, GID1, SUID1, SGID1, "pkill", SYSEXE "/pkill"},
	/* Network utilites. */
	{ UID1, GID1, SUID1, SGID1, "ifconfig", SYSEXE "/ifconfig" },
	/* Voidlinux. */
	{ UID1, GID1, SUID1, SGID1, "xi", SYSEXE "/xbps-install" },
	{ UID1, GID1, SUID1, SGID1, "xr", SYSEXE "/xbps-remove" },
	{ UID1, GID1, SUID1, SGID1, "sv", SYSEXE "/sv" },
	/* Linux/Debian */
	{ UID1, GID1, SUID1, SGID1, "apt", SYSEXE "/apt" },
	/* Linux/Arch */
	{ UID1, GID1, SUID1, SGID1, "pacman", SYSEXE "/pacman" },
	/* Python. */
	{ UID1, GID1, SUID1, SGID1, "pip3", SYSEXE "/pip3" },
	{ UID1, GID1, SUID1, SGID1, "pip2", SYSEXE "/pip2" },
	/* Archlinux package manager. */
	{ UID1, GID1, SUID1, SGID1, "pacman", SYSEXE "/pacman"},
	/* System utils. */
	{ UID1, GID1, SUID1, SGID1, "shutdown", SYSEXE "/shutdown"},
	{ 0 },
};
