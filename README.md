# SoftwareArchitectureCLassApplication
This is sandbox code to show proof of concept usages of some principles taught in University of Cincinnati's Software Architecture Class.

This code base will be used for several assignments, but it's value comes from having several libraries in play, as well as some example usages of concepts of singletons, static initializers, journaling, and automation APIs

Additionally, this also shows how to setup a Basic Action to verify a merge request compiles or not.


This software to show off some workflows with using Java and automation APIs depends upon a Java Provider to present.  Otherwise a build error will occur.

To Resovle this install a Java JDK (such as Adopt OpenJDK), and then provide the proper header includes and library location.  It is being proposed as future enhancment to make the jvm library be loaded dyanmically.

Or optionally comment out the code in PerformJavaAutomationWorkflow, and turn off building the JavaLoader library.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------

### Estimates
>> We estimate that the requirements for the assignment will take us 3 hours to be completed
>> We actually took around 4 - ish hours to completely do the assignment because of some unforeseen issues we faced, for instance we faced an issue while looking to download doxygen - for some reason we were not able to get it from doxygen's official site so we used the one available in sourceforge.net.
