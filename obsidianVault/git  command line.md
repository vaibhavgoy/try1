1.  git rm --cached "file name"  (to remove the file from staging area)
2. git rm "file name" (remove both from staging area and hard disk)
3. touch .gitignore
4. touch logs.log (this will ignore all the log file in the staging area)
5. git add "Directory"/\*.txt (add all the txt file in directory and its subdirectories in tje staging area)
6.  
`shellLists the files in your .ssh directory, if they exist
``$ ls -al ~/.ssh
7. ``````to generate a new ssh key
$ ssh-keygen -t ed25519 -C "your_email@example.com"
8. ```shell "to add the ssh key to ssh agent"
$ eval "$(ssh-agent -s)"
> Agent pid 59566

9.  ```shell to add your ssh key to your github account 
$ ssh-add ~/.ssh/id_ed25519
10.  ```shell to copy your ssh key to the clipboard
$ cat ~/.ssh/id_ed25519.pub
 Then select and copy the contents of the id_ed25519.pub file
 displayed in the terminal to your clipboard

11. 
12. 
13.  passphrase of ssh key of github : Vaibhav30@