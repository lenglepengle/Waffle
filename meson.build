# following tutorial by durkisneer
# for some reason, i don't need to run the reconfigure, and i can just compile and run :p
# it should not have taken an hour to follow a ten minute tutorial lol
project(
    'waffle-engine', 
    'cpp',
    default_options: ['default_library=static']
)

include = include_directories('include')

# I don't think I'll use fmt, but I think I should learn this for when i eventually include ixwebsockets and volk or something
fmt_dep = dependency('fmt')

executable(
    'waffle', 
    ['main.cpp', 'src/test.cpp'], 
    include_directories: include,
    dependencies: [fmt_dep]
)