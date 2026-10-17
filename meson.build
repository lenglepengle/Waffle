# following tutorial by durkisneer
# for some reason, i don't need to run the reconfigure, and i can just compile and run :p
# it should not have taken an hour to follow a ten minute tutorial lol
project(
    'waffle-engine', 
    'cpp',
    default_options: ['default_library=static']
)

include = include_directories('include')

#using wrapper to save time on download configurations
asio_dep = dependency('asio')
crow_dep = dependency('Crow')

executable(
    'waffle', 
    ['main.cpp', 'src/crowMain.cpp'], 
    include_directories: include,
    dependencies: [crow_dep, asio_dep]
)