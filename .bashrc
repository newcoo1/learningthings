# .bashrc

# Source global definitions
if [ -f /etc/bashrc ]; then
	. /etc/bashrc
fi

# Uncomment the following line if you don't like systemctl's auto-paging feature:
# export SYSTEMD_PAGER=

# User specific aliases and functions
#export DISPLAY=:1
export PS1='[\u@\W]\$'
export PATH=.:$PATH:

# added by Anaconda3 4.4.0 installer
export PATH="/home/cyl/anaconda3/bin:$PATH"
