# following tutorial by durkisneer
# for some reason, i don't need to run the reconfigure, and i can just compile and run :p
# it should not have taken an hour to follow a ten minute tutorial lol
project(
    'waffle-engine', 
    'cpp',
    default_options: ['default_library=static']
)

include = include_directories('include')

sdl3_dep = dependency('sdl3')
sdl3_image_dep = dependency('sdl3_image')

executable(
    'waffle', 
    ['main.cpp', 'src/waffle.cpp'], 
    include_directories: include,
    dependencies: [sdl3_dep, sdl3_image_dep]
)