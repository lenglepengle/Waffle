project(
    'waffle-engine', 
    'cpp',
    default_options: [
        'default_library=static',
        'warning_level=2'#throw away some annoying warnings
        ]
)

include = include_directories('include')

sdl3_dep = dependency('sdl3')
sdl3_image_dep = dependency('sdl3_image')
glm_dep = dependency('glm')

#meson doesn't have a COMPONENTS equivelent, so you just declare each individually
vulkan_dep = dependency('vulkan')
shaderc_dep = dependency('shaderc')
volk_dep = dependency('volk')
#I downloaded the files individually, so I think I also need to include vma, contrary to the video
vma_dep = dependency('VulkanMemoryAllocator')

executable(
    'waffle', 
    ['main.cpp', 'src/waffle.cpp', 'src/application.cpp'], 
    include_directories: include,
    dependencies: [sdl3_dep, sdl3_image_dep, glm_dep, shaderc_dep, volk_dep]
)