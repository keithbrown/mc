oal2masl
===================

This command line tool converts the OAL action language in an xtUML project into MASL  
action language. The tool is distributed as an add-on package that requires an existing
BridgePoint installation.  It should also be noted that the user must have write access
inside the BridgePoint installation folder in order to run this tool.   


Setup
------------
1. [Download the add-on package](https://s3.amazonaws.com/xtuml-releases/engineering-deliveries/OAL2MASL/oal2masl.zip)  
2. Extract the ```oal2masl.zip``` file inside ```<BridgePoint installation>/tools/mc/```   
3. You are now ready to run the tool ```<BridgePoint installation>/tools/mc/bin/oal2masl```  

Syntax
------------
```
oal2masl -w <workspace directory> -p <project name> 
```
   
| Parameter             | Description                          |
|-----------------------|--------------------------------------|
| -w &lt;workspace directory&gt;| Specify an absolute directory path to an eclipse workspace |
| -p &lt;project name&gt;| Specify the name of the project inside the given workspace |
  
     
Notes
------------
* The tool is located in the subdirectory ```<BridgePoint Home>/tools/mc/bin```
* Output is put into the ```src/``` folder under the specified project
* Progress and error messages are reported to stderr
* Invoking the tool with missing parameters or syntax errors produces a message indicating proper usage
  
  
Example
------------
```
$ cd /opt/xtuml/BridgePoint/tools/mc/bin
$ oal2masl -w /home/user/workspace1/ -p IPLink
```

