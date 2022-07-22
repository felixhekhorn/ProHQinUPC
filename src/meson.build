# configure
conf_data = configuration_data()
conf_data.set('VERSION_STR', meson.project_version())

# write
configure_file(output : 'config-buildtime.hpp',
               configuration : conf_data)

configuration_inc = include_directories('.')

# add sources
sources = []

sources += [
    'ME/BQED.cpp',
    'ME/A1.cpp',
    'ME/A2.cpp',
    'ME/A3.cpp',
    'ME/ROK.cpp',
    'ME/RQED.cpp',
    'ME/RCounterYm.cpp',
    'ME/RCounterX.cpp',
    'ME/RCounterXYm.cpp'
]

sources += [
    'PhasespacePoint.cpp',
    'Integration.hpp',
    'ProHQinUPC.cpp',
    'IntegrationKernel.cpp'
]


# build
# LeProHQpp = shared_module(
#     'LeProHQpp',
#     ['Python.cpp'] + sources,
#     name_prefix: '',
#     include_directories : [inc, configuration_inc],
#     dependencies: [gsl_dep, gslcblas_dep, dvegas_dep, lhapdf_dep, boost_dep, rk_dep, py_dep, pye_dep, yaml_dep],
# )
executable(
   'ProHQinUPC',
   ['main.cpp'] + sources,
   include_directories : inc,
   dependencies: [gsl_dep, boost_dep, lhapdf_dep, dvegas_dep, rk_dep]
)
