# whowas
Who was the domain name you checked a while ago or a better whois!

# Usage
```
# whois data for DOMAIN with optional NOTES
$ whowas DOMAIN [NOTES]

# list of available TLDs
$ whowas tlds

# whoise server for a TLD
$ whowas fun

# Interact with the git repository for recorded whois data
$ whowas git [GIT-COMMAND]
```

# Usecase
```
$ whowas myclinetsbusiness.com 'a nice alternative domain name'
...

Recorded 'TAKEN' for domain 'myclinetsbusiness.com'
```

All the records are stored under `~/.whois/data` and maintained by git
```
$ whowas log
```
Which will essentially do
```
$ cd ~/.whois/data
$ ls
myclinetsbusiness.com myclinetsbusiness.com-STATUS
$ git log
```

# Status
Stable.
Requires bash potato framework.
