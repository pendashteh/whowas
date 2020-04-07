# whowas
Who was the domain name you checked a while ago or a better whois!

# Usage
```
$ whowas domain_name [notes]
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
