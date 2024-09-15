ifconfig | sed -rn 's|.*(([[:xdigit:]]{2}:){5}[[:xdigit:]]{2}).*|\1|p'
