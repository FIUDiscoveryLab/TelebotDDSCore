## DDSCore

- RTI DDS wrapper functions/classes
- IDL files for the entire project
- Generated message files for multiple languages

## Languages

These are the languages that are currently supported with DDSCore wrappers. Note: The level of maturity/implementation may vary between languages.

*C++ (Most mature)
*Java

## Platforms

Since DDSCore is just a collection of source and IDL files, it is available for use on any platform available to the RTI DDS library.

## Dependencies

DDSCore uses the Utility submodule, mainly for logging. Make sure the Utility submodule is at the same level as the DDSCore submodule in the source tree.

## Using CrewCore

In general, you probably will not need to directly add this submodule to your project, since you can just start your project from the CrewCore template application, which has DDSCore already included as a submodule. This is the safest way to use this module, as CrewCore is project that is updated, built, and tested on a frequent basis and has example placeholder code to illustrate the use of DDSCore's functionality.

## Interfaces

The following are various interfaces that have been developed to mate with other communication systems.

*ROS-DDS Bridge

## Usage

# C++ 

    - Pull the DDSCore submodule directly to your project's source folder
    - Make sure the DDSCore directory is at the same level as the Utility submodule's directory
    - Include DDSCore/Source/Cpp/CCommunicator.h to create a CCommunicator, which gives you access to all of the wrapper functions and classes
    - Include DDSUtil.h to get access to some various utility functions
    - Include specific message support headers from the DDSCore/Source/Cpp/Generated/ directory to create IDL generated types (i.e., VideoSupport.h)
    
# Java
    
    - Pull the DDSCore submodule directly to your project's source folder
    - Import DDSCore.Source.Java.* to get access to the CCommunicator class for factory/utility/wrapper functionality.
    - Import specific message type support classes for the messages you'd like to send/receive.
    - Ex: import DDSCore.Source.Java.Generated.aeondds.common.*;

## Generating IDL

To generate language specific source files for the DDS message types defined by the included IDL files, you will need to have RTI DDS 5.1 installed to ~/RTI/.

    - Navigate to DDSCore/Scripts/
    - Run the command: ./build-scripts-<language>.sh
    - Ex: ./build-scripts-cpp.sh
    
The resulting source files will be generated and copied to DDSCore/Source/<language>/Generated/

## Upgrading

To update your version of DDSCore, do the following:

    # Navigate directly to the submodule's directory
    cd DDSCore

    # Make sure you've checked out the branch you would like to pull updates from
    git checkout master
    
    # Update
    git pull
    
    # Go back to your project's directory
    cd ..
    
    # Commit the submodule update for your project
    git commit -am "Pulled down latest version of DDSCore"
